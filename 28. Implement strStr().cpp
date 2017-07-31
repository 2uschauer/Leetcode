class Solution {
public:
    int strStr(string haystack, string needle) {
      for(int i=0;;i++){//index of haystack
        for(int j=0;;j++){//indexof needle
          if(j==needle.length())return i;//if j==lengthof needle it means that the compare is finish
          if((i+j)==haystack.length())return -1;
          //if i+j is equal to the length of gaystack it means it is out of bound and not all needle match haystack
          if(needle[j]!=haystack[i+j])break;//find some word is nor match
        }
      }
    }
};
/*
主要思想就是，从头开始匹配，如果没有匹配上那就haystack的index++之后再重头开始匹配日，所以Time Complexity是O(mn)
要住的是代码里面三个判断是不能互相调换位置，因为第一个不判断直接判断第二个是不知道会不会发生“aaaaaaaabb”和“bb”匹配的问题，
*/
