class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int n=nums.size();//get vector size
      int index=n-1;
      while(index>0&&nums[index]<=nums[index-1])index--;
      //find first number from tail that break the series descending order
      if(index==0){
        reverse(nums.begin(),nums.end());//if all series is decending order reverse the series
        return;
      }
      index--;
      int nextIndex=n-1;
      while(nums[index]>=nums[nextIndex])nextIndex--;//find the first number that bigger than the nums[index] from the tail
      swap(nums[index],nums[nextIndex]);//exchange two number
      reverse(nums.begin()+index+1,nums.end());//reverse
    }
};
/*
主要思想是 首先从尾部开始查找第一个无法形成降序的index例如124653里面的4就是使得653无法继续降序，
然后再从尾部开始找653里面第一个大于4的数字，为5。4、5互换，然后形成125643，之后再是643翻转，变成123346，
即是下一个排列
*/
