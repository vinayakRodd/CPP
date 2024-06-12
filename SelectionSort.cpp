// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
    int n;
    cin>>n;
    
    int a[n],min,temp;
    
    for(int i=0; i<n; i++)
        cin>>a[i];
        
    for(int i=0; i<=n-2; i++){
        
            min = i;
            
            for(int j=i; j<=n-1; j++){
                
                if(a[j] < a[min])
                    min = j;
            }
            
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
            
    }
    
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";
    

    return 0;
}
