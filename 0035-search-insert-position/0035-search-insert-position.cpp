class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size()-1;

        while(low<=high){
            int mid=high+(low -high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna