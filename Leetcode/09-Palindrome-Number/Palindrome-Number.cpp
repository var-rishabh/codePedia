class Solution {
public:
    bool isPalindrome(int n) {
        int old = n;
        long x = 0;
        while (n > 0) {
            x = (x * 10) + n%10;
            n /= 10;
        }
        return (old == x);
    }
};