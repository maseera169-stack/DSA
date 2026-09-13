class Solution {
public:
int cnt=0;

double Power(double x,int n)
{
    if(n==0) return 1;

    double half= Power(x,n/2);
    if(n%2==0)
    return half*half;

    return x * half*half;

}
    double myPow(double x, int n) {
        // if(cnt==10) return power;w
        // power*=x;
        // cnt++;
        // myPow(x,n);
        long long N=n;
        if(N<0)
        return 1/Power(x,-N);
return Power(x,N);
    }
};