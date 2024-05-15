
/*

  Enter the number of lines: 5 --> Input

  Output:-
  
  A
  BB
  CCC
  DDDD
  EEEEE

*/



#include <iostream>
using namespace  std;



void print1(int n){
    
    char stars = 65;

    for(int i=1; i<=n; i++){

        

        for(int j=1; j<=i; j++){
            
            cout<<stars;
            
                
        }
        
        stars++;

        

        cout<<endl;
        
        
    }

}

int main(){

    int n;

    cout<<"Enter the number of lines: ";
    cin>>n;

    print1(n);
    



}
