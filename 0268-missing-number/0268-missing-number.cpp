class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        int n = nums.size();
        int j;
        int sum;
        int count=0;
        int missing;

        sum=n*(n+1)/2;//expected sum
        for(int i=0;i<n;i++){
            count+=nums[i];

        }
        missing=sum-count;
        return missing;
    }
};