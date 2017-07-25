class Solution {
public:
    vector<string>res;
    vector<string> generateParenthesis(int n) {
      if(n>0)dfs(0,0,"",n);
      return res;
    }
    void dfs(int left,int right,string s,int n){
      if(left==n){
        s.append(n-right,')');//add all ')'which is needed
        res.push_back(s);//add one of the ans
        return;
      }
      dfs(left+1,right,s+'(',n);//try to add'('
      if(left>right)dfs(left,right+1,s+')',n);//try to add ')'
    }
};
/*
主要的思想是利用了dfs遍历树,以及因为'('和')'一定是左边的数量大于等于右边，所以可以利用这个规律来达到dfs
*/
