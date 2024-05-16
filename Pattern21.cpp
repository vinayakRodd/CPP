/*
    Enter the number of lines: 6 --> Input
    
  6 6 6 6 6 6 6 6 6 6 6 
  6 5 5 5 5 5 5 5 5 5 6 
  6 5 4 4 4 4 4 4 4 5 6 
  6 5 4 3 3 3 3 3 4 5 6 
  6 5 4 3 2 2 2 3 4 5 6 
  6 5 4 3 2 1 2 3 4 5 6 
  6 5 4 3 2 2 2 3 4 5 6 
  6 5 4 3 3 3 3 3 4 5 6 
  6 5 4 4 4 4 4 4 4 5 6 
  6 5 5 5 5 5 5 5 5 5 6 
  6 6 6 6 6 6 6 6 6 6 6 


*/


#include <iostream>
using namespace  std;


void print1(int n){
    
    int m;
    
    for(int i=1; i<=2*n-1; i++){

        m=n;
        

        for(int j=1; j<=2*n-1; j++){
            
            
          if(i==1 || i==2*n-1)
                cout<<m<<" ";
        
          else
          if(i<=n){
              
            if(j<i){
                cout<<m<<" ";
                m--;
            }
            
            else
            if(j>=i && j<=2*n-i)
                cout<<m<<" ";
                
            else{
                m++;
                cout<<m<<" ";
            }
            
          }
          
          else{
              
              if(j<2*n-i){
                  cout<<m<<" ";
                  m--;
              }
              
              else
              if(j>=2*n-i && j<=i)
                cout<<m<<" ";
                
              else{
                  m++;
                  cout<<m<<" ";
              }    
                
              
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
