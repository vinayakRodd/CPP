/*

  Enter the number of lines: 5 --> Input

  Output:-
  
  1234554321
  1234  4321
  123    321
  12      21
  1        1

*/


#include <iostream>
using namespace  std;


void print1(int n){
    
    int num;

    for(int i=n; i>=1; i--){

        num = 0;
        
        
        for(int j=1; j<=2*n; j++){
        
            if(j<=i){
                num++;
                cout<<num;
            }
                    
            else
            if(j>i && j<=2*n-i){
                cout<<" ";
            }
            
            else{
                cout<<num;
                num--;
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
