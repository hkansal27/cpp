
// quick sort
#include<iostream>

using namespace std;

void swapArrayIndex(int a[], int fromIndex, int toIndex) {
    int temp = a[fromIndex];
    a[fromIndex] = a[toIndex];
    a[toIndex] = temp;
}

int partitionArray(int a[], int si, int ei) {

    int pivot = a[si];
    int minPivotCount = si;
    int length = ei - si + 1;

    for(int i = si + 1; i<= ei; i++ ) {
        if(a[i] <= pivot) {
            minPivotCount++;
        }
    }

    swapArrayIndex(a, si,minPivotCount);

    int i = si, j = ei;

    while(i<=minPivotCount && j>minPivotCount) {
        if(a[i] <= a[minPivotCount])
            i++;
        if(a[j] > a[minPivotCount])
            j--;

        if(a[i] > a[minPivotCount]) {
            if(a[j] > a[minPivotCount]) {
                j--;
            } else {
                swapArrayIndex(a, i, j);
            }
        }

    }

    return minPivotCount;
}

void quickSort(int a[], int si, int ei) {

    if(si >= ei) {
        return;
    }
    int c = partitionArray(a, si, ei);

    quickSort(a, si, c-1);
    quickSort(a, c+1, 9);
}

int main() {

    int a[] = {6,9,1,4,7,5,3,6,5,8};

    quickSort(a,0,9);


    for(int i = 0; i< 10; i++)
        cout<<a[i]<<" ";

    return 0;
}
