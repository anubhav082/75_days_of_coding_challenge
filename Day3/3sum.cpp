//  3 Sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++)
        {
            int low=i+1,high=n-1;
            while(low<high)
            {
                int sum=a[i]+a[low]+a[high];
                if(sum==0)
                {
                    ans.push_back({a[i],a[low],a[high]});
                    low++;
                    high--;
                    
                    while(low<high && a[low]==a[low-1])
                        low++;
                
                    while(high>low && a[high]==a[high+1])
                        high--;
                }
                else if(sum<0)
                    low++;
                else
                    high--;
            }
            
            while(i+1<n && a[i+1]==a[i])
                i++;
            
        }    
        
        return ans;
    }
};
