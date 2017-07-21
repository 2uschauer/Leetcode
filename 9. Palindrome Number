class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int PalindromeNumber=0;
        int tmp=x;
        while(tmp!=0){
          PalindromeNumber=PalindromeNumber*10+tmp%10;//sppace complexity is O(1),to get the reverse integer
          tmp/=10;
        }
        if(PalindromeNumber==x)return true;
        else return false;
    }
};
/*
因为只能在空间复杂度O(1)上操作，所以只能用翻转整数的方法进行之后就进行比较是否一致即可，注意一个坑，就是负数不是回文，因为有一个负号？
*/
