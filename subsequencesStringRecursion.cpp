
// find all the subsequences of the input string

#include<iostream>

using namespace std;

int subsequnences(string input, string output[]) {

    if(input.empty()) {
        output[0] = "";
        return 1;
    }
    string smallInput = input.substr(1);
    int smallSubSize = subsequnences(smallInput, output);

    for(int i = 0; i< smallSubSize; i++) {
        output[i+ smallSubSize] = input[0] + output[i];
    }

    return 2* smallSubSize;
}


int main() {

    string str;
    cin>> str;

    string* output = new string[1000];

    int countSeq = subsequnences(str, output);

    for(int i =0;i< countSeq; i++) {
        cout<<output[i]<<endl;
    }

    return 0;
}
