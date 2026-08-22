class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, product = 1, a = n;
        while(a>0)
        {
            sum += a % 10;
            product *= a % 10;
            a /= 10;
        }
        if( n % (sum + product) == 0 )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};