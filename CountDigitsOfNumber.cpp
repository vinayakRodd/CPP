// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
     int number,count;
     

        cout<<"Enter the number: ";
        cin>>number;

        count = (int)log10(number)+1;
        
       
        
        cout<<"\nNumber of Digits "<<count;

    return 0;
}

