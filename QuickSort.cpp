// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int Partition(int arr[],int low,int high){
    
    int i=low,j=high;
    
    int pivot = low;
    
    while(j>i){
        
            while(arr[i] <= arr[pivot] && i<=high){
                i++;
            }
    
            while(arr[j] > arr[pivot] && j>=low){
                j--;
            }
            
            
        if(i<j){
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }
    
    int temp;
    temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;
    
    return j;
    
}


void qs(int arr[],int low,int high){
    
    if(low<high){
        
        int pIndex = Partition(arr,low,high); // Find Position of Pivot Element
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}


int main() {
    // Write C++ code here
    
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin>>arr[i];
        
    qs(arr,0,n-1);
    
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
