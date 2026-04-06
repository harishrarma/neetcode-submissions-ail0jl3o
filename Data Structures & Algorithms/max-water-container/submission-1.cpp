class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
         int left = 0 , right = n-1;
        int maxArea = 0 ; int currArea = 0 ;
      while (left < right){
     
        int width = right - left ;
           int height = min( heights[left] , heights[right]) ;
        currArea = width * height ;
        maxArea = max (maxArea , currArea);
        heights[left] < heights[right] ? left ++ : right-- ;
      }
      return maxArea;
    }
};
