class Solution {
public:
    bool isPalindrome(string s) {
    for(int i=0; i<s.size(); i++){
		// converting uppercases to lowercase
            if(s[i] >= 'A' && s[i]<= 'Z')s[i] += 32;
            
		// avoiding any operation on numbers
            else if(s[i] >= '0' && s[i] <= '9')continue;
            
		// tackling all the spaces and special characters
            else if(s[i] < 'a' || s[i] > 'z'){
                s.erase(i,1);
		
                i--;
            }
        }
        bool flag = true;
        int l = 0;
        int r = s.size() - 1;
     while(l<r){
            if(s[l] != s[r])flag = false;
            l++;
            r--;
        }
        return flag;
        
    }
};