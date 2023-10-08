#include<iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL&&list2==NULL){return NULL;}
    if(list1!=NULL&&list2!=NULL)
    {
        if(list1->val>list2->val){
            ListNode*tmp=new ListNode(list2->val,mergeTwoLists(list1,
            list2->next));
            return tmp;
        }
        else{
            ListNode*tmp=new ListNode(list1->val,mergeTwoLists(list1->next,
            list2));
            return tmp;
        }
    }
    else {
        if(list1==NULL)
        {
            ListNode*tmp=new ListNode(list2->val,mergeTwoLists(NULL,
            list2->next));
            return tmp;
        }
        else {
            ListNode*tmp=new ListNode(list1->val,mergeTwoLists(list1->next,
            NULL));
            return tmp;
        }
    }
 }