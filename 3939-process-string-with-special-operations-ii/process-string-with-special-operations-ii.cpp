class Solution {
public:
    char processStr(string s, long long k) {
        long long len = 0;

        // Forward pass: final length
        for(char ch : s) {
            if(ch >= 'a' && ch <= 'z') {
                len++;
            }
            else if(ch == '*') {
                if(len > 0) len--;
            }
            else if(ch == '#') {
                len = min(len * 2, (long long)4e18);
            }
            else if(ch == '%') {
                // length unchanged
            }
        }

        if(k >= len) return '.';

        bool rev = false;

        for(int i = s.size() - 1; i >= 0; i--) {
            char ch = s[i];

            if(ch >= 'a' && ch <= 'z') {
                len--;

                long long pos = rev ? len : len;

                if(k == pos) return ch;
            }
            else if(ch == '*') {
                len++;
            }
            else if(ch == '#') {
                long long half = len / 2;

                if(k >= half) k -= half;

                len = half;
            }
            else if(ch == '%') {
                rev = !rev;
                k = len - 1 - k;
            }
        }

        return '.';
    }
};