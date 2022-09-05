class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ma(26,0);
        vector<int> na(26,0);
        int n=s.size(),m=t.size();
        if(n!=m){
            return false ;
        }
        for(int i=0;i<n;i++){
            ma[s[i]-'a']+=1;
            na[t[i]-'a']+=1;
        }
        for(int i=0;i<26;i++){
            if(ma[i]!=na[i]){
                return false;
            }
        }
        return true;
    }
};