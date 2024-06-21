// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



int main() {
    // Write C++ code here
    

    
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;
    
    int m,n;
    
    cout<<"Enter the number of elements of Vector V1: ";
    cin>>m;
    
    int ele;
    for(int i=0; i<m; i++){
        cout<<"Enter the element: ";
        cin>>ele;
        v1.push_back(ele);
    }
    
    cout<<"Enter the number of  elements of Vector V2: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<"Enter the element: ";
        cin>>ele;
        v2.push_back(ele);
    }
    
    int j=0;
    int i=0;
    
    
    while(i < m && j < n){
        
        if(v1[i] < v2[j])
            v3.push_back(v1[i++]);
            
        else
            v3.push_back(v2[j++]);
        
    }
    
    while(i < m){
        
        v3.push_back(v1[i++]);
    }
    
    while(j < n){
        v3.push_back(v2[j++]);
    }
    
    
    cout<<"\nAfter Combining the Array: ";
    for(auto it = v3.begin(); it < v3.end(); it++)
        cout<<*it<<" ";
        
        
    set <int> st;
    for(auto it = v3.begin(); it < v3.end(); it++){
        
            st.insert(*it);
    }
    
    
    cout<<"\nAfter Sorted: ";
    for(int element : st)
        cout<<element<<" "; 
    
    
    

    return 0;
}
