
#include<iostream>

using namespace std;

void mergeArray(int a[], int si, int mi, int ei) {

    int length = (ei - si) + 1;

    int c[length];

    int i = si, j = mi+1;

    for( int k = 0; k < length; k++ ) {
        if(a[i] <= a[j] ) {
            if(i<= mi) {
               c[k] = a[i];
               i++;
            } else {
                c[k] = a[j];
                j++;
            }
        } else {
             if(j<= ei) {
               c[k] = a[j];
               j++;
            } else {
                c[k] = a[i];
                i++;
            }
        }
    }
    i = 0;
    for(int k = si; k <= ei; k++ ) {
        a[k] = c[i];
        i++;
    }
}

void mergeSort(int a[], int si, int ei) {

    if(si >= ei) {
        return;
    }
    int mid = (si + ei) / 2;

    mergeSort(a, si, mid);
    mergeSort(a, mid+1, ei);

    mergeArray(a, si, mid, ei);
}

int main() {

    int a[] = {1,4,1,8,6,9,5,8,2,3,5,10,2,4,7};

    mergeSort(a, 0, 14);

    for(int i = 0; i< 15; i++) {
         cout<<a[i]<<" ";
    }

    return 0;
}
