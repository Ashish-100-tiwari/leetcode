class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       vector<int> ans;
        int size1=nums1.size()-1,size2=nums2.size()-1;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        while(size1>=0&&size2>=0){
            if(nums1[size1]==nums2[size2]){
                ans.push_back(nums1[size1]);
                size1--;
                size2--;
            }else if(nums1[size1]>nums2[size2]){
                size1--;
            }else{
                size2--;
            }
        }
        return ans;
    }
};