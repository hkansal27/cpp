
// find index of a number in a array, if exist otherwise -1.

#include<iostream>

using namespace std;

int findIndex(int a[], int n, int number) {

    if(n==1 && a[n-1] != number) {
        return -1;
    }

    if(a[0] == number)
        return n;

    findIndex(a+1, n-1, number);

}



int main() {

    int a[] = {7,8,5,1,2,3,6,9,4,5,0};

    int reverseIndex = findIndex(a, 11, 6);

    if(reverseIndex == -1) {
        cout<<reverseIndex<<endl;
    } else {
        cout<<(11 - reverseIndex)<<endl;
    }
    return 0;
}
