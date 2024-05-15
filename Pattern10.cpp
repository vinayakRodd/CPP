/* Input:- n=4

 Output:-
 
      1      1
      12    21
      123  321
      12344321

*/
#include <iostream>
using namespace  std;


void print1(int n){
    
    int num;

    for(int i=1; i<=n; i++){

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
