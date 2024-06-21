// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    
    int n1,n2;
    
    cout<<"Enter the size of v1 & v2: ";
    cin>>n1>>n2;
    
    
    
    vector <int> v1;
    int ele;
    
    for(int i=0; i<n1; i++){
        cout<<"Enter the elements of v1: ";
        cin>>ele;
        
        v1.push_back(ele);
    }
    
    vector <int> v2;
    for(int i=0; i<n2; i++){
        cout<<"Enter the element of v2: ";
        cin>>ele;
        
        v2.push_back(ele);
    }
   
   
    set <int> st;
    for(auto it = v1.begin(); it < v1.end(); it++)
        st.insert(*it);
        
    for(auto it = v2.begin(); it < v2.end(); it++)
        st.insert(*it);
        
    vector<int> v3;
    
    for(auto it : st)
        v3.push_back(it);
        
        
    cout<<"Union of Sorted Array is: ";
    for(auto it = v3.begin(); it < v3.end(); it++)
        cout<<*it<<" ";

    return 0;
}
