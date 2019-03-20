
// print the sub-array of the input array.

#include<iostream>

using namespace std;

void printSubset(int* arr, int size, int* output) {

    if(arr[0] == '\0') {
        int j = 0;
        while(output[j] != '\0') {
            cout<<output[j]<<" ";
            j++;
        }
        cout<<endl;
        return;
    }

    printSubset(arr+1, size-1, output);

    int output1[1000];

    // copy and find the length of the output array
    int j = 0;
    while(output[j] != '\0') {
        output1[j] = output[j];
        j++;
    }
    output1[j] = arr[0];
    output1[j+1] = '\0';

    printSubset(arr+1, size-1, output1);
}

int main() {

    int size;
    cin>>size;

    int input[size+1];

    for(int i = 0; i< size; i++)
        cin>>input[i];
    input[size] = '\0';

    int output[size];

    output[0] = '\0';

    printSubset(input, size+1, output);

    return 0;
}
