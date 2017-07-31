class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[index++]=nums[i];
            }
        }
        nums.erase(nums.begin()+index,nums.end());
        return index;
    }
};
/*
主要思想是用双sanning node，因为index肯定比i要小,所以一边扫完之后在.erase()一下就行
*/
