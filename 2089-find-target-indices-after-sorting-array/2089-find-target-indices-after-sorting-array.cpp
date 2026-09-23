class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i;
        int j;
        int k;
        int temp;
        int n= nums.size();
        vector<int> ans;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;

                }
            }
        }
        for(k=0;k<n;k++){
            if(nums[k]==target){
                ans.push_back(k);
            }
        }
        return ans;
    }
};