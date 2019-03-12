// merge two sorted array
#include<iostream>

using namespace std;


mergeSort(int a[], int p, int q, int r) {

    int len1 = q-p+1;
    int len2 = r-q;

    int A[len1 + 1], B[len2+1];

    for(int i = 0; i< len1; i++) {
        A[i] = a[p+i];
    }

    for(int i = 0; i< len2; i++) {
        B[i] = a[q+i+1];
    }

    A[len1] = 9999;
    B[len2] = 9999;

    int c[r+1];


    int i = 0, j = 0;
    int k = 0;

    while(k<=(r-p)) {

        if(A[i] <= B[j]) {
            c[k] = A[i];
            i++;
        } else {
            c[k] = B[j];
            j++;
        }
        k++;
    }

    for(i=0;i<=r;i++) {
        cout<<c[i]<<" ";
    }
}

int main() {

    int a[] = {4,7,8,9,25,7,9,11,12};


    mergeSort(a, 0,4,8);

    return 0;
}
