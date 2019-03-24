

#include<iostream>

using namespace std;

void gcd(int a, int b) {

    if(b == 0) {
        cout<<a<<endl;
    }

    return gcd(b, a % b);
}

int main() {

    int a,b;
    cin>>a>>b;

    if(a>= b) {
        gcd(a,b);
    } else {
        gcd(b, a);
    }

    return 0;
}
