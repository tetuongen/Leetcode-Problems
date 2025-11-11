class Solution {
public:
    int mySqrt(unsigned int x) {
        if (x == 0) return 0;
        while (true) {
            unsigned int i = 1;
            while (i*i < x) i++;
            if (i*i == x) return i;
            if (i*i > x) return i-1;
        }
        return 0;
    }
};