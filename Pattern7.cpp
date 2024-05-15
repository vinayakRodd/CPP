/*

Enter the number of lines: 5 -->Input

Ouput:-

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

    for(int i=1; i<=n; i++){

        spaces  = i;
        
        for(int k=1; k<=spaces; k++)
            cout<<" ";

        for(int j=n; j>=stars; j--)
            cout<<"* ";

        cout<<endl;
        
        stars++;
    }

}

int main(){

    int n;

    cout<<"Enter the number of lines: ";
    cin>>n;

    print1(n);
    



}
