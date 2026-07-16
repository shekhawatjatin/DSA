class Solution {
public:
    bool check(string &s, int i) {
        if (i >= s.size() / 2)
            return true;

        if (s[i] != s[s.size() - 1 - i])
            return false;

        return check(s, i + 1);
    }

    bool isPalindrome(string s) {
        string temp;

        for (char c : s) {
            if (isalnum(c))
                temp += tolower(c);
        }

        return check(temp, 0);
    }
};