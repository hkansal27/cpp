

#include<iostream>

using namespace std;

int factorial(int a, int b) {

    int min = a <= b ? a : b;

    int c = 0;

    for(int i = 2; i<= min; i++) {
        if((a%i == 0) && (b%i == 0)) {
            c = i;
        }
    }

    return c;
}

int main() {

    int a, b;

    cin>>a>>b;

    int c = factorial(a,b);

    cout<<c<<endl;

    return 0;
}
