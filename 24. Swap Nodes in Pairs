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
ListNode* swapPairs(ListNode* head) {
      ListNode* begin=new ListNode(0);
      begin->next=head;//you need to prepare a begin linked to the new head
      ListNode* first=begin;
      ListNode* second=head;
      while(second&&second->next){
        first->next=second->next;
        //This step you shnould draw a picture to have a better understand about this code
        second->next=first->next->next;
        first->next->next=second;
        first=second;
        second=second->next;
      }
      return begin->next;
    }
};
/*
主要思想是利用scanning node 来改变位置,
注意因为index=0和index=1这两个node位置会换所以head会无效 
所以要体现预备着一个begin,begin->next是指向链表的头的
*/
