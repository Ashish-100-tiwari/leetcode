class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int m=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                m= i;
            }
        }
        return m;
    }
};