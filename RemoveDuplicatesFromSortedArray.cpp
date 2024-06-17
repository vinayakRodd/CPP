// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int removeDuplicates(vector<int> &v,int n){
    
    int i=0;
    for(int j=1; j<n; j++){
        
        
        if(v[j] != v[i]){
            v[i+1] = v[j];
            i++;
        }
    }
    
    return i;
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
    
    int index = removeDuplicates(v,n);
    
    for(int i=0; i<index+1; i++)
        cout<<v[i]<<" ";

    return 0;
}
