/*

  Input:- Enter the number of lines: 5

  Output:- 

  A
  AB
  ABC
  ABCD
  ABCDE

*/


#include <iostream>
using namespace  std;



void print1(int n){
    
    char stars;

    for(int i=1; i<=n; i++){

        stars = 65;

        for(int j=1; j<=i; j++){
            
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
