
#include<iostream>

using namespace std;

long fac(int n) {

    long * arr = new long(n);

    for(int i =0 ; i<= n; i++)
        arr[i] = 0;

    arr[0] = 1;
    arr[1] = 1;

    for(int i = 2; i < n; i++) {
        if(arr[i] == 0) {
            int result = arr[i-1] + arr[i-2];
            arr[i] = result;
        }
    }

    long output = arr[n-1];
    delete [] arr;
    return output;
}

int main() {

    int n;

    cin>>n;

    cout<<fac(n)<<endl;

    return 0;
}
