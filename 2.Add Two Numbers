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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      if(l1==NULL)return l2;//if l1 is empty list return l2
      if(l2==NULL)return l1;//if l2 is empty list return l1
      ListNode* ListFirst=NULL,* Listnode=NULL,*Listnext=NULL;//prepare the result arraylist
      ListNode* p1=l1,*p2=l2;
      int improve=0;
      while(p1!=NULL&&p2!=NULL){
        Listnext=new ListNode((p1->val+p2->val+improve)%10);//get value
        improve=(p1->val+p2->val+improve)/10;//get the carry flag
        if(ListFirst==NULL){
          ListFirst=Listnode=Listnext;
        }//bulid new arraylist
        else{
          Listnode->next=Listnext;//Listnode->next get the array to the next node
          Listnode=Listnext;
        }//Listnode move to next node
        p1=p1->next;//p1 move to next node
        p2=p2->next;//p2 move to next node
      }
      while(p1!=NULL){
        Listnext=new ListNode((p1->val+improve)%10);
        improve=(p1->val+improve)/10;
        Listnode->next=Listnext;
        Listnode=Listnext;
        p1=p1->next;
      }//when p2==NULL and p1!=NULL case
      while(p2!=NULL){
        Listnext=new ListNode((p2->val+improve)%10);
        improve=(p2->val+improve)/10;
        Listnode->next=Listnext;
        Listnode=Listnext;
        p2=p2->next;
      }//when p1==NULL and p2!=NULL case
      if(improve!=0){
        Listnext=new ListNode(improve);
        Listnode->next=Listnext;
        Listnode=Listnext;
      }//when p1,p2==NULL and improve !=0
      return ListFirst;
    }
};
/*
这是一道数据结构的题,就是利用链表来进行加法运算,主要就是注意进位和考虑两个链表如果出现位数不相等怎么判定和处理
*/
