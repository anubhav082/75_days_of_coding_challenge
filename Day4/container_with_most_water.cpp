// container with most water

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        
        int low=0;
        int high=n-1;
        
        int maxWater=0;
        
        while(low<high)
        {
            int distance=high-low;
            
            int minheight = min(height[low],height[high]);
            
            maxWater = max(maxWater,minheight*distance);
            
            if (height[low]<height[high])
                low++;
            else
                high--;
        }
        
        return maxWater ;
        
    }
};
