
#include<iostream>
using namespace std;



int balanceBT(int height) {

    if(height == 0 || height == 1)
        return 1;

    return balanceBT(height - 1) * balanceBT(height - 1) + (2* balanceBT(height - 1) * balanceBT(height - 2));
}

int main() {

    int h;
    cin>>h;

    int c = balanceBT(h);

    cout<<c<<endl;

    return 0;
}
