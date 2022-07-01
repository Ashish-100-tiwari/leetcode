class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    set<int> m;
    bool b=0;
    for(int i=0;i<nums.size();i++){
        m.insert(nums[i]);
    }
      if(m.size()<nums.size()){
          b=1;
      }
        return b;
    }
};