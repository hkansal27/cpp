
// find all the index of a number in a array recursively
#include<iostream>

using namespace std;

void findAllIndices(int a[], int size, int number) {

    if(size == 1) {
        if(a[size -1 ] != number)
            return;
        else {
            cout<<size-1<<" "<<endl;
            return;
        }
    }

    if(a[size-1] == number) {
        cout<<size-1<<" ";
    }

    findAllIndices(a, size-1, number);

}

int main() {

    int a[] = {6,5,9,7,8,1,2,5,3,6,9,8};

    findAllIndices(a, 12, 5);

    return 0;
}
