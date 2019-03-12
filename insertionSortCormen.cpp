#include<iostream>


using namespace std;


increasingInsertionSort(int a[], int n) {

    int key,j;

    for(int i=1; i<n; i++) {
        key = a[i];
        j = i-1;

        while(j>=0 && a[j] > key) {

            a[j+1] = a[j];
            j--;
        }

        a[j+1] = key;
    }

    for(j=0;j<n;j++) {
        cout<<a[j]<<" ";
    }

    cout<<endl;

}

decreasingInsertionSort(int a[], int n) {

    int key,j;

    for(int i=1; i<n; i++) {
        key = a[i];
        j = i-1;

        while(j>=0 && a[j] < key) {

            a[j+1] = a[j];
            j--;
        }

        a[j+1] = key;
    }

    for(j=0;j<n;j++) {
        cout<<a[j]<<" ";
    }

    cout<<endl;
}

int main() {

    int a[] = {7,5,6,2,1,9,11,0};
    int n = sizeof(a)/sizeof(a[0]);

    increasingInsertionSort(a,n);

    decreasingInsertionSort(a,n);

    return 0;
}
