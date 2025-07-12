#include<limits.h>
class Solution {
public:
    int reverse(int x) 
    {
         long long rev = 0;

        while (x != 0) {
            int ld = x % 10;            
            rev = rev * 10 + ld;
            if (rev > INT_MAX || rev < INT_MIN) 
            {
                return 0;
            }

            x = x / 10;
        }

        return (int)rev;
    }
};