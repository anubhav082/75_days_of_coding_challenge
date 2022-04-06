// Maximum Area of a Piece of cake after Horizontal and Vertical Cuts

class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        int maxiwidth=max(horizontalCuts[0]-0, h- horizontalCuts[horizontalCuts.size()-1]);

        for (int i=1;i<horizontalCuts.size();i++)
        {
            int res=horizontalCuts[i]-horizontalCuts[i-1];
            maxiwidth=max(maxiwidth,res);
        }
        
        
        int maxiheight=max(verticalCuts[0]-0, w-verticalCuts[verticalCuts.size()-1]);
   
        for (int i=1;i<verticalCuts.size();i++)
        {
            int res=verticalCuts[i]-verticalCuts[i-1];
            maxiheight=max(maxiheight,res);
        }
        
        long ans= 1L* maxiheight*maxiwidth;
        return int(ans%1000000007); 
        
        
    }
};
