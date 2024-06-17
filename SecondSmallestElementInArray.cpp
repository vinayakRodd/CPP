// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int sSmallest(vector<int> &v,int n){
    
    int sSmallest = -1,Smallest = INT_MAX;
    
    for(int i=0; i<n; i++){
        
        if(v[i] < Smallest ){
            sSmallest = Smallest;
            Smallest = v[i];
            
        }
        
    }
    
    
    return sSmallest;
    
}

int main() {
    // Write C++ code here
    
    vector <int> v;int n,ele,secondSmallest;
    cin>>n;
    for(int i=0; i<n; i++){
            
        cout<<"\nEnter the element: ";
        cin>>ele;
        v.push_back(ele);
        
    }
    
    
    
    for(auto iterator = v.begin(); iterator != v.end(); iterator++)
        cout<<*(iterator)<<" ";
        
    secondSmallest = sSmallest(v,n);
    
    cout<<"\nSecond Smallest Element in the Array: "<<secondSmallest;
    
    
    return 0;
}
