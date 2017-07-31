class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());//sort the vector
      int diff=INT32_MAX;
      int len=nums.size();
      int res=0;
      if(len==0)return target;
      for(int i=0;i<len;i++){
        if(nums[i-1]==nums[i]&&i>0)continue;//reduce the repeat operation
        int x=i+1,y=len-1;//set first and last scanning node
        while(x<y){
            int sum=nums[i]+nums[x]+nums[y];//get the new sum 
            int newDiff=abs(target-sum);//get the new disstance between target and sum 
            if(newDiff<diff){
                res=sum;//set new cloest 3Sum
                diff=newDiff;//set new diff
            }
            if(target-sum<0)y--;//move right scanning node when sum is larger
            else x++;//move left scanning node when sum is smaller
        }
      }
      return res;
    }
};
/*
主要的思想还是和之前的3sum一样，确定一个点之后两个点慢慢扫，扫到最短的就是cloest
*/
