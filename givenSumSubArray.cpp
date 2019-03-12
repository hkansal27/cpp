
// to get the given sum sub-array from the array.

#include<iostream>
#include<unordered_map>

using  namespace std;

void findSubarray(int a[], int n, int givenSum) {

    int sum = 0;

    unordered_map<int, int> m;
    unordered_map<int,int>::iterator it;

    for(int i=0; i<n;i++) {
        sum += a[i];

        m.insert(pair<int,int>(sum,i));

        if(m.find(sum-givenSum) != m.end()) {
            it = m.find(sum-givenSum);
            cout << "Sub-array [" << it->second + 1 << ".." << i << "]\n";
        }
    }

}

int main() {

    int a[] = {1,5,-5,7,2,4,2,11,0,5,-16,11};

    int n = 12;

    int givenSum = 13;

    findSubarray(a, n, givenSum);

    return 0;
}

