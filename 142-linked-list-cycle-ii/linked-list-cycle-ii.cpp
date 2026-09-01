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
    ListNode *detectCycle(ListNode *head) {
         unordered_set<ListNode*> s;
        
        ListNode* current=head;
        while(current!=NULL){
            if(s.count(current)){
                return current;
            }
            else
            s.insert(current);

            current=current->next;
        }
    return NULL;}

    
};