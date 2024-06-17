// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int slargest(vector<int> &v,int n){
    
    int slargest = -1,largest = v[0];
    
    for(int i=0; i<n; i++){
        
        if(v[i] > largest ){
            slargest = largest;
            largest = v[i];
            
        }
        
        else
        if(v[i] < largest && v[i] > slargest)
            slargest = v[i];
    }
    
    
    return slargest;
    
}

int main() {
    // Write C++ code here
    
    vector <int> v;int n,ele,secondLargest;
    cin>>n;
    for(int i=0; i<n; i++){
            
        cout<<"\nEnter the element: ";
        cin>>ele;
        v.push_back(ele);
        
    }
    
    
    
    for(auto iterator = v.begin(); iterator != v.end(); iterator++)
        cout<<*(iterator)<<" ";
        
    secondLargest = slargest(v,n);
    
    cout<<"Second largest Element in the Array: "<<secondLargest;
    
    
    return 0;
}
