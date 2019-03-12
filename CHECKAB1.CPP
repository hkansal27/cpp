
// check input string some condition recursively

#include<iostream>

using namespace std;

bool checkAB(string input) {

    if(input[0] == '\0') {
        return true;
    }
    if(input[0] == 'a') {
        if(input.length() == 1) {
            return true;
        } else if(input[1] == 'a') {
            bool status = checkAB(input.substr(1));
            return status;
        } else if(input[1] == 'b' && input[2]=='b') {
            bool status = checkAB(input.substr(3));
            return status;
        } else {
            return false;
        }
    } else {
        return false;
    }
}


int main() {

    string input;
    cin>>input;
    if(input[0] == '\0') {
        cout<<'0'<<endl;
    } else {
        bool status = checkAB(input);
        cout<<status<<endl;
    }
    return 0;
}
