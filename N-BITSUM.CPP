// sum of two binary array

#include<iostream>

using namespace std;


int main() {

    int a[] = {0,1,1,0,1};
    int b[] = {1,0,0,1,1};

    int c[] = {0,0,0,0,0,0};

    int carry = 0;

    for (int i=(5-1); i>=0;i--) {

        c[i+1] = (a[i] + b[i] + carry)%2;
        carry =  (a[i] + b[i] + carry)/2;
    }
    c[0] = carry;

    for(int j = 0; j< 6; j++ ) {
       cout<<c[j]<<" ";
    }

    return 0;
}
