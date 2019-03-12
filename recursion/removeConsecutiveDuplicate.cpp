
// remove consecutive duplicates from the input string

#include<iostream>

using namespace std;

void removeConsecutiveDuplicate(char s[]) {

    if(s[0] == '\0') {
        return;
    }

    if(s[0] != s[1]) {
        removeConsecutiveDuplicate(s+1);
    } else {
        int i=1;
        for(;s[i] != '\0'; i++) {
            s[i-1] = s[i];
        }
        s[i-1] = s[i];

        removeConsecutiveDuplicate(s);
    }
}

int main() {

    char str[100];
    cin>>str;

    removeConsecutiveDuplicate(str);
    cout<<str;

    return 0;
}
