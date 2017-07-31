class Solution {
public:
    int longestValidParentheses(string s) {
      stack<int>Stack;//Build a stack
      int matchIndex=-1;
      int maxLen=0;//initialization
      for(int i=0;i<s.length();i++){
        if(s[i]=='(')Stack.push(i);//input the '(' index
        else{
          if(Stack.empty())matchIndex=i;//if Stack is empty it means no '(' left,the match is start
          else{
            Stack.pop();//matched
            if(Stack.empty())maxLen=max(maxLen,i-matchIndex);//All matched caculate the len
            else maxLen=max(maxLen,i-Stack.top());//Not all match but still need to upload the new len
          }
        }
      }
      return maxLen;
    }
};
/*
主要思想是，利用Stack的数据结构来实现识别
*/
