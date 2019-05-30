
#include<iostream>

using namespace std;

int MOD=1000000007;

int alphaCodeString(string str, int size) {
    int *arr = new int(size + 1);
    arr[0] = 1;
    arr[1] = 1;

    int output;

    for(int i = 2; i <= size; i++) {
        output = 0;
        output += arr[i-1];

        int x = (int) str[i-1];
        x -= 48;
        int y = (int) str[i-2];
        y -= 48;

        if((y*10 + x) <= 26 ) {
            output += arr[i-2];
        }
        arr[i] = output % MOD;
    }
    return arr[size];
}

int main() {

    string str;

    while(1) {
        string input;
        cin>> input;
        if(input == "0")
            break;

        cout<<alphaCodeString(input, input.length())<<endl;
    }

    return 0;
}
