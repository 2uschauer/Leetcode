class Solution {
public:
  void initMap(map<string,int>& Map,vector<string>& words){
    for(int i=0;i<words.size();i++){
      if(Map.count(words[i])==0)Map[words[i]]=1;
      else Map[words[i]]+=1;
    }//Bulid a new Map list;
  }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        map<string,int>Map;
        initMap(Map,words);
        bool flag=false;//Map change flag
        int wordLen=words[0].length();
        int wordNum=words.size();
        int count=wordNum;//Use for count words vector size change;
        int stringLen=s.length();
        for(int i=0;i<=stringLen-wordLen*wordNum;i++){//this can reduce the time complexity
          string subString=s.substr(i,wordLen);//Get substring
          int j=i;
          while(Map[subString]>0&&j<=stringLen-wordLen){
              Map[subString]-=1;//refresh the map data
              j+=wordLen;
              subString=s.substr(j,wordLen);//get new substring
              flag=true;
              count--;//one of words has been found
          }
          if(count==0)res.push_back(i);
          if(flag){//init a new Map List
            Map.clear();
            initMap(Map,words);
            count=wordNum;
            flag=false;
          }
        }
        return res;
    }
};
/*
主要的思路是，i代表s的index，然后建立一个wordLen*wordNUm的扫描条，
从零开始扫，因为wordLen是固定的，所以每个subString都是可以取出来进行在Map里面对比是否含有
然后进行Map的维护，同时要有一个count变量进行计数，当等于零的时候，就代表整个字符串都对比完了
然后就可以吧i作为一个index push_back进入vector，这就是线性时间复杂度
*/
