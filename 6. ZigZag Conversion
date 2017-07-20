#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        int len=s.length();
        if(len==0||numRows<2)return s;
        int loop=numRows+numRows-2;//Get loop if ZigZag
        string res="";
        for(int i=0;i<numRows;i++){
          for(int index=i;index<len;index+=loop){
            res+=s.substr(index,1);
            if(i>0&&i<numRows-1){
                int partB=loop-2*i+index;
                //Get the rule of words in raws which is not the first and last row
                if(partB<len)res+=s.substr(partB,1);
            }
          }
        }
        return res;
    }
};
/*
主要思路是找出规律
一个是loop的规律是numRows+numRows-2
另外一个是除了头尾，中间的几行一个loop会有两次，
所以要找分别是第几个，用loop-2*i+index来获得
*/
