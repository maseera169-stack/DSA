/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int cnt=0;
        ListNode* last=NULL;
        ListNode* fast=head;
        ListNode* temp=head;
        ListNode* prev=NULL;

if(head==NULL) return head;
        while(fast!=NULL && fast->next!=NULL){
            last=fast->next;

            fast=fast->next->next;
           


            cnt=cnt+2;}

             if(fast!=NULL){
             last=fast;
             cnt++;}
        if(cnt==1 || k%cnt==0) return head;
        int n=cnt-(k%cnt)+1;
        int c=1;
        if(n==1){
            ListNode* oldhead=head;
            head=head->next;
            oldhead->next=NULL;
            last->next=oldhead;
            return head;
        }

        while(temp!=NULL){
if(c==n) break;
prev=temp;
temp=temp->next;
c++;

        }
        prev->next=NULL;
        last->next=head;
        head=temp;
    return head;}
};