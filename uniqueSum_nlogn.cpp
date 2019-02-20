// find the pair of given sum in array

// O(nlog(n))


#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int a[] = {1, 6, 7, 5, 4, 9, 2};

    int sum = 11;

    sort(a, a + 6);

    int i = 0, j = 6, k = 0;

    while(i <= j) {
        if(a[i]+a[j] == sum) {
            cout<<"find"<<endl;
            i++;
            j--;
            k++;
        }

        a[i]+a[j] < sum ? i++ : j--;
    }

    if(k == 0) {
        cout<<"not found"<<endl;
    }

    return 0;
}
