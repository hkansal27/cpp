// to get the zero sum sub-array from the array.

#include<iostream>
#include<unordered_map>

using  namespace std;

void findSubarray(int a[], int n) {

    int sum = 0;

    unordered_map<int, int> m;
    unordered_map<int,int>::iterator it;
    m.insert(pair<int,int>(0,-1));

    for(int i=0; i<n;i++) {
        sum += a[i];

        if(m.find(sum) != m.end()) {
            it = m.find(sum);

            while(it != m.end() && it->first == sum ) {
                cout << "Subarray [" << it->second + 1 << ".." << i << "]\n";
				it++;
            }
        }

        m.insert(pair<int,int>(sum,i));
    }

}

int main() {

    int a[] = {1,5,-5,7,2,4,11,0,5,-16,11};

    int n = 11;

    findSubarray(a, n);

    return 0;
}
