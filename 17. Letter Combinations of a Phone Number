class Solution {
public:
  vector<string> res;
    vector<string> letterCombinations(string digits) {
        if(digits=="")return res;
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};//bulid a mapping list
        string tmp="";
        dfs(digits,0,tmp,map,res);
        return res;
    }
    void dfs(string digits,int index,string tmp,string map[],vector<string>& res){
    //这里要注意是要传递指针而不是变量，这样会无法获得完整的res
        if(index == digits.length()) {//get the end of one node
        //cout<<tmp<<endl;
        res.push_back(tmp);//store
        return;
      }
      char strChar = digits[index];
      for(int i=0; i<map[strChar-'0'].length(); i++) {
      tmp.push_back(map[strChar-'0'][i]);
      dfs(digits, index+1, tmp,map,res);
      tmp.pop_back();
    }
  }
};
/*
主要思路是利用了dfs，digits里每一个数字中选定一个word作为一个分支，这样遍历就可以获得所有需要的string
*/
