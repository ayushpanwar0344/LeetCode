class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start = 0;
        double sum = 0;
        double ans = -99999;
        for(int end=0; end<nums.size(); end++)
        {
            sum += nums[end];
            if(end-start+1 == k)
            {
                ans = max(ans,(sum/k));
                sum -= nums[start];
                start++;
            }
        }
        return ans;
    }
};