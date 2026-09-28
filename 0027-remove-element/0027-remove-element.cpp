class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i;
        int n=nums.size();
        int count =0;
        for(i=0;i<n;i++){
            if(val!=nums[i]){
                nums[count]=nums[i];
                count++;

            }
        }
        return count;
    }
};