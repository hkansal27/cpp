#include<iostream>

using namespace std;

bool checkPrime(int n) {

    int countN = 0;
    for(int i = 1; i*i <= n; i++) {
        if(n%i == 0) {
            if(i*i == n) {
                countN+=1;
            } else {
            countN+=2;
            }
        }
    }
    if(countN == 2) {
        return true;
    }
    return false;
}

int main() {

    int n;
    cin >> n;

    int countN = 0;

    for(int i = 1; i<= n; i++) {
        if(checkPrime(i) == true) {
            countN++;
        }
    }
    cout<<countN<<endl;
}
