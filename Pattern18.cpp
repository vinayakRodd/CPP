/*

    Enter the number of lines: 5 --> Input

  Output:-
  
  **********
  ****  ****
  ***    ***
  **      **
  *        *
  *        *
  **      **
  ***    ***
  ****  ****
  **********

  
*/

#include <iostream>
using namespace  std;


void print1(int n){
    
    int k,x;

    k=n;
    x=1;
    
    
    for(int i=1; i<=2*n; i++){

        for(int j=1; j<=2*n; j++){
        
            if(i<=n){
                if(j<=k){
                
                    cout<<"*";
                }
                    
                else
                if(j>k && j<=2*n-k){
                    cout<<" ";
                }
            
                else{
                    cout<<"*";
                
                }
            
            }
        
            else
            {
                if(j<=x){
                
                    cout<<"*";
                }
                    
                else
                if(j>x && j<=2*n-x){
                    cout<<" ";
                }
            
                else{
                    cout<<"*";
                
                }
                
            
            
           }
           
           
        
        
        }   
    
        if(i>n)
            x++;
        
        cout<<endl;
        k--;

    }
}

int main(){

    int n;

    cout<<"Enter the number of lines: ";
    cin>>n;

    print1(n);
    

}
