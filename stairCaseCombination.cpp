// print all the stair case combination climb combination

#include<iostream>

using namespace std;


int stairCaseCombination(int input, int output , int number) {

    if(number > 0) {
        output = output *10 + number;
    }

    if(input < 0) {
        return 0;
    }

    if(input == 0) {
        cout<<output<<endl;
        return 1;
    }

    if(input == 1) {
        output = output *10 + 1;
        cout<<output<<endl;
        return 1;
    }

    return stairCaseCombination(input-1,output, 1) + stairCaseCombination(input-2,output, 2) + stairCaseCombination(input-3,output, 3);
}

int main() {

    int number;
    cin>>number;

    cout<<stairCaseCombination(number, 0, 0);

    return 0;
}
