class Solution {
public:
    vector<int> count(vector<int>& nums, int x) {
        vector<int> n;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == x) n.push_back(i);
        }
        
        return n;
    }
    
    void moveZeroes(vector<int>& nums) {
        vector<int> n = count(nums, 0);
        int plus = 0;
        
        for(int i = 0; i < n.size(); i++) {
            nums.erase(nums.begin() + n[i] - plus);
            plus ++;
        }
        
        for(int i = 0; i < n.size(); i++) nums.push_back(0);
    }
};
