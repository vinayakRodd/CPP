// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
     int n1,n2,gcd;
     
     cout<<"Enter the numbers : ";
     cin>>n1>>n2;
     
     for(int i=1; i<=min(n1,n2); i++){
         
         if(n1%i == 0 && n2%i == 0)
            gcd = i;
     }
     
     cout<<gcd;
     
            
     
     

        

    return 0;
}
