class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int n=nums.size();
        // int m=-1;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==target){
        //         m= i;
        //     }
        // }
        // return m;
        // binary search approach 
        int low=0,high=nums.size()-1;
        while(low<=high){
            
            int mid=(low+high)>>1;
            
            if(nums[mid]==target) return mid;
            
            // left side
            if(nums[low]<=nums[mid]){
                if(target>=nums[low]&&target<=nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(target>=nums[mid]&&target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};