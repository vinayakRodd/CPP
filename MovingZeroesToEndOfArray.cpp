// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    
    int n;
    cin>>n;
    
    vector <int> v;
    
    int ele;
    
    for(int i=0; i<n; i++){
        cout<<"Enter the element: ";
        cin>>ele;
        v.push_back(ele);
        
    }
    
    int i;
    for(i=0; i<n; i++){
        if(v[i] == 0)
            break;
            
    }
    
    int j=i;
    int temp;
    for(int i = j+1; i<n; i++){
        
        if(v[j] == 0 && v[i] != 0){
            temp = v[j];
            v[j] = v[i];
            v[i] = temp;
            j++;
        }
        
        
    }
    
    
    cout<<"After Transferring All the zeroes to the end: ";
    for(auto it = v.begin(); it < v.end(); it++)
        cout<<*it<<" "; 
    

    return 0;
}
