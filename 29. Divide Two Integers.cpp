class Solution {
public:
    int divide(int dividend, int divisor) {
      long long res=0;
      int isPositive=1;//positive flag
      int digits=0;
      long long dd,ds;
      long long tmp;
      if(dividend==0)return 0;
      if(divisor==0)return INT32_MAX;//this case is overflow,return INT_MAX
      if(divisor==-1){
        if(dividend==INT32_MIN)return INT32_MAX;//case divisor=-1
        else if(dividend==INT32_MAX)return INT32_MIN;
        else return -dividend;
      }
      if(divisor==1){//case divisor =1
        if(dividend==INT32_MIN)return INT32_MIN;
        else if(dividend==INT32_MAX)return INT32_MAX;
        else return dividend;
      }
      if((dividend>0&&divisor>0)||(dividend<0&&divisor<0))isPositive=1;//make sure the result is positive or negetive
      else isPositive=-1;
      dd=abs((long long)dividend);//must use (long long) because wen dividend is INT32_MAX,it will over flow;
      tmp=ds=abs((long long)divisor);//must use (long long) because wen divisor is INT32_MAX,it will over flow;
      if(dd<ds)return 0;
      while(tmp<=dd){
        tmp<<=1;
        digits++;//find k
      }
      digits--;
      while(digits>=0){
        if(dd>=(ds<<digits)){//determind 1~kth is 1 or 0
          res+=1<<digits;
          dd-=ds<<digits;
        }
        digits--;
      }
      return isPositive==1?res:-res;
    }
};
/*
主要的思想是利用位运算，先求得最接近被除数的（除数*2^k）里的k，
之后再除数<<k和被除数比较算出这一个位上是否能取1，循环之后就获得了商
*/
