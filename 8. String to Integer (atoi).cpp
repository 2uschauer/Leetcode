class Solution {
public:
    int myAtoi(string str) {
      int i=0;
      
      int isPositive=1;
      while(str[i]!='\0' && str[i]==' '){
        i++;
      }
      if(str[i]=='\0')return 0;
      if(str[i]=='+'){
        isPositive=1;
          i++;
      }
      else if(str[i]=='-'){
        isPositive=-1;
        i++;
      }
      long long int sum=0;
      while(str[i]!='\0'){
        if(str[i]>='0'&&str[i]<='9'){
          sum=sum*10+isPositive*(str[i]-'0');
        }
        else return sum;
        if(abs(sum)>INT32_MAX)return (sum>0? INT32_MAX:INT32_MIN);
        i++;
      }
      return sum;
    }
};
/*
检测步骤：
1.检测空格
2.检测加减号(作为符号加减号只能出现一次)
之后就把char转换成int 如果遇到非数字字符就弹出
最后检测是否超出范围
*/
