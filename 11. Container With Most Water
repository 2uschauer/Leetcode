class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int MAX=0;
        while(i!=j){
          int length=height[i]>height[j]?height[j]:height[i];//get the lower geight
          int tmp=(length)*(j-i);//caculate the area
          MAX=MAX>tmp?MAX:tmp;//get the max area
          height[i]>height[j]?j--:i++;//greedy algorithm
        }
        return MAX;
    }
};
/*
利用了贪心的算法，如果左边第就左边右移，右边低就右边左移。
*/
