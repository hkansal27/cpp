

#include<iostream>
#include<math.h>

using namespace std;



int balanceBT(int height) {

    if(height == 0 || height == 1)
        return 1;

    int x = balanceBT(height - 1);
    int y = balanceBT(height - 2);

    long m = pow(10, 9) + 7;


    long ans1 = (long) x * x;
    long ans2 = (long) y * x * 2;

    int mAns1 = (int) ans1 % m;
    int mAns2 = (int) ans2 % m;

    int ans = (mAns1 + mAns2) % m;

    return ans;
}

int main() {

    int h;
    cin>>h;

    int c = balanceBT(h);

    cout<<c<<endl;

    return 0;
}

