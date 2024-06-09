// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    
    map<int,int> mpp;
    
    for(int i=0; i<n; i++){
        
        cin>>a[i];
        mpp[a[i]]++;
        
    }
    
    int q;
    cin>>q;
    
    while(q--){
        int number;
        cin>>number;
        
        cout<<mpp[number]<<" ";
    }
    
    
    

    return 0;
}
