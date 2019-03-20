
// print the sub-array of the input array.

#include<iostream>

using namespace std;

void printSubsetSumK(int* arr, int size, int number, int* output) {

    if(arr[0] == '\0') {
        int j = 0, sum = 0;
        while(output[j] != '\0') {
            sum += output[j];
            j++;
        }

        if(sum == number) {
            int j = 0;
            while(output[j] != '\0') {
                cout<<output[j]<<" ";
                j++;
            }
            cout<<endl;
        }
        return;
    }

    printSubsetSumK(arr+1, size-1, number, output);

    int output1[1000];

    // copy and find the length of the output array
    int j = 0;
    while(output[j] != '\0') {
        output1[j] = output[j];
        j++;
    }
    output1[j] = arr[0];
    output1[j+1] = '\0';

    printSubsetSumK(arr+1, size-1, number, output1);
}

int main() {

    int size;
    cin>>size;

    int input[size+1];

    for(int i = 0; i< size; i++)
        cin>>input[i];
    input[size] = '\0';

    cout<<"Enter Sum"<<endl;
    int number;
    cin>>number;

    int output[size];

    output[0] = '\0';

    printSubsetSumK(input, size+1, number, output);

    return 0;
}
