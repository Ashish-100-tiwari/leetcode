class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> mag(26,0);
        for(int i=0;i<magazine.length();i++){
            mag[magazine[i]-'a']+=1;
        }
        for(int i=0;i<ransomNote.length();i++ ){
            if(mag[ransomNote[i]-'a']==0){
                return false;
            }
            mag[ransomNote[i]-'a']-=1;
        }
        return true;
    }
};