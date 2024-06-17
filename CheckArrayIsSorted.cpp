// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int checkArraySorted(vector <int> &v,int n){
    
    
    for(int i=0; i<n-1; i++){
        if(v[i] > v[i+1])
            return false;
            
    }
    
    return true;
}


int main() {
    // Write C++ code here
    
    int n,ele;
    vector <int> v;
    
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<"Enter the element: ";
        cin>>ele;
        v.push_back(ele);
        
    }
    
    bool CheckVal = checkArraySorted(v,n);
    
    if(CheckVal == true)
        cout<<"Array is Sorted";
    else
        cout<<"Array not Sorted";
    
    

    return 0;
}
