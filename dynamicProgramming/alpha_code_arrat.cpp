// count the numberr of alpha code respective to a input number,

#include<iostream>

using namespace std;

int alphaCode(int * n, int s) {

    if(s == 0 || s == 1)
        return 1;

    int c1 = n[0];
    int c2 = n[0]*10 + n[1];

    int output = 0;

    output += alphaCode(n+1, s -1);

    if(c2 <= 26) {
        output += alphaCode(n+2, s -2);

    return output;
    }
}

// sol is an 0 initialised array
int alphaCodeDP(int * n, int s, int * sol) {

    if(s == 0 || s == 1) {
        sol[s] = 1;
        return sol[s];
    }

    if(sol[s] > 0)
        return sol[s];

    int output = 0;
    output += alphaCode(n+1, s -1);
    if((n[0]*10 + n[1]) <= 26) {
        output += alphaCode(n+2, s -2);
    }
    sol[s] = output;
    return output;
}

int main() {

    int size;
    cin>>size;

    int * n = new int(size);
    int * sol = new int(size + 1);
    for(int i = 0; i< size; i++){
        cin>>n[i];
        sol[i] = 0;
    }
    sol[size] = 0;
    int count = alphaCodeDP(n, size, sol);
    cout<<count<<endl;
}
