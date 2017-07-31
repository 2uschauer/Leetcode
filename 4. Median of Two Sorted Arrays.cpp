class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int n=nums1.size();//Get nums1's length
      int m=nums2.size();//Get nums2's length
      int total=m+n;//Get sum
      vector<int>::iterator a;
      vector<int>::iterator b;
      a=nums1.begin(),b=nums2.begin();
      if(total&0x1)return FindK(a,n,b,m,total/2+1);//(total&0x1) means getting the first digit which is in binary system
      else return (FindK(a,n,b,m,total/2+1)+FindK(a,n,b,m,total/2))/2;
    }
    double FindK(vector<int>::iterator a,int n,vector<int>::iterator b,int m,int k){
      if(n>m) return FindK(b,m,a,n,k);//make sure a.length is less than b.length
      if(n==0) return b[k-1];//a is empty
      if(k==1) return min(a[0],b[0]);//need minus number
      int partA=min(k/2,n); //make sure the iterator will not be out of boundary
      int partB=k-partA;
      if(a[partA-1]<b[partB-1])return FindK(a+partA,n-partA,b,m,k-partA);//delete a's 0~(partA-1)th digit  
      else if(a[partA-1]>b[partB-1])return FindK(a,n,b+partB,m-partB,k-partB);//delete b's 0~(partB-1)th digit
      else return a[partA-1];
    }
};
/*主要思路是找到一个数列中第k个数
假定有两个数列a,b,求的是两个数列相加之后第k个数是多少,所以先比较a[k/2-1]与b[k-k/2-1]哪个大:
<:则可以直接去掉a数列前k/2个数,循环
>:则可以直接去掉b数列前k-k/2个数,循环
=那么第k个数就是a[k-1] or b[k-1]
*/
