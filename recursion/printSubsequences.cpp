
// print input string's all the subsequences recursion

#include<iostream>

using namespace std;

void printSub(string input, string output) {

    if(input.length() == 0) {
        cout<<output<<endl;
        return;
    }

    printSub(input.substr(1), output);
    printSub(input.substr(1), input[0] + output);
}

int main() {

    string str;

    cin>> str;

    string output = "";

    printSub(str, output);

    return 0;
}
