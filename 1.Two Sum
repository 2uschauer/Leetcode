class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>Index;
        vector<int>result;
        for(int i=0;i<n;i++){
          if(Index.count(nums[i])!=0){//if num[i] exists
            result.push_back(Index[nums[i]]);
            result.push_back(i);
            break;
          }
            Index[target-nums[i]]=i;//To void nums[i]+nums[i]=target
        }
      return result;
    }
};
/*
主要思路
map可以储存两个值,key和value这里我们把key设置成target-nums[i]value设置成i,
这样就可以通过.count()函数来查找nums[i]在不在map里,
如果在就代表nums[i]和target-nums[i]同时存在于nums数组中,返回对应的i和value即可
*/
