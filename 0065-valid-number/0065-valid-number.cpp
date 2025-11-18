class Solution {
public:
    bool isNumber(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j && isspace(s[i])) i++;
        while (j > i && isspace(s[j])) j--;
        if (i > j) return false;
        bool number_exist = false, decimal = false, exponen = false;
        for (int k = i; k <= j; k++) {
            char c = s[k];
            if (isdigit(c)) number_exist = true;
            else if (c == '+' || c == '-') {
                if (k > i && s[k-1] != 'e' && s[k-1] != 'E') return false;
            } else if (c == '.') {
                if (decimal || exponen) return false;
                decimal = true;
            } else if (c == 'e' || c == 'E') {
                if (exponen || !number_exist) return false;
                exponen = true;
                number_exist = false;
            } else return false;
        }

        return number_exist;
    }
};