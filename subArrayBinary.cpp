
// find subarray from a binary array having equal 0's and 1's

// naive solution

#include<iostream>
#include<utility>

using namespace std;

pair<int,int> findSubArray(int a[], int n) {

    int zero, one;

    int maxLength = 0, temp_maxLength, start, end;

    for(int i = 0 ; i < n-1; i++) {
            zero = 0;
            one = 0;
        for(int j=i; j< n; j++) {
            a[j] == 0 ? zero++: one++;

            if(zero == one) {
                temp_maxLength = zero + one;

                if(maxLength < temp_maxLength) {
                    start = i;
                    end = j;

                    maxLength = temp_maxLength;
                }
            }
        }
    }
   return pair<int,int>(start,end);
}

int main() {

    pair<int,int> p;
    int a[] = {1,0,1,1,0,1,0,1,0,0};
    p = findSubArray(a,10);

    int length = (p.second - p.first) + 1;

    cout<<"Length: "<<length<<endl;
    cout<<"Number of 0\'s and 1\'s: "<< length/2<<endl;

    cout<<"subarray: ";

    for(int i = p.first; i <= p.second; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
