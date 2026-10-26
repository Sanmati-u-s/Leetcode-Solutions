class Solution {
public:
    int hammingWeight(int n) {
        int count;
        while(n){
            if(n % 2 == 1){
                count ++;
            }
            n /= 2;
        }

        return count ;
    }
};