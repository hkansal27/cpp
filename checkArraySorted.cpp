#include<iostream>

using namespace std;

checkSortArray(int a[], int n) {

    int i = 0;

   while(i<n && a[i+1] < a[i]) {
        i++;
   }

   if(i == n-1) {
        cout<<"sorted"<<endl;
   } else {
       cout<<"not sorted"<<endl;
   }

}

int main() {

    int a[] = {7,6,5,4,3,2,1,0};

    int n = sizeof(a)/sizeof(a[0]);

    checkSortArray(a,n);

    return 0;
}
