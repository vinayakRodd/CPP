#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
   
    int n;
    cin>>n;
   
    vector<int> v;
   
    int ele;
   
    for(int i=0; i<n; i++){
       
        cout<<"Enter the element: ";
        cin>>ele;
        v.push_back(ele);
    }
   
    int shift;
   
    cout<<"Enter the shift value: ";
    cin>>shift;
   
    int rotateVal = shift % n;
   
    vector <int> arr;
  
  
    int count;
    int start;
    for(int i=0; i<n; i++){
       
        if(i<rotateVal)
            arr.push_back(v[i]);
           
        else{
            v[i-rotateVal] = v[i];
            count++;
            start = i-rotateVal;
        }
           
    }
    
    
    if(count>0){
        int j=0;
        for(int i=start+1; i<n; i++)
            v[i] = arr[j++];
    }
   
   
    for(auto it = v.begin(); it < v.end(); it++)
        cout<<*it<<" ";
   

   
   
   
       
       
    return 0;
}
