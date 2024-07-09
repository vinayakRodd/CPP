// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    
    int n;
    
    cin>>n;
    
    int ele;
    
    vector <int> v;
    
    for(int i=0; i<n-1; i++){
        
        cout<<"Enter the ele: ";
        cin>>ele;
        v.push_back(ele);
        
    }
    
    for(int i=0; i<n-1; i++){
        
        cout<<v[i]<<" ";
        
    }
    
    
    int flag;
    
    
    for(int i=1; i<=n; i++){
        
        flag = 0;
        for(int j=0; j<n-1; j++){
            
            if(i == v[j]){
                flag = 1;
                break;
            }
        
        }
        
        if(flag == 0){
            cout<<"\n"<<i<<" was not there in the array";
            break;
        }
                
    }
    

    return 0;
}
