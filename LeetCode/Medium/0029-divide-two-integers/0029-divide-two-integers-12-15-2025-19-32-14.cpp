class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == 0) return 0;
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int sign = 1;
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
            sign = -1;
        }
        long long n = abs((long long)dividend);  
        long long d = abs((long long)divisor);
        long long ans = 0;
        while (n >= d) {
            int count = 0;
            while (n >= (d << (count + 1))) {
                count++;
            }
            n -= d << count;  
            ans += 1 << count;
        }
        if (sign == -1 && ans > INT_MAX) {
            return INT_MIN;  
        }
        if (ans > INT_MAX) {
            return INT_MAX;
        }
        return (sign == 1) ? ans : -ans;    
    }
};