class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.empty())return s.empty(); //This part is used to clean like s:"" and p:""
        if(p.length()==1)return (s.length()==1&&(p[0]=='.'||s[0]==p[0])); //This part is used to clean like s:"a" and p:"."or"a"
        if(p[1]!='*'){
          if(s.empty())return false;
          return ((p[0]=='.'||s[0]==p[0]) && isMatch(s.substr(1), p.substr(1)));
        }
        //This part is used to clean like s:"aa" and p:".a"
        while((!s.empty())&&(p[0]=='.'||s[0]==p[0])){
          if(isMatch(s,p.substr(2)))return true;
          s=s.substr(1);
        }
        return isMatch(s,p.substr(2));
        //This Part is used to clean the substring like s:"aaaaa" p:"a*"
    }
};
/*
主要思想是分步判断：
1.如果p是空，则s空得true，s不空得false
2.如果p长度为1，则s长度为1是，p[0]是‘.’或者p[0==s[1]时是正
3.如果p[1]=="*"则判断p[0]能否与s[0]匹配 如果可以就删掉s[0]进行loop直到不相等进入下一轮递归
4.如果p[1]！=“*”判断第一个word是否匹配，匹配就删去并进入递归。
*/
