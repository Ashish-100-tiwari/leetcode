class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if(nums.size() == 0)
            return 0;
        set<int> s;
        for(auto n : nums)
            s.insert(n);
        int res = 0;
        int count = 0;
        int prev = *s.begin();
        for(auto i : s)
        {
            if(i-prev==1)
                count++;
            else
                count = 0;
            
            res = count > res ? count : res;
            prev = i;
        }
        return res+1;
    }
};