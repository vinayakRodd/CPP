#include <iostream>
using namespace  std;


void print1(int n){
    
    int num=1,m;

    for(int i=1; i<=n; i++){

        num  = i;
        
        
        for(int j=1; j<=num; j++){
        
            if(i%2 == 1 && j%2 ==1)
                    m=1;
                
            if(i%2 == 1 && j%2 == 0 )
                    m=0;
                    
            if(i%2 == 0 && j%2 == 1)
                    m=0;
            
            if(i%2 == 0 && j%2 == 0)
                    m=1;
                    
            cout<<m<<" ";
            
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
