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
 struct comp{
   bool operator()(ListNode* l1,ListNode* l2){
     return l1->val>l2->val;
   }
 };
 ListNode* mergeKLists(vector<ListNode*>& lists) {
   priority_queue<ListNode*,vector<ListNode*>,comp> queue; //build a least heap
   for(int i=0;i<lists.size();i++)if(lists[i]!=NULL)queue.push(lists[i]);//push the front val of every list into queue
   ListNode* dummy=new ListNode(-1);
   ListNode* p=dummy;
   ListNode* tmp;
   while(!queue.empty()){
     tmp=queue.top();//pop the minium val
     queue.pop();
     p->next=tmp;
     p=tmp;
     if(tmp->next!=NULL)queue.push(tmp->next);
   }
   return dummy->next;
 }
};
/*
主要思想是维护一个最小堆，把每个链表的第一个数push进去然后每次抽取最小堆中的最小元素即可这样时间复杂度就是线性的
*/
