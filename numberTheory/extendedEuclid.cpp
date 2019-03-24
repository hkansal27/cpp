
#include<iostream>

using namespace std;

class Triplet{
public:
    int gcd;
    int x;
    int y;
};

Triplet extendedEuclid(int a, int b) {

    // basecase
    if(b == 0) {
        Triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;

        return ans;
    }

    Triplet smallAns = extendedEuclid(b, a % b);

    Triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a/b)*smallAns.y;

    return ans;
}

int main() {

    int a,b;

    cin>>a>>b;

    Triplet ans = extendedEuclid(a,b);

    cout<<ans.gcd<<endl;
    cout<<ans.x<<endl;
    cout<<ans.y<<endl;

    return 0;
}
