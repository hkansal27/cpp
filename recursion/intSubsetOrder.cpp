
// output the subset of the int array using recursion
#include<iostream>

using namespace std;

int intSubset(int* arr, int size, int output[][1000]) {

    if(size==0) {
        output[0][0] = '\0';
        return 1;
    }


    int current = arr[0];
    int count = intSubset(arr+1, size-1, output);

    for(int i = count; i<2*count; i++) {
        int j = 0;
        output[j][i] = current;
        while(output[j][i - count] != '\0') {
            output[j+1][i] = output[j][i - count];
            j++;
        }
        output[j+1][i] = '\0';
    }

    return 2*count;
}

int main() {

    int size;
    cin>>size;

    int input[size];
    for(int i=0;i<size;i++)
        cin>>input[i];

    int output[size][1000];
    int count = intSubset(input, size, output);

    for(int j =0; j<count; j++) {
        int i=0;

        while(output[i][j] != '\0') {
            cout<<output[i][j]<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}
