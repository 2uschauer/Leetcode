class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1;
        if(nums.size()<2)return nums.size();
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[index++]=nums[i];
            }
        }
        return index;
    }
};
//Another way to present
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        if(nums.size()<2)return nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[index++]=nums[i];
            }
        }
        nums[index++]=nums[nums.size()-1];
        return index;
    }
};
/*
主要思想还是用两个扫描磁头扫，但是要注意，index=0的一定是会保留的，所以index就从1开始或者是扫描从index=0开始 最后一个一定是会保留的
*/
