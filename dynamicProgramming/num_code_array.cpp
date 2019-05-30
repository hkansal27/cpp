
#include<iostream>
using namespace std;

// recursive
int num_code(int *n, int size) {

    if(size <= 1) {
        return 1;
    }

    int l = n[size - 2] * 10 + n[size -1];
    int smallans1 = 0, smallans2 = 0;
    if( l <= 26) {
        smallans2 = num_code(n, size - 2);
    }

    smallans1 = num_code(n, size -1);

    return smallans1 + smallans2;
}

// recursive dp
int num_code2(int *n, int size, int * arr) {

    if(size <= 1) {
        return 1;
    }

    if(arr[size] == 0) {
        int l = n[size - 2] * 10 + n[size -1];
        int smallans1 = 0, smallans2 = 0;
        if( l <= 26) {
            smallans2 = num_code2(n, size - 2, arr);
        }
        smallans1 = num_code2(n, size -1, arr);

        arr[size] = smallans1 + smallans2;
    }
    int output = arr[size];
    delete [] arr;
    return output;

}


//  iterative
int num_code_i(int *n, int size) {

    int * arr = new int(size + 1);

    for(int i =0 ; i<= size; i++)
        arr[i] = 0;

    arr[0] = 1;
    arr[1] = 1;

    for(int i = 2; i <= size; i++) {
        int l = n[i - 2] * 10 + n[i -1];
        int output = 0;
        if( l <= 26) {
            output += arr[i-2];
        }

        output += arr[i-1];

        arr[i] = output;
    }
        return arr[size];

}


int main() {

    int n[5] = {1,2,3,1,5};

    int arr[6] = {0,0,0,0,0,0};

    cout<<num_code(n, 5)<<endl;

    cout<<num_code2(n, 5, arr)<<endl;

    cout<<num_code_i(n, 5)<<endl;

    return 0;
}
