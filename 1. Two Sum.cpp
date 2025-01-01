class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int>map;
        map.insert({nums[0],0});
        for(int i = 1; i < n; i++){
           if(map.find(target - nums[i]) != map.end()){
            return {map[target - nums[i]], i};
           }
           map[nums[i]] = i;
        }
        return {0, 0};
    }
};
