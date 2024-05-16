/*

    Enter the number of lines: 10 --> Input

    Output:-
    
  *                  *
  **                **
  ***              ***
  ****            ****
  *****          *****
  ******        ******
  *******      *******
  ********    ********
  *********  *********
  ********************
  *********  *********
  ********    ********
  *******      *******
  ******        ******
  *****          *****
  ****            ****
  ***              ***
  **                **
  *                  *

*/


#include <iostream>
using namespace  std;


void print1(int n){
    
    
    
    for(int i=1; i<=2*n-1; i++){

        for(int j=1; j<=2*n; j++){
        
            if(i<=n){
                if(j<=i){
                
                    cout<<"*";
                }
                    
                else
                if(j>i && j<=2*n-i){
                    cout<<" ";
                }
            
                else{
                    cout<<"*";
                
                }
            
            }
        
            else
            {
                if(j<=2*n-i){
                
                    cout<<"*";
                }
                    
                    
                else
                if(j>2*n-i && j<=i){
                    cout<<" ";
                }
            
                else{
                    cout<<"*";
                
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
