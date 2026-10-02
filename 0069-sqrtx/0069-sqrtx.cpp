class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        long long mid;

        while(low<=high){
            mid = (low+high)/2;
            if(mid*mid==x){
                return mid;
            }
            else if ((mid*mid)>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
    return high;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna