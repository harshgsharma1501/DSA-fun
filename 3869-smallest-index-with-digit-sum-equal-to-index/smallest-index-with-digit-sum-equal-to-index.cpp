class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int p=nums[i];
            int sum=0;
            while(p!=0){
                sum=sum+(p%10);
                p=p/10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};