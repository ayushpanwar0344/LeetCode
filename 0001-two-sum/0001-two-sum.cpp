class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            int x = target - nums[i];
            if(mp.find(x) != mp.end())
            {
                vec.push_back(mp[x]);
                vec.push_back(i);
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return vec;
    }
};