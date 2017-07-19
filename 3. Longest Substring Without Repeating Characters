class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int l=s.length();
      int first=0,last=0;//build scanning node
      bool Exist[256]={false};//bulid finding list
      int MAX=0;//substring length
      while(last!=l){
        MAX=max(MAX,last-first);//Do not need plus 1 because last++ at  last loop
        if(Exist[(int)s[last]]){
          while(s[first]!=s[last]){
            Exist[(int)s[first]]=false;//clean the finding list 
            first++;
          }
          first++;
          last++;
        }
        else{
          Exist[(int)s[last]]=true;//Add s[last] to finding list
          last++;
        }
      }
      MAX=max(MAX,l-first); 
      return MAX; 
    }
};
/*
主要思路:
建立两个扫描节点 比如i(头),j(尾)
i,j同时开始扫,把扫到的字母转化成数字(char->int)统计到一个数组里,
当j扫到数组里有的字母(例如x)时,开始移动i,将i移动到第一次出现x的地方,
然后统计长度,然后再继续循环,直到j扫到string的尾巴为止
*/
