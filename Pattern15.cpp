/*

  Enter the number of lines: 5 --> Input

  Output:-
  
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include <iostream>
using namespace  std;



void print1(int n){
    
    char stars;

    for(int i=1; i<=n; i++){

        stars = 64;
        
        for(int k=n; k>i;k--)
            cout<<" ";

            for(int j=1; j<=2*i-1; j++){
            
                if(j<=i){
                
                    stars++;
                    cout<<stars;
            
                }
            
                else{
                    stars--;
                    cout<<stars;
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
