//https://leetcode.com/problems/sort-colors/description/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = -1;
        int one = 0;
        int two = nums.size();
        while(one < two){
            if(nums[one] == 0){
                zero++;
                nums[one] = nums[zero];
                nums[zero] = 0;
                one++;
            }else if(nums[one] == 2){
                two--;
                nums[one] = nums[two];
                nums[two] = 2;
            }else{
                one++;
            }
        }
    }
}; 
