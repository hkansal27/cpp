
// sum of a array recursively

#include<iostream>

using namespace std;


int arraySum(int a[], int n) {

    if(n == 1) {
        return a[n-1];
    }

    return a[0] + arraySum(a+1, n-1);

}

int main() {

    int a[] = {6,5,4,3,2,1,0};

    int sum = arraySum(a,7);

    cout<<sum<<endl;

    return 0;
}
