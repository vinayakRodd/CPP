/*

    Enter the number of lines: 5 --> Input

    Output:-
    
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     *

*/


#include <iostream>
using namespace  std;


void print1(int n){
    
    int stars=1,spaces;

    for(int i=1; i<=2*n; i++){

        spaces  = i;
        
        if(i <= n){
            for(int k=n; k>=spaces; k--)
                cout<<" ";
                
            for(int j=1; j<=stars; j++)
                cout<<"* ";
            
            stars++;
        }
                
        if(i>n){
            
            
            for(int j=n; j<=spaces-1; j++)
                cout<<" ";
                
                
            for(int k=i; k<=2*n; k++)
                cout<<"* ";
               
            
            
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
