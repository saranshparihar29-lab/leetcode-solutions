class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int mid;
        int low=0;
        int high =nums.size()-1;

        //find first 
        while(low<=high){
            mid=high+(low-high)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;//left part
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        low=0;
        high =nums.size()-1;
        //last element
        while(low<=high){
            mid=high+(low-high)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;//right part
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        vector<int> a(2);
        a[0]=first;
        a[1]=last;
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna