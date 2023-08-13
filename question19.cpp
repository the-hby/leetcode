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
ListNode* removeNthFromEnd(ListNode*head,int n)
{
    ListNode*ptr=head;int count=1;
    while(ptr->next!=NULL){ptr=ptr->next;count++;}
    if(n==count){ListNode*tmp=head->next;delete head;return tmp;}
    ListNode*tmp1=head,*tmp2=head->next;
    for(int i=1;i<count-n;i++)
    {
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    tmp1->next=tmp2->next;
    delete tmp2;
    return head;
}