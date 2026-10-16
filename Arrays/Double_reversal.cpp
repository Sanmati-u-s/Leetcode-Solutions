class Solution {
public:
    bool isSameAfterReversals(int num) {
        int reversed1 = 0, reversed2 = 0;
        if (num == 0) return true;
        if (num % 10 == 0) return false;
        return true;
    } 
};