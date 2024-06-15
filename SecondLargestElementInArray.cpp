// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    
    int n,largest1,largest2;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n; i++) 
        cin>>arr[i];
        
    largest1 = arr[0];
    largest2 = arr[0];
    
    for(int i=0; i<2; i++){
        
        if(i==1 && largest2 == largest1)
            largest2 = arr[1];
            
        for(int j=0; j<n-i; j++){
            
            if(i==0){
                if( arr[i] > largest1)
                    largest1 = arr[i];
            
            }
            else{
                if(arr[i] > largest2 && largest1 != arr[i]){
                    largest2 = arr[i];
                }
            }
        }
        
        int largest = largest1;
        if(i==0){
            int temp = largest;
            largest = arr[n-1];
            arr[n-1] = temp;
        }
        
    }
    
    cout<<"Second largest Element: "<<largest2;
    
    

    return 0;
}
