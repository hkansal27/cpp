// find majority number from array
// O(n)


#include<iostream>
#include <unordered_map>

using namespace std;

int findMajority(int a[], int n) {

    unordered_map<int, int> m;

    for(int i=0;i<n;i++) {
        if(++m[a[i]] > n/2) {
            return a[i];
        }
    }
    return -1;
}

int main() {

    int a[] = {1,1,8,6,2,1,9,1,1,1};
    int size = 10;

    int maj = findMajority(a, size);

    if(maj != -1) {
        cout<<"Majority Found "<<maj<<endl;
    } else {
        cout<<"Majority not found"<<endl;
    }

    return 0;
}
