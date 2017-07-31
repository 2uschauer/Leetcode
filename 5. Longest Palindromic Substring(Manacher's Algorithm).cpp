class Solution {
public:
    string longestPalindrome(string s) {
      string t;
      int MAXlen=0;
      int MAXcenter=0;
      int n=s.length();
      //Preproccess
      if(n==0)t="^$";
      t="^#";
      for(int i=0;i<n;i++)t+=(s.substr(i,1)+"#");
      t+="$";
      
      int len=t.length();
      int *p = new int [len];//make the checking list
      int center=0,right=0;//build the center and right boundary
      for(int i=0;i<len-1;i++){
        int i_mirror=center-(i-center);//get the mirror of i(the center is variable "center")
        int diff=right-i;//get the distance between right boundary and i
        if(diff>=0){
          if(p[i_mirror]<diff) p[i]=p[i_mirror];//i and its Palindrome is in the boundary
          else{i and its Palindrome is not in the boundary
            p[i]=diff;//we should judge i's Palindrome from its radius diff
            while(t[i-p[i]-1]==t[i+p[i]+1])p[i]++;
            center=i;
            right=i+p[i];
          }
        }
        else{//i is out of boundary so we have to judge i's Palindrome from radius 0
          p[i]=0;
          while(t[i-p[i]-1]==t[i+p[i]+1])p[i]++;
          center=i;
          right=i+p[i];
        }
      }
      for(int i=0;i<len-1;i++){//find the max Palindrome
        if(MAXlen<p[i]){
          MAXlen=p[i];
          MAXcenter=i;
        }
      }
      return s.substr((MAXcenter - 1 - MAXlen) / 2, MAXlen);
    }
};
/*
主要思想是首先对string进行预处理，在每个word之间加入#，这样之后就形成了偶数个数字，
这样就可以进行两两对比而不用担心奇数个回文的情况
其次是对每一个数字进行判断，利用p[i]来判断该数字周围半径x下是否有回文，有就保存成p[i]=x，
利用center和right作为中心和边界加上i进行不断的扫描，判断right-i有两种情况
i）>=0:这还有两种情况，i 相对于 center 的镜像 i_mirror 半径值p[i_mirror]与right-i比较：
    i)>=:代表i的回文半径如果是p[i_mirror]的话，会超出边界，就不能保证这半径内是回文，
    所以要p[i]=diff 之后再进行一个个判断，并且重新确定i是center，
    因为center的边界已经不够用了
    ii）<：代表i的回文半径没有超出边界，所以这里面必定还是回文
ii）<0：说明i在边界之外，所以需要一个个判断。并且重新确定i是center
*/
