// Merge Intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans ;
        if (intervals.size()==0)
            return ans ;
        sort (intervals.begin(),intervals.end()) ;
        vector<int> temp = intervals[0] ;
        
        for (auto c:intervals)
        {
            if (c[0] <= temp[1])
                temp[1] = max(c[1],temp[1]) ;
            else
            {
                ans.push_back(temp) ;
                temp = c ;
            }
        }
        
        ans.push_back(temp) ;
        return ans ;
        
    }
};
