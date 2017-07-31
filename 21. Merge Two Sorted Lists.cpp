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
   ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     if(l1==NULL)return l2;//if l1 is empty link the l2
     if(l2==NULL)return l1;//if l2 is empty link the l1
     if(l2->val>l1->val){
       ListNode* tmp=l1;
       tmp->next=mergeTwoLists(l1->next,l2)//the next node need to compare l1's next node and l2
       return tmp;
     }
     else{
       ListNode* tmp=l2;
       tmp->next=mergeTwoLists(l1,l2->next);//the next node need to compare l2's next node and l1
       return tmp;
     }
   }
};
/*
主要思想就是利用新链表，把两个链表小的一个链接在上面，但是之前写的代码太复杂，其实只需要一个递归就可以解决
*/
