class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> res={};
      sort(nums.begin(),nums.end());//sort the vector
      int len=nums.size();//get the length of nums
      if(len==0)return res;
      if(nums[0]>0)return res;
      for(int i=0;i<len;i++){
        if(nums[i-1]==nums[i]&&i>0)continue;//void the repeat of the first number
        int tmp=nums[i];
        int target=0-tmp;
        int x=i+1,y=len-1;
        while(x<y){
          if(nums[x]+nums[y]==target){
            res.push_back({nums[i],nums[x],nums[y]});
            while(nums[x]==nums[x+1])x++;//void the repeat of the second number 
            while(nums[y]==nums[y-1])y--;//void the repeat of the third number 
            x++;y--;
          }
            else if(nums[x]+nums[y]<target)x++;//the sum is less than zero so second number should be larger
            else if(nums[x]+nums[y]>target)y--;//the sum is larger than zeri so third number should be smaller
        }
      }
      return res;  
    }
};
/*
主要思想是首先先排序，然后确定一个点再用前后两点扫
但是要注意三个地方：
一个是“nums[i-1]==nums[i]&&i>0”这个是保证了第一个数字不会重复
while(nums[x]==nums[x+1])x++;这个是保证了前扫不会重复
while(nums[y]==nums[y-1])y--;这个是保证了后扫不会重复
*/
