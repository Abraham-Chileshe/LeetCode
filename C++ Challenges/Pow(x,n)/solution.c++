//need to fix time complexity. Time Limit is exceeded at test 300/307
#include <algorithm>
class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        int count = abs(n);
        if ( (-100 < x < 100) && (INT_MIN <= n <= INT_MAX)){
            
            while(count>0){
                result *= x;
                 count--;
            }
          

            if (n == 0 || n >0)
            return result;
            else
                return 1/result;

            return 0;
        }
    }
};
