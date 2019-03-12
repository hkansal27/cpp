// merge two sorted array
#include<iostream>

using namespace std;


mergeSortedArray(int a[], int p, int q, int r) {

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

    int length = len1 + len2;

    int i = 0, j = 0;
    int k = 0;

    while(k< length) {

        if(A[i] <= B[j]) {
            a[k] = A[i];
            i++;
        } else {
            a[k] = B[j];
            j++;
        }
        k++;
    }
}


mergeSort(int a[], int p, int r) {
    if(p<r) {
        int q = (r+p)/2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        mergeSortedArray(a, p,q,r);
    }
}

int main() {

    int a[] = {4,7,8,9,25,7,9,11,12};

    int n = sizeof(a)/sizeof(a[0]);

    mergeSort(a, 0,n-1);

    for(int i=0;i<=n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
