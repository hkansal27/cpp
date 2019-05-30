
#include<iostream>

using namespace std;

int num_code(int n) {

    if(n <= 9 ) {
        return 1;
    }

    int l = n%100;
    int smallans1 = 0, smallans2 = 0;
    if(l <= 26) {
        smallans2 = num_code(n/100);
    }

    smallans1 = num_code(n/10);

    return smallans1 + smallans2;
}

int main() {

    int n;

    cin>>n;

    cout<<num_code(n);

    return 0;
}
