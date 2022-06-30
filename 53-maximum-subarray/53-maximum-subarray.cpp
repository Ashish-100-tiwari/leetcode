class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0;
        int maxsum=INT_MIN;
        if(nums.size()==1){
                return nums.front();
            
        }else{
        for(int i=0;i<nums.size();i++){
            currsum=currsum+nums[i];
            if(currsum>maxsum){
                maxsum=currsum;
            }
            if(currsum<0){
                currsum=0;
            }
            
        }
        return maxsum;
        }
    }
        
};