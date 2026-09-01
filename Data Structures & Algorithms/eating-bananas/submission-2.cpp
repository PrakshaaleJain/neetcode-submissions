class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int ans = r;
        while(l <= r){
            int mid = (r+l)/2;
            int total = 0;
            for(int i = 0; i < n; i++)
                total += ceil(static_cast<double>(piles[i]) / mid);

            if(total > h)
                l = mid + 1;
            else{
                ans = mid;
                r = mid - 1;
            }
        }

        return ans;
    }
};
