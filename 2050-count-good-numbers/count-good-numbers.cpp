class Solution {
public:
long long mod=1000000007;
long long power(long long x,long long n){
    if(n==0)
    return 1;

    long long half=power(x,n/2);
    if(n%2==0){
        return( half*half)%mod;
    }
    return (x*half %mod *half)%mod;

}
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n/2;

        long long half1=power(5,even);
        long long half2=power(4,odd);
        return (half1*half2)% mod;
    }
};