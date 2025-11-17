class Solution {
public:
    double helper(double x, long long n) {
            if (x == 0) return 0;
            if (n == 0) return 1;

            double res = helper(x, n / 2);
            res = res * res;
            return (n % 2 != 0) ? (x * res) : res;
    }

    double myPow(double x, int n) {

        long long N = n;    
        double res = helper(x, llabs(N));
        return (N >= 0) ? res : 1.0 / res;

    }
};