/*Time complexity O(n^2)*/
class Solution {
public:
    void FindSubstring(string s,int left,int right,int &start,int &MAXlen){
      int step=1;
      while((left-step)>=0&&(right+step)<s.length()){
        if(s[left-step]!=s[right+step])break;//try to find max substring
        step++;
      }
      int len =step*2+right-left-1; //(right+step-1)-(left-step+1)+1
      if(MAXlen<len){
         MAXlen=len; 
        start=left-step+1;
      }
    }
    string longestPalindrome(string s) {
      int MAXlen=0,left,right,start=0,n;
      n=s.length();
      if(n==0)return "";
      if(n==1)return s;//because FindSubstring can not get single word
      for(int i = 0;i<n-1;i++){
        left=i,right=i+1;//get right and left scanning node
        if(s[left]==s[right]){
            right++;
            while(s[left]==s[right])right++;//In order to avoid this situation:"aaa"and "aaaa"and etc
            right--;
            FindSubstring(s,left,right,start,MAXlen);
            
        }
        else{
          left=right=i;
          FindSubstring(s,left,right,start,MAXlen);
        }
      }
      return s.substr(start, MAXlen);
    }
};
/*
主要思想：这是最传统的方法，从最小回文“xx”或者“x”开始一次扩展寻找最大的回文
但是注意有很多坑要考虑，
比如要考虑“aaa”和“aa”和“aaaa”怎么识别这个地方卡了我5次submission
*/
