class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int n=nums.size();
      int left=0,right=n-1;
      int rightIndex=binarySearch(nums,target,left,right);
      int leftIndex=rightIndex;
      if(rightIndex==-1)return {-1,-1};
      while(leftIndex>0&&nums[leftIndex]==nums[leftIndex-1])leftIndex--;
      while(nums[rightIndex]==nums[rightIndex+1]&&rightIndex<n-1)rightIndex++;
      return {leftIndex,rightIndex};
    }
    int binarySearch(vector<int>& nums,int target,int left,int right){
        if(left>right)return -1;
      int mid=left+(right-left)/2;
      if(nums[mid]<target)return binarySearch(nums,target,mid+1,right);
      else if(nums[mid]>target)return binarySearch(nums,target,left, mid-1);
      else return mid;
    }
};
/*
主要思想是二分搜索匹配到的数字然后再左右扩张，最坏情况不会是n
感触是测算边界的时候别想着复制粘贴，会出错
*/
