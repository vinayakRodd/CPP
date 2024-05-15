/*



Enter the number of lines: 5 --> Input

Output:-

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/


#include <iostream>
using namespace  std;



void print1(int n){
    
    int stars=1,spaces;

    for(int i=1; i<=n; i++){

        spaces = i;
            
            
        for(int j=1; j<=i; j++){
            
            cout<<stars<<" ";
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
