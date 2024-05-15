/*
  Enter the number of lines: 5 --> Input

  Output:-
  
  ABCDE
  ABCD
  ABC
  AB
  A
  
*/


#include <iostream>
using namespace  std;



void print1(int n){
    
    char stars;

    for(int i=1; i<=n; i++){

        stars = 65;

        for(int j=n; j>=i; j--){
            
            cout<<stars;
            stars++;
                
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
