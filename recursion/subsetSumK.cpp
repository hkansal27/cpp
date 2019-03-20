

// subset of sum k
#include<iostream>

using namespace std;

int subsetSumK(int* arr, int size, int number, int output[][50]) {

    if(arr[0] == '\0') {
        if(number == 0) {
            output[0][0] = '\0';
            return 1;
        } else {
            return 0;
        }
    }

    int current = arr[0];
    int a[50][50];
    int smallerCount1 = subsetSumK(arr+1, size-1, number-current, a);
    int b[50][50];
    int smallerCount2 = subsetSumK(arr+1, size-1, number, b);

    for(int i = 0; i< smallerCount2; i++) {
        int j=0;
        while(b[j][i] != '\0') {
            output[j][i] = b[j][i];
            j++;
        }
        output[j][i] = '\0';
    }

    for(int i = 0; i< smallerCount1; i++) {
        int j=0;
        while(a[j][i] != '\0') {
            output[j][i+smallerCount2] = a[j][i];
            j++;
        }
        output[j][i+smallerCount2] = current;
        output[j+1][i+smallerCount2] = '\0';
    }

    return smallerCount1 + smallerCount2;

}

int main() {

    int size;
    cin>>size;

    int input[size+1];

    for(int i=0;i<size;i++)
        cin>>input[i];

    input[size] = '\0';

    cout<<"Enter Sum"<<endl;
    int number;
    cin>>number;

    int output[size][50];
    int count = subsetSumK(input, size+1, number, output);

    for(int i = 0; i< count; i++) {
        int j =0;

        while(output[j][i] != '\0') {
            cout<<output[j][i]<<" ";
            j++;
        }

        cout<<endl;
    }

    return 0;
}
