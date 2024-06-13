// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    
    int temp[high-low+1],i=0;
    
    
    int left = low,right = mid+1;
    
    while(left <= mid && right <= high){
        
        if(arr[left] < arr[right])
            temp[i++] = arr[left++];
            
        else
            temp[i++] = arr[right++];
            
    }
    
    while(left <= mid){
        temp[i++] = arr[left++];
        
    }
    
    while(right <= high){
        temp[i++]  = arr[right++];
    }
    
    int k=0; 
    
    printf("\n");
    for(int i=low; i<=high; i++)
        arr[i] = temp[k++];
    
}


void merge_sort(int arr[],int low,int high){
    
    if(low == high)
        return;
        
    int mid = (low+high)/2;
    
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}

int main() {
    // Write C++ code here
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin>>arr[i];
          
    merge_sort(arr,0,n-1);
    
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";


    return 0;
}
