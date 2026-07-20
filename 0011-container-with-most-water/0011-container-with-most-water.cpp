class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int p1 = 0;
        int p2 = n - 1;
        int ans = 0;

        while(p1 < p2){
            int w = abs(p1 - p2);
            int h = min(height[p1], height[p2]);

            int area = w * h;

            if(height[p1] > height[p2]){
                p2--;
            }
            else{
                p1++;
            }
            ans = max(ans, area);
        }
        return ans;
        
    }
};