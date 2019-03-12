
// check whether a array is sorted or not recursively

#include<iostream>

using namespace std;

void isArraySorted(int a[], int lastIndex) {

    if(lastIndex == 0) {
        cout<<"Array Sorted"<<endl;
        return;
    }

    if(a[lastIndex]<a[lastIndex - 1]) {
        isArraySorted(a, lastIndex-1);
    } else {
        cout<<"Array is not Sorted"<<endl;
        return;
    }

}

int main() {

    int a[] = {6,5,4,3,2,1,0};

    isArraySorted(a,6);

    return 0;
}
