// binary search recursively

#include<iostream>

using namespace std;


int binarySearch(int arr[], int n, int si, int ei) {

    if((si==ei) && (arr[si] != n)) {
        return -1;
    } else {
        int mid = (si+ei)/2;

        if(arr[mid]== n) {
            return mid;
        } else if(arr[mid] > n) {
            int index  = binarySearch(arr, n, si, mid-1);
            return index;
        } else {
            int index  = binarySearch(arr, n, mid+1, ei);
            return index;
        }
    }


}

int main() {

    int size;
    cin>>size;
    int input[size];
    for(int i=0; i< size; i++)
        cin>>input[i];

    int pivot;
    cin>>pivot;

    int index = binarySearch(input, pivot, 0, size -1 );

    cout<<index;

    return 0;
}
