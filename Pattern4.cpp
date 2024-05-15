/*

Enter the number of lines: 5 --> Input


1
22
333
4444
55555

*/

#include <iostream>
using namespace  std;


void print1(int n){
    
    int stars;

    for(int i=1; i<=n; i++){

        stars  = i;

        for(int j=1; j<=stars; j++)
            cout<<i;

        cout<<endl;
    }

}

int main(){

    int n;
    
    cout<<"Enter the number of lines: ";
    cin>>n;

    print1(n);
    



}
