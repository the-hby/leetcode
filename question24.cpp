#include<iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* swapPairs(ListNode* head)
{
    if(head==NULL||head->next==NULL){return head;}
    ListNode*tmp=head->next;
    head->next=swapPairs(tmp->next);
    tmp->next=head;
    return tmp;
}

