class Solution {
public:
int rev = 0;

    bool isPalindrome(int x) {
int num = x;
        while( x !=0){
        int dig = x % 10;
        rev = (rev * 10) + dig;
        x = x / 10;
        }
        return (rev == num);
        
        
    }
};