
// return the subset of the input array in the same array recursively.

#include<iostream>

using namespace std;


int subset(int arr[], int n, int output[][1000]) {

    if(n==1) {
        output[0][0] = '\0';
        output[0][1] = arr[n-1];
        output[1][1] = '\0';
        return 2;
    }

    int smallerOutput = subset(arr+1, n-1, output);

    for(int i = 0; i< smallerOutput; i++) {
        output[0][smallerOutput + i] = arr[0];
        int j = 0;
        while(output[j][i] != '\0') {
            output[j+1][smallerOutput + i] = output[j][i];
            j++;
        }
        output[j+1][smallerOutput + i] = '\0';
    }

    return 2*smallerOutput;
}

int main() {

    int size;
    cin>>size;
    int input[size];
    for(int i=0; i< size; i++)
        cin>>input[i];

    int output[size][1000];

    int count = subset(input, size, output);

    for(int i=0;i<count;i++) {
        int j =0;
        while((output[j][i] != '\0') && (j<=size)) {
            cout<<output[j][i]<<" ";
            j++;
        }
        cout<<endl;
    }

    return 0;
}

