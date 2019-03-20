
// print all the permutation of the input string
#include<iostream>

using namespace std;

int permutation(string str, int size, string output[]) {

    if(str.length() == 0) {
        output[0] = '\0';
        return 1;
    }


    char current = str[0];
    string a[1000];
    int smallerCount = permutation(str.substr(1), size-1, a);

    for(int i = 0; i< size; i++) {
        int j = 0;
        while(j<smallerCount) {
            output[j+smallerCount*i] = a[j].substr(0,i) + current + a[j].substr(i);
            j++;
        }
    }

    return size*smallerCount;

}

int main() {

    string str;
    cin>>str;

    int length = str.length();

    int size = 1;
    for(int i=1;i<=length; i++)
        size *= i;

    string output[size];

    size = permutation(str, length, output);

    for(int i = 0; i< size;i++)
        cout<<output[i]<<endl;

    return 0;
}
