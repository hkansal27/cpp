
// check whether a number is exist or not in a array recursively

#include<iostream>

using namespace std;

bool checkNumber(int a[], int n, int number) {

    if(n==1 && a[n-1] != number) {
        return false;
    }

    if(a[0] == number)
        return true;

    checkNumber(a+1, n-1, number);

}



int main() {

    int a[] = {7,8,5,1,2,3,6,9,4,5,0};

    bool isExist = checkNumber(a, 11, 21);

    if(isExist) {
        cout<<"Present"<<endl;
    } else {
        cout<<"Not Present"<<endl;
    }

    return 0;
}
