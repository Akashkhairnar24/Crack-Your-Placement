class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> v(2,-1);
        for(int i=0;i<nums.size();i++){
            int ans = target-nums[i];
            if(mp.find(ans)!=mp.end()){
                v[0] = mp[ans];
                v[1] = i;
                return v;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return v;
    }
};