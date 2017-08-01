class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      if(nums.empty()||nums.size()==0)return 0;
      int n=nums.size();
      int left=0,right=n-1;
      while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]<target)left=mid+1;
        else if(nums[mid]>target)right=mid-1;
        else return mid;
      }
      return left;
    }
};
/*
主要思想是利用二分查找 然后没找到return left是因为没找到是因为
nums[left]==nums[mid]<target<nums[right]随后left++了，
所以直接返回mid++或者lifet都可以
*/
