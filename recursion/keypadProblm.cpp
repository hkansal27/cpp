
// possible Keypad string problem

#include<iostream>
#include <map>

using namespace std;


map<int, string> m = {
  {2,"abc"},
  {3,"def"},
  {4,"ghi"},
  {5,"jkl"},
  {6,"mno"},
  {7,"pqrs"},
  {8,"tuv"},
  {9,"wxyz"},

};

int keypadPossible(int input, string output[]) {

    if(input == 0) {
        output[0] = '\0';
        return 1;
    }
    int smallerCount = keypadPossible(input/10, output);

    string output1[smallerCount];

    for(int i = 0; i< smallerCount; i++){
        output1[i] = output[i];
    }


    string keypadNumberString = m[input%10];

        for(int j = 0; j < keypadNumberString.size(); j++) {
                char character = keypadNumberString[j];

                for(int i = 0; i<smallerCount; i++) {
                    output[i + smallerCount*j] = character + output1[i];
                }
        }
        return keypadNumberString.size() * smallerCount;
}

int main() {

    int keypadNumber;
    cin>>keypadNumber;

    string* output = new string[1000];

    int possibleCount = keypadPossible(keypadNumber, output);

    for(int i = 0; i< possibleCount; i++) {
        cout<<output[i]<<endl;
    }

    return 0;
}
