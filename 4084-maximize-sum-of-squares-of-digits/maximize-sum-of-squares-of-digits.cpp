class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        if(num*9<sum)return ans;

        while(ans.length()<num){
            while(sum>9){
                ans+='9';
                sum-=9;
            }
            if(sum<=9 && sum>0){
                ans+=to_string(sum);
                sum=0;
            }
            while(ans.length()<num){
                ans+='0';
            }
        }
        return ans;
    }
};