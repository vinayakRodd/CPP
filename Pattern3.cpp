/*
Enter the number of lines: 5 --> Input

Output:- 

1
12
123
1234
12345

*/

#include <iostream>
using namespace  std;


void print1(int n){
    
    int stars;

    for(int i=1; i<=n; i++){

        stars  = i;

        for(int j=1; j<=stars; j++)
            cout<<j;

        cout<<endl;
    }

}

int main(){

    int n;

    cout<<"Enter the number of lines: ";
    cin>>n;

    print1(n);
    



}
