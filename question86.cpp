#include<iostream>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*ans=new ListNode(0,NULL);
        ListNode*tmp=head;
        ListNode*rest1=NULL;
        ListNode*rest2=NULL;
        ListNode*cur=ans;
        while(tmp){
            if(tmp->val<x){
                cur->next=tmp;
                tmp=tmp->next;
                cur=cur->next;
                cur->next=NULL;
                
            }
            else{
                if(!rest1){
                    rest2=rest1=tmp;
                }
                else{
                    rest2->next=tmp;
                    rest2=rest2->next;
                }
                tmp=tmp->next;
                rest2->next=NULL;
            }
        }
        cur->next=rest1;
        return ans->next;

    }
};