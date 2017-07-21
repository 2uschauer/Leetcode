class Solution {
public:
    int reverse(int x) {
      long long int res=0;
      while(x!=0){
        res=res*10+x%10;
        x/=10;
      }
      if(abs(res)>INT32_MAX)return 0;
      else return res;    
    }
};
/*
一开始在考虑是否需要用数组暂存，后来才想到其实并不需要
*/
