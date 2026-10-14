class Solution {
public:
    int reverse(int x) {
        long long  rev = 0;
        while(x != 0){
        int digit = x % 10;
        rev = (rev * 10) + digit;
        x = x / 10; 
        }

         if (rev > pow(2, 31) || rev < (pow(-2, 31)-1)) {
            return 0;
        }

                return rev;

        
    }
};