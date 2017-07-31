class Solution {
public:
    int romanToInt(string s) {
      int  res=0;
        map<char, int> m{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for(int i=0;i<s.size();i++){
          int val=m[s[i]];
          if(i==s.size()-1||m[s[i+1]]<=m[s[i]])res+=val;
          else res-=val;
        }
        return res;
    }
};
/*
主要思想是建立一个Map映射表以及要知道罗马数字与阿拉伯数字的转换关系
*/
