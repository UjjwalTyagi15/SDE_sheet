// apply merge sort 


#include <bits/stdc++.h> 
long long mergesort(long long *arr,long long temp[],long long low,long long mid,long long high){
    long long count=0;
    long long i=low;
    long long j=mid+1;
    long long k=low;
    
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
         else{
             temp[k++]=arr[j++];
             count+=mid-i+1;
        }
    }
    
    while(i<=mid)
        temp[k++]=arr[i++];
    while(j<=high)
        temp[k++]=arr[j++];
    
    for(int i=low;i<=high;i++)
        arr[i]=temp[i];
    return count;   
}

long long helper(long long *arr,long long temp[],long long low,long long high)
{
    long long count=0;
    if(low<high){
        long long mid=(low+high)/2;
        count+=helper(arr,temp,low,mid);
        count+=helper(arr,temp,mid+1,high);
        count+=mergesort(arr,temp,low,mid,high);
    }
    return count;
}

long long getInversions(long long *arr, int n){
    long long temp[n];
    return helper(arr,temp,0,n-1); 
}