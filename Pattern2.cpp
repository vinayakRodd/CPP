/*
    Enter the number of lines: 5 --> Input

Output:- 

    
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

*/


#include <iostream>
using namespace  std;


void print1(int n){
    
    int stars;

    for(int i=1; i <= 2*n-1; i++){

        stars  = i;

        if(i > n)
            stars = 2*n-i;
            

        for(int j=1; j<=stars; j++)
            cout<<"* ";

        cout<<endl;
    }

}

int main(){

    int n;

    cout<<"Enter the number of lines: ";
    cin>>n;

    print1(n);
    



}
