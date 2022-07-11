class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeoverlap;
        if(intervals.size()==0){
            return mergeoverlap;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> tempinterval=intervals[0];
        for(auto it:intervals){
            if(it[0]<=tempinterval[1]){
                tempinterval[1]=max(tempinterval[1],it[1]);
            }else{
                mergeoverlap.push_back(tempinterval);
                tempinterval=it;
            }
        }
        mergeoverlap.push_back(tempinterval);
        return mergeoverlap;
    }
};