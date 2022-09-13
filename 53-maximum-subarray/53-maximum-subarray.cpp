class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current=0;
        int maximum=INT_MIN;
         if(nums.capacity()==1){
                return nums.front();
            
        }else{
        for(int i=0;i<nums.size();i++){
            current=current+nums[i];
            if(current>maximum){
                maximum=current;
            }
            if(current<0){
                current=0;
            }
        }
        return maximum;
        }
    }
        
};