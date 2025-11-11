class Solution {
public:
    int reverse(int x) {
        const int min_div10 = INT_MIN/10, max_div10 = INT_MAX/10;
        int pop, rev = 0;
        while (x != 0) {
            pop = x%10;
            x = x/10;
            
            if (rev > max_div10) {
                return 0;
            }

            if (rev == max_div10 && pop > 7) {
                return 0;
            }

            if (rev < min_div10) {
                return 0;
            }
        
            if (rev == min_div10 && pop < -8) {
                return 0;
            }

            rev = pop + rev*10;
        }
        return rev;
    }
};