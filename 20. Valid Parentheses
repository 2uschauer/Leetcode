class Solution {
public:
    bool isValid(string s) {
      map<char,char>Map;
      Map['(']=')';
      Map['{']='}';
      Map['[']=']';//Build a mapping list
      stack<char> Stack;//bulid a stack
      for(int i=0;i<(int)s.length();i++){
        char word=s[i];
        if(word=='('||word=='{'||word=='[')//push in
        Stack.push(word);
        else if(word==')'||word=='}'||word==']'){
            if(Stack.empty()||word!=Map[Stack.top()])return false;
            Stack.pop();
        }
      }
      return Stack.empty();
    }
};
/*
主要思想就是一个堆栈以及利用map达成匹配
*/
