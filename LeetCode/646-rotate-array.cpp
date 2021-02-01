class Solution {
public:
    void reverse(vector<int> &nums, int low, int high){
        while(low<high){
            swap(nums[low], nums[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k%size;
        reverse(nums, 0, size-k-1); //reverse till before the k
        reverse(nums, size-k, size-1);
        reverse(nums, 0, size-1);
    }
};