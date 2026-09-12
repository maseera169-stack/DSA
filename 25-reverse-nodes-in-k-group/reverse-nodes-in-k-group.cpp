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
    ListNode* reverseKGroup(ListNode* head, int k) {

int cnt=0;
ListNode* temp=head;
 ListNode* groupstrt=head;
    ListNode* groupends=NULL;

while(temp!=NULL){

cnt++;

temp=temp->next;
if(cnt==k){
    ListNode*prev=NULL;
    ListNode* current=groupstrt;
    ListNode* front=NULL;
   

    while(current!=temp){
        front=current->next;
        current->next=prev;
        prev=current;
        current=front;

    }
    if(groupends!=NULL){
        groupends->next=prev;
    }else{
    head=prev;
    }
    groupends=groupstrt;
    groupstrt=temp;
    cnt=0;
}

}
if(groupends!=NULL){
    groupends->next=groupstrt;
}
return head;}
};