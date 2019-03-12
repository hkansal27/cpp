// selection sort of an array

#include<iostream>

using namespace std;


selectionSort(int a[], int n) {

    int i,j,smallerElement = 0,smallerPostion = 0,temp;

    for(i=0;i<n;i++) {

        smallerElement = a[i];
        for(j=i;j<n;j++) {

            if(a[j] < smallerElement) {
                smallerElement = a[j];
                smallerPostion = j;
            }
        }
        temp = a[i];
       a[i] = a[smallerPostion];
       a[smallerPostion] = temp;
    }

    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {

    int a[] = {7,6,11,2,3,0,4,0};

    int n = sizeof(a)/sizeof(a[0]);

    selectionSort(a,n);

    return 0;
}
