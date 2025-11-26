class Solution {
public:
    int reverse(int x) {
     if (x == INT_MIN) { 
            return 0;
        }
        int sign = (x < 0) ? -1 : 1;
        x = abs(x);
        int reversed = 0;
        while (x > 0) {
            int digit = x % 10;
            x /= 10;
            if (reversed > (INT_MAX - digit) / 10) {
                return 0;
            }
            reversed = reversed * 10 + digit;
        }
        return sign * reversed;   
    }
};