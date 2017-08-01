class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid;
        if(nums.size()==0)return -1;
        while(left<=right){
          mid=(left+right)/2;
          if(nums[mid]==target)return mid;
          else if(nums[mid]<nums[right]){
            if(nums[mid]<target&&target<=nums[right])left=mid+1;//case one
            else right=mid-1;//case three
          }
          else{//case two
            if(target<nums[mid]&&nums[left]<=target)right=mid-1;
            else left=mid+1;
            }
        }
        return -1;
    }
};
/*
主要思想是分类讨论
参考是http://blog.csdn.net/ljiabin/article/details/40453607
*/
