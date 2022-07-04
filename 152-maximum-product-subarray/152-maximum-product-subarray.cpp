class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long int maxp=INT_MIN,p=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            p*=nums[i];
            maxp=max(maxp,p);
            if(p==0){
                p=1;
            }
        }
        p=1;
        for(int i=n-1;i>=0;i--){
            p*=nums[i];
            maxp =max(p,maxp);
            if(p==0){
                p=1;
            }
        }
        return maxp;
    }
};