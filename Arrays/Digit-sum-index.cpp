class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for( int i = 0 ; i < nums.size(); i ++){
            int digit_sum =0;
            while(nums[i] > 0){
            digit_sum += nums[i] % 10;
            nums[i] /= 10;
            }
            if(digit_sum == i) {
                return i;
                
            }
            
        
        }
    return -1;
    }
};