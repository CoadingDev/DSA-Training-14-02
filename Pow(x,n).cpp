class Solution {
public:
    double myPow(double x, int n) { 
        return solve(x, (long)n); }

    double solve(double x, loung n) {
        if (n == 0)
            return 1;
        if (n < 0)
            return solve(1 / x, -n);
        if(n%2 ==0)
            return solve(x*x, n/2);
        return x*solve(x*x, (n-1)/2); // odd condn x^9 = x * x^8;
    }
};