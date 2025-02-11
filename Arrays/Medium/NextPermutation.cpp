class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = 0;
        int less_index = nums.size()-1;
        if (nums.size() == 1)
            return;
        for (int i = nums.size()-1; i > 0; i--){
            if (nums[less_index] > nums[i])
                less_index = i;
            if (nums[i] > nums[i-1]){
                while(nums[less_index] <= nums[i-1])
                    less_index--;
                int tmp = nums[less_index];
                nums[less_index] = nums[i-1];
                nums[i-1] = tmp;
                index = i;
                break;
            }
        }
        reverse(nums.begin()+index, nums.end());
    }
};
