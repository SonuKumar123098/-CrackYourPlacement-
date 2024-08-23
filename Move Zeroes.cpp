https://leetcode.com/problems/move-zeroes/description/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero = -1;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                nonzero++;
                swap(nums[j], nums[nonzero]);
            }
        }
    }
};
