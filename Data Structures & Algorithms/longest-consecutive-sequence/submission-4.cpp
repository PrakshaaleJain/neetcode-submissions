class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)  return 0;

        set<int> st;
        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }

        int ans = 1, temp = 1;
        for(auto i : st){
            if (st.find(i - 1) != st.end())  temp++;
            else
                temp = 1;
            ans = max(ans, temp);
        }

        return ans;

    }
};
