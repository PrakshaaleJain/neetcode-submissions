class Solution {
public:
    int findMin(vector<int> &nums) {
       int l = 0;
        int r = nums.size() - 1;
        int ans = nums[0];

        while( l <= r){
            int mid = l + (r-l)/2;
            if(nums[l] >= nums[r]){
                ans = min(nums[mid], ans);
                if(nums[mid] >= nums[l])
                    l = mid + 1;
                else
                    r = mid - 1;
                    
            }

            else{
                ans = min(ans,nums[l]);
                break;
            }
        }
        return ans; 
    }
};
