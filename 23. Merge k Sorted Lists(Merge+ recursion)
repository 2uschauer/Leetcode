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
  ListNode* mergeKLists(vector<ListNode*>& lists) {
    int n=lists.size();
    if(n==0)return NULL;
    if(n==1)return lists[0];
    while(n>1){
      int k=(n+1)/2;
      for(int i=0;i<n/2;i++)lists[i]=mergeTwoLists(lists[i], lists[i+k]);
      n=k;
    }
      return lists[0];
  }
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       if(l1==NULL)return l2;
       if(l2==NULL)return l1;
       if(l2->val>l1->val){
         ListNode* tmp=l1;
         tmp->next=mergeTwoLists(l1->next,l2);
         return tmp;
       }
       else{
         ListNode* tmp=l2;
         tmp->next=mergeTwoLists(l1,l2->next);
         return tmp;
       }
     }
};
/*
主要思想很简单就是利用分治的方法两两合并，合并的方法是用递归
*/
