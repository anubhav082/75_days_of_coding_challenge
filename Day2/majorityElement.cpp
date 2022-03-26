// Mojority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int ans;
        
        unordered_map<int,int> mnums ;
        
        for (int i=0; i<nums.size(); i++)
            mnums[nums[i]]++ ;
        
        for (auto& c:mnums)
            if (c.second>(n/2))
                ans=c.first;
        
        return ans ;
        
    }
};
