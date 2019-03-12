
#include<iostream>
#include<map>
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

void printKeypad(int input, string output) {

    if(input == 0 ) {
        cout<<output<<endl;
        return;
    }

    string keypadString = m[input%10];

    for(int j=0; j<keypadString.size(); j++) {
        printKeypad(input/10, keypadString[j]+output);
    }

}

int main() {

    int number;

    cin>>number;

    printKeypad(number, "\0");

    return 0;
}
