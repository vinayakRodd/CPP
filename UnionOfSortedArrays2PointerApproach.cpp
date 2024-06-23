// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    
    vector <int> v1 = {1,1,2,3,4,5};
    
    vector <int> v2 = {2,3,4,4,5,6};
    
    vector <int> Un = {};
    
    int j=0;
    int i=0;
    
    while(i < v1.size() && j < v2.size()){
        
        if((v1[i] <= v2[j]) ){
            if((Un.size() == 0 || Un.back() != v1[i]))
                Un.push_back(v1[i]);
                
            i++;
        }
            
              
        else{
        if(Un.size() == 0 || Un.back() != v2[j])
            Un.push_back(v2[j]);
            
        j++;
            
        }
        
    }
    
   
     while(i < v1.size()){
        if((Un.size() == 0 || Un.back() != v1[i]))
            Un.push_back(v1[i]);
        i++;
        
    }
        
    while(j < v2.size()){
        if(Un.size() == 0 || Un.back() != v2[j])
            Un.push_back(v2[j]);
            
        j++;
        
    }
     
        
    
    cout<<"Union of Arrays: ";
    for(auto it = Un.begin(); it < Un.end(); it++)
        cout<<*it<<" ";
    
    
    
    
    

    return 0;
}
