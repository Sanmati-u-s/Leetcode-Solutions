class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum = 0;
        int dig_sum = 0;
        int digit, dig;
        for(int i = 0 ; i < nums.size(); i ++){
            ele_sum +=nums[i];

            while(nums[i]){
                digit = nums[i] % 10;
                dig +=digit;
                nums[i] /=10;
            }

            dig_sum +=dig;


        }

        return (ele_sum - dig_sum);



    }
};