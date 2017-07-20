class Solution {
public:
    string longestPalindrome(string s) {
      bool isPalindrome[s.length()][s.length()]={false};//bulid checking list
      int left=0,right=0,len=0;
      for(int i=0;i<s.length();i++){
        for(int j=0;j<=i;j++){
          isPalindrome[j][i]=((s[i]==s[j])&&(i-j<2 || isPalindrome[j+1][i-1]));
          //To make j~i isPalindrome must make sure s[i]==s[j]and isPalindrome[j+1][i-1]==true
          //And we also have to consider that when substring is "aba" or "aa",so we use i-j<2 to judge 
          if(len<i-j+1&&isPalindrome[j][i]){
            left=j;
            len=i-j+1;
          }
        }
      }
      return s.substr(left, len);
    }
};
/*
主要思想是利用了DP，例如检测的一段string最左端为i，最右端为j，
则建立一个DP[i][j】,DP[i][j]要等于true就必须DP[i+1][j-1]等于true并且s[i]==s[j]
以此类推，推导到最后“aa”或者“a”则用j-i<2来概括
*/
