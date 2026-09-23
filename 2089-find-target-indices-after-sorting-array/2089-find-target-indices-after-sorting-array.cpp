class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i;
        int j;
        int k;
        int temp;
        int n= nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(k=0;k<n;k++){
            if(nums[k]==target){
                ans.push_back(k);
            }
        }
        return ans;
    }
};