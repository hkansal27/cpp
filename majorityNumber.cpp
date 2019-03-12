// high frequency number in a array
#include<iostream>

using namespace std;

int main() {

    int arr[] = {1,8,9,3,6,6,4,1,10,1, 10,10,10};
    int n = 13;

    int maxFrequency = arr[0];
    int freq = 0;

    int particularMaxFreq, particularFreq;

    for(int i = 0; i< (n-1); i++) {
        particularMaxFreq = arr[i];
        particularFreq = 0;

        for(int j=i; j<n; j++) {
            if(arr[i] == arr[j]) {
                particularFreq++;
            }
        }
        if(particularFreq > freq) {
            maxFrequency = particularMaxFreq;
            freq = particularFreq;
        }
    }

    cout<<maxFrequency<<" "<<freq<<endl;

    return 0;
}
