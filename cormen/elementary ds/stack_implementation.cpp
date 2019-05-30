
#include<iostream>
using namespace std;

#define MAX 100

class Stack {

    int top;
    int S[MAX];

public:
        Stack() {
            top = 0;
        }

        void push(int x) {
            if(top < MAX) {
                S[top++] = x;
                return;
            }
            cout<<"Overflow Stack";
        }

        int pop() {
            if(top > 0) {
                return S[--top];
            }
            cout << "Underflow Stack";
            return -1;
        }
};


int main() {

    Stack S;

    S.push(5);
    S.push(10);
    cout<<S.pop()<<'\n';
    S.push(15);
    cout<<S.pop()<<'\n';
    cout<<S.pop()<<'\n';
    S.push(20);
    cout<<S.pop()<<'\n';
    cout<<S.pop()<<'\n';
    return 0;
}
