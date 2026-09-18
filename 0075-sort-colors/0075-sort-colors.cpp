class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i;
        int j;
        int temp;
        int n=nums.size();
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }        
        }
    }
};