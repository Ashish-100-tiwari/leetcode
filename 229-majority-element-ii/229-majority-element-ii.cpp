class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0,l=nums.size();
        int number1=-1,number2=-1;
        for(int el :nums){
            if(el==number1){
                cnt1++;
            }   
            else if(el==number2){
                cnt2++;
            }else if(cnt1==0){
                number1=el;
                cnt1=1;
            }else if(cnt2==0){
                number2=el;
                cnt2=1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        
        vector<int> ans;
        int count1=0,count2=0;
        for(int i=0;i<l;i++){
            if(nums[i]==number1){
                count1++;
            }else if(nums[i]==number2){
                count2++;
            }
        }
        if(count1>l/3){
            ans.push_back(number1);
        }
        if(count2>l/3){
            ans.push_back(number2);
        }
        return ans;
    }
};