// Rearrange the array with the alternative high and low

#include<iostream>

using namespace std;

void swap(int a[], int pos1, int pos2) {
    int k = a[pos1];
    a[pos1] = a[pos2];
    a[pos2] = k;
}

int main() {

    int a[] = {1, 2, 3, 4, 5 , 6, 7};


    for(int i=1;i<7; i=i+2) {
        if(a[i] < a[i-1]) {
            swap(a, i, i-1 );
        }
        if(a[i] < a[i+1]) {
            swap(a, i, i+1);
        }
    }

    for(int i=0;i<7;i++) {
        cout<<a[i]<<" ";
    }

    return 0;
}
