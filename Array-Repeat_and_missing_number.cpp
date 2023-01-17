// solve using maths of addition of all numbers and addition of square of all numbers .
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	long long int s=n*(n+1)/2;
    long long int p=n*(n+1)*(2*n+1)/6;
    for(int i=0;i<n;i++)
    {
        s-=(long long int)a[i];
        p-=(long long int)a[i]*(long long int)a[i];
    }
    
    long long int M=(s+(p/s))/2;
    long long int R=M-s;
    return {M,R};
    
        
}
