/*

  Enter the number of lines: 7 --> Input

  Output:-
  
  ******
  *    *
  *    *
  *    *
  *    *
  *    *
  ******


*/

#include <iostream>
using namespace  std;


void print1(int n){
    
    
    
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n-1; j++){
        
            
            if(i==1 || i==n){
                cout<<"*";
            }
            
            else{
                if(j==1 || j==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                
                
            }
           
        
        
        }   
    
        
        
        cout<<endl;
    

    }
}

int main(){

    int n;

    cout<<"Enter the number of lines: ";
    cin>>n;

    print1(n);
    

}
