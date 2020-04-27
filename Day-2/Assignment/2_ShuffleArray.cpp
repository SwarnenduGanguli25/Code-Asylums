class Solution {
    vector<int> Original;
    vector<int> Shuffle1;
public:
    Solution(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            Original.push_back(nums[i]);
        }
        for(int i = 0; i < n; i++) {
            Shuffle1.push_back(Original[i]);
        }
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        for(int i = 0; i < Shuffle1.size(); i++){
            Shuffle1[i] = Original[i];
        }
        return Shuffle1;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int n = Shuffle1.size();
        for(int i = n-1; i >= 0 ; i--) {
            int j = rand() % (i + 1);
            int temp = Shuffle1[j];
            Shuffle1[j] = Shuffle1[i];
            Shuffle1[i] = temp;
        }
        return Shuffle1;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */