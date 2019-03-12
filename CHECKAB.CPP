
// checkAB problem with the below conditions:
// a. The string begins with an 'a'
// b. Each 'a' is followed by nothing or an 'a' or "bb"
// c. Each "bb" is followed by nothing or an 'a'
#include<iostream>

using namespace std;

bool checkAB(string input) {
    if(input[0]=='a') {
        if(input.length() == 1) {
            return true;
        } else if(input[1]=='a') {
            bool status = checkAB(input.substr(1));
            return status;
        } else if((input[1] == 'b') && (input[2] == 'b')) {
            bool status = checkAB(input.substr(3));
            return status;
        } else {
            return false;
        }
    } else if(input.length() == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {

    string input;
    cin>>input;
    bool status = checkAB(input);

    cout<<status<<endl;

    return 0;
}
