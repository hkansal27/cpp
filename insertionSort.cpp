//insertion sort

#include<iostream>

using namespace std;

swap(int a[], int pos1, int pos2) {
    int temp = a[pos1];
    a[pos1] = a[pos2];
    a[pos2] = temp;
}

insertionSort(int a[], int n) {

    int i, j, k;

    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }

    for(i=1; i<n; i++) {

        j = i-1;
        k = i;

        while(j>=0) {
            if(a[j] > a[k]) {
                swap(a, j, k);
            }
            k--;
            j--;
        }
    }
    cout<<endl;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}

int main() {

    int a[] = {7,5,6,2,1,9,11,0};

    int n = sizeof(a)/sizeof(a[0]);

    insertionSort(a, n);

    return 0;
}
