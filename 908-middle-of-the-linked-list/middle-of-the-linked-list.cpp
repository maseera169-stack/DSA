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
    ListNode* middleNode(ListNode* head) {
        int cnt=0,iter=0 ;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
    if(cnt%2!=0){
iter=cnt/2;
    }else{
        iter=(cnt/2);
    }

    int cnt2=0;
    ListNode* temp1=head;
    while(temp1!=NULL){
       
        if(cnt2==iter){
            return temp1;
        }
         cnt2++;
        temp1=temp1->next;
    }

        
   return 0; }
};