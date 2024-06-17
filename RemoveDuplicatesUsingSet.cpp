// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


void removeDuplicates(vector<int> &v,int n){
    
    set<int>st;
    
    for(int j=0; j<n; j++){
        
        st.insert(v[j]);
        
        
    }
    
    for(auto it: st){
        cout<<it<<" ";
    }

}

int main() {
    // Write C++ code here
    
    int n,ele;
    cin>>n;
    
    
    vector <int> v;
    
    for(int i=0; i<n; i++){
        
        cout<<"Enter the element: ";
        cin>>ele;
        v.push_back(ele);
    
    }
    
     removeDuplicates(v,n);
    
    

    return 0;
}
