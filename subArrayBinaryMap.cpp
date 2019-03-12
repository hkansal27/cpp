// find max 0s 1s subarray from the binary array

#include<iostream>
#include<unordered_map>


using namespace std;

void findSubArrayMap(int a[], int n) {

    unordered_map<int, int> m;
    unordered_map<int, int>:: iterator it;

    int temp_length, length = 0;
    int startIndex, endIndex;
    int sum = 0;
    m[sum] = -1;

    for(int i = 0; i< n; i++) {

        a[i] == 0 ? -1 : 1;
        sum += a[i];



        it = m.find(sum);


        if( it != m.end()) {
                cout<<it -> second<< " "<< i<<endl;
            temp_length = (i - it-> second) + 1;

            if(temp_length > length) {
                startIndex = it-> second + 1;
                endIndex = i;
                length = temp_length;
            }
        }
        m[sum] = i;

    }

    cout<< startIndex<<" " << endIndex<<endl;
}

int main() {

    int a[] = {0,1,0,1,0,0};

    findSubArrayMap(a, 6);

    return 0;
}
