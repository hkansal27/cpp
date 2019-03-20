

// print all the permutation of the input string
#include<iostream>

using namespace std;

void printPermutation(string str, int size, string output) {

    if(str.length() == 0) {
        cout<<output<<endl;
        return;
    }

    char current = str[0];

    int outputSize = output.length();

    for(int i = 0; i <= outputSize; i++) {
        string smallOutput = output.substr(0, i) + current + output.substr(i);
        printPermutation(str.substr(1), size-1, smallOutput);
    }

}

int main() {

    string str;
    cin>>str;

    int length = str.length();

    string output;

    printPermutation(str, length, output);

    return 0;
}
