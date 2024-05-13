#include <iostream>
using namespace  std;


void print1(int n){
    
    int stars;

    for(int i=1; i<=n; i++){

        stars  = i;

        for(int j=1; j<=stars; j++)
            cout<<"*";

        cout<<endl;
    }

}

int main(){

    int n;

    cin>>n;

    print1(n);
    



}
