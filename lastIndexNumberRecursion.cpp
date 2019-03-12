
// find last index of a number in a array, if exist otherwise -1.

#include<iostream>

using namespace std;

int lastIndexArray(int a[], int size, int number) {

    if(size == 1 && a[size-1] != number) {
        return -1;
    }

    if(a[size-1] == number)
        return size-1;

    lastIndexArray(a, size-1, number);

}

int main() {

    int a[] = {5,6,5,4,2,5,6,3,8,5,9};

    int lastIndex = lastIndexArray(a,11, 3);

    cout<<lastIndex<<endl;

}
