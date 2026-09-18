class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i;
        int n=nums.size();
        int maxcount=0;
        int currentcount=0;

        for(i=0;i<n;i++){
            if(nums[i]==1){
                currentcount++;
            }
            else{
                maxcount=max(maxcount,currentcount);
                currentcount=0;
            }
        }
        return max(maxcount,currentcount);

    }
};