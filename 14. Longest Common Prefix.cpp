class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string Prefix="";
        int len=(int)strs.size();
        if(len==0)return "";//void situation that reference binding to null pointer of type 'struct value_type'
        sort(strs.begin(),strs.end());//sort the vector
        string first=strs[0];//first string
        string last=strs[len-1];//last string
        int firstLen=(int)first.length();
        int lastLen=(int)last.length();
        for(int i=0;i<firstLen;i++){
          if((first[i]==last[i])&&lastLen>i)Prefix+=last[i];//find the first different word
          else break;
        }
        return Prefix;
    }
};
/*
主要思想是
当所有数组进行排序之后
只会在出现不同字母的index上排序
所以只要比较第一个和最后一个在哪一个位置上不一样就可以了
*/
