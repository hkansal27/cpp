
#include<iostream>

using namespace std;

int isPrime(int n) {

    bool * arr = new bool(n+1);

    for(int i = 2; i<=n; i++) {
        arr[i] = true;
    }

    arr[0] = false;
    arr[1] = false;

    for(int i = 2; i*i <= n; i++) {
        if(arr[i] == true) {
            for(int j = i*i; j <= n; j+=i) {
                arr[j] = false;
            }
        }
    }
    int c = 0;
    for(int i = 2; i<= n; i++) {
        if(arr[i] == true) {
            c++;
        }
    }
    return c;
}

int main() {
    int n;
    cin>> n;

    int c = isPrime(n);

    cout << c<< endl;

    return 0;
}
