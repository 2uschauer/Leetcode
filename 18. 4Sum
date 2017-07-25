class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      set<vector<int>> res;
      sort(nums.begin(),nums.end());
      int len=nums.size();
      for(int i=0;i<len-3;i++){
        for(int j=i+1;j<len-2;j++){
          int left=j+1,right=len-1;
          while(left<right){
            int sum=nums[i]+nums[j]+nums[left]+nums[right];
            if(sum==target){
              res.insert({nums[i],nums[j],nums[right],nums[left]});
              left++,right--;
            }
            else if(sum<target)left++;
            else if(sum>target)right--;
            }
        }
      }
      return vector<vector<int>>(res.begin(),res.end());
    }
};
/*
这个的核心思想和3Sum一样，只不过是再加了一个外面的循环
这次尝试用set来做，化简代码量。
*/
