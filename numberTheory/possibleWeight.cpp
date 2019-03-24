
#include<iostream>

using namespace std;

int possibleWeight(int a, int b, int w) {

    if(w < 0) {
        return 0;
    }

    if(w == 0) {
        return 1;
    }


   int smallerAns1 =  possibleWeight(a, b, w -a);
   int smallerAns2 =  possibleWeight(a, b, w - b);
   return smallerAns1 + smallerAns2;
}

int main() {

    int a, b, weight;

    cin>>a>>b>>weight;

    int c = possibleWeight(a,b,weight);

    cout<<c<<endl;
    return 0;
}
