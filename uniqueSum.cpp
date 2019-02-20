// find pair with given sum in arary

// using map


#include<iostream>
#include<set>

using namespace std;

int main() {

    int a[] = {1, 6, 8, 9, 5 , 6, 2};

    int sum =  11;

    set<int>::iterator it, it1;

    set<int> m;

    for(int i=0; i< 7; i++) {
        m.insert(a[i]);
    }

    for(it1 = m.begin(); it1 != m.end(); it1++) {
        it = m.find(sum - *it1);

        if(it != m.end()) {
            cout<<"Pair found "<<*it<<" "<< *it1<<endl;
        }
    }

    return 0;
}
