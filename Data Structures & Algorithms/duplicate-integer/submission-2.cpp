class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int start=0 , end = nums.size();
        sort(nums.begin() , nums.end()) ;

      if(nums.size()<2)
        {
            return false; 
        }    /*  for having the nums less than two like 1 it does need to be sorted.  */
         for (int i = 0 ; i<end-1 ; i++){
            if (nums[i] == nums[i+1])
            return true;
         }
            return false; 
       
    }
};