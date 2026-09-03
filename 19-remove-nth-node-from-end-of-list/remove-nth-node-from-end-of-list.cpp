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
class Solution{
public:

    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* temp;
//        ListNode* prev=NULL;
//        ListNode* current=head;
       
//        int cnt=0,cnt2=0,val=0;
// temp=head;

//        while(temp!=NULL){
//         temp=temp->next;
//         cnt++;
//        }
    //    if(cnt==1) return NULL;
       
//        val=cnt-n;
//        if(val==0){
// head=head->next;
// return head;
//        }

// while(current!=NULL && current->next!=NULL && cnt2!=val){
// prev=current;
// current=current->next;
// cnt2++;
// }
// prev->next=current->next;



       ListNode* fast=head;
       ListNode* prev=NULL;
       ListNode* slow=head;
       for(int i=0;i<n;i++){
    fast=fast->next;
}
       while(fast!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next;
}
       if(prev==NULL && fast==NULL) return head=head->next; 
       prev->next=slow->next;  
       return head; }
       

};