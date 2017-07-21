class Solution {
public:
    string intToRoman(int num) {
        string res="";
        int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string symbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};//bulid the mapping table
        int i=0;
        while(num!=0){
          while(num>=value[i]){//greedy algorithm
          num-=value[i];
          res+=symbol[i];
          }
          i++;
        }
        return res;
    }
};
/*
主要的思想是建立一个对应表，然后利用贪心的思想把每个罗马数都表达出来
*/
