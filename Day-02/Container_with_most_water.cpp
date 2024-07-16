class Solution {
public:
    int maxArea(vector<int>& height) {
        // catch-> left at 0 nd right at n-1
        // left aur right me area nikal lenge aur isko update karte rahenge
        int left = 0,right = height.size()-1;
        int ans = 0;
        while(left<right){
            int currarea = min(height[left],height[right]) * (right-left);
            ans = max(ans,currarea);
            if(height[left]<height[right])
            left++;
            else
            right--;
        }
        return ans;
    }
};