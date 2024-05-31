// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
     int num;
     
     vector <int> v;
     
     cout<<"Enter the number: ";
     cin>>num;
     
     for(int i=1; i<=sqrt(num); i++){
         
         if(num % i == 0){
             v.emplace_back(i);
             cout<<i<<" ";
             
         }
         
         if((num/i) != i){
            cout<<(num/i)<<" ";
            v.emplace_back(num/i);
         }
            
     }
     
     cout<<"\n";
     sort(v.begin(), v.end());
     for (int element : v) {
        cout << element << " ";
    }
     
            
     
     

        

    return 0;
}
