#include<iostream>
using namespace std;
struct ListNode
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* addTwoNumbers(ListNode*l1,ListNode*l2)
{
    ListNode*head=new ListNode();
    ListNode*ptr=head;
    int count;bool carry=false;
    while(l1!=NULL||l2!=NULL)
    {
        count=0;
        if(l1!=NULL){count+=l1->val;l1=l1->next;}
        if(l2!=NULL){count+=l2->val;l2=l2->next;}
        if(carry){count++;}
        ptr->next=new ListNode(count%10);
        ptr=ptr->next;
        carry=count>=10?true:false;
    }
    if(carry)
    {
        ptr->next=new ListNode(1);
    }
    return head->next;
}
