
#include<iostream>

using namespace std;

class lis_class {
    int tillMax;
    int tillLongSubLength;
};

lis_class lis(int *n, int size, lis_class * sol ) {

    if(size == 1) {
        lis_class temp;
        temp.tillMax = n[0];
        temp.tillLongSubLength = 1;
        return temp;
    }

    lis_class smallOutput = lis(n+1, size -1, sol);

    if(smallOutput.tillMax < n[0]) {
        sol[size].tillLongSubLength = smallOutput.tillLongSubLength + 1 ;
        sol[size].tillLongSubLength = sol.tillMax;
    }

}

int main() {
    int n;
    cin>>n;
    int * arr = new int(n);

    for(int i = 0; i< n; i++)
        cin>>arr[i];

    lis(arr,n);
    return 0;
}
