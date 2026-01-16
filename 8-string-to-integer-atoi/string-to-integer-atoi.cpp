class Solution {
public:
    int myAtoi(string s) {
        int index = 0;
        int total = 0;
        int sign = 1;
        int n = s.length();

        // 1. Skip leading spaces
        while (index < n && s[index] == ' ')
            index++;

        if (index == n) return 0;

        // 2. Check sign
        if (s[index] == '+' || s[index] == '-') {
            sign = (s[index] == '+') ? 1 : -1;
            index++;
        }

        // 3. Convert digits
        while (index < n && isdigit(s[index])) {
            int digit = s[index] - '0';

            // 4. Check overflow
            if (total > INT_MAX / 10 || 
               (total == INT_MAX / 10 && digit > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            total = total * 10 + digit;
            index++;
        }

        return total * sign;
    }
};
