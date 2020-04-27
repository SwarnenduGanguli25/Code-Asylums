class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i, size = nums.size(), res[size];
        
        for(i=0; i < size ; i++) {
            res[(i+k)%size] = nums[i];
        }
        for(i=0;i<size;i++)
            nums[i] = res[i];
    }
};