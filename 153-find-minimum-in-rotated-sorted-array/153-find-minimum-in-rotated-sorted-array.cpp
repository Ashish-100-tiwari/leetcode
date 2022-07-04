class Solution {
public:
    int findMin(vector<int>& nums) {
        int m=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m=min(m,nums[i]);
        }
        return m;
    }
    
};