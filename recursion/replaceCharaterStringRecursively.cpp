
// replace a character from a string recursively

#include<iostream>

using namespace std;

void replaceCharacter(char s[], char c, char replaceC) {

    if(s[0] == '\0') {
        return;
    }

    if(s[0] == c) {
        s[0] = replaceC;
    }
    replaceCharacter(s+1, c, replaceC);

}

int main() {

    char str[100];
    char prior;
    char newChar;

    cin>>str;
    cin>>prior;
    cin>>newChar;

    replaceCharacter(str, prior, newChar);

    cout<<str<<endl;

    return 0;
}


