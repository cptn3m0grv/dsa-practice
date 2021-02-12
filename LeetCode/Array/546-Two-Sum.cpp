class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        
        int diff;
        for(int i=0;i<nums.size();++i){
            diff = target-nums[i];
            if(hash.find(diff)!=hash.end()){
                return {hash[diff], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
