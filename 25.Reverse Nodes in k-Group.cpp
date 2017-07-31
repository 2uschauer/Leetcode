/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
ListNode* reverseInGroup(ListNode* pre,ListNode* last){
      ListNode* cur;
      ListNode* first;
      first=pre->next;
      cur=first->next;
      while(cur!=last){
        first->next=cur->next;//move forwards first one index
        cur->next=pre->next;//move cur between pre and pre->next 
        pre->next=cur;
        cur=first->next;//the new cur is front of the first
        /*
        NULL  ->  2  ->   3   ->  4  ->  5
        pre             first    cur
        =>
        NULL  ->  4  ->   2   ->  3  ->  5
        pre                     first   cur
        */
      }
      return first;
  }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head||k==1)return head;
        ListNode* dummy=new ListNode(-1);
        ListNode* pre;
        ListNode* cur;
        dummy->next=head;
        pre=dummy;
        cur=head;//build scanning node
        int i=0;
        while(cur){
          i++;
          if(i%k==0){
            pre=reverseInGroup(pre,cur->next);//reverse the number between (pre,cur->next)(num:k+2)
            cur=pre->next;//build new scanning node
          }
          else cur=cur->next;//move cur
        }
        return dummy->next;
    }
};
/*
主要的思想是 建立两个扫描点，一个是pre，一个是cur，
然后驱使cur扫到第nk个(n=1,2,3,4...),
然后调用函数吧该组的数进行调换(pre->nk+1,总共k+2个)，
方法是函数内的first的index+1（利用和前面一个数(用cur表示)对调的方法），
然后cur连接到pre和pre->next之间，这样就实现了翻转
*/
