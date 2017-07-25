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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      if(head==NULL)return NULL;
        ListNode* first=head;
        ListNode* second=head;
        for(int i=0;i<n;i++){
          first=first->next;//nth node
        }
        if(first==NULL)return head->next;
        while(first->next){
        //suppose we have x node,this will make first at (x-1)th node,second at (x-1-n)th node
          second=second->next;
          first=first->next;
        }
        second->next=second->next->next;
        return head;
    }
};
/*
主要思想就是利用两个扫描头进行扫描，先first扫描n个，之后再是两个同时扫描x-n-1个，这样second就在第倒数n+1个位置上，之后就是删减节点
*/
