// check for edge cases - if n=0 return 1 ,if n is negative then make is positive and make reciprocal of x. if n is int min then square x and divide  n by 2 . if (n is even ) recursions with x*x and n/2 otherwise normal recursion with x*myPOW(x,n-1);


class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0)return 1;
        if(n==INT_MIN){
            x=x*x;
            n=n/2;
        }
        
        if(n<0){
            n=-n;
            x=1/x;}
        if(n%2==0){
            return myPow(x*x,n/2);
            }
        else return (x*myPow(x,n-1));
    }
};