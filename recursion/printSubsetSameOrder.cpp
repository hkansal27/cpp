
// return the subset of the input array in the same array recursively.

#include<iostream>

using namespace std;


void subset(int* input, int output[]) {

    if(input[0] == '\0') {
        int j = 0;
        while(output[j] != '\0') {
            cout<<output[j]<<" ";
            j++;
        }
        cout<<endl;
        return;
    }

    subset(input+1, output);


    int j = 1;
    int output1[10];
    output1[0] = input[0];
    while(output[j] != '\0') {
        output1[j] = output[j-1];
        j++;
    }

    output1[j+1] = '\0';
    subset(input+1, output1);
}

int main() {

    int size;
    cin>>size;
    int input[size+1];
    for(int i=0; i< size; i++)
        cin>>input[i];
    input[size] = '\0';

    int output[size];
    output[0] = '\0';


    subset(input, output);

    return 0;
}
