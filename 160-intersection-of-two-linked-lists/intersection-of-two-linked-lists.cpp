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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
      ListNode* pointA=headA;
      ListNode* pointB=headB;
      


      while(pointA!=pointB){
        if(pointA==NULL){
            pointA=headB;
        }
        else{
            pointA=pointA->next;
        }
        if(pointB==NULL){
            pointB=headA;
        }
        else{
            pointB=pointB->next;
        }
      } 
      if(pointA==NULL && pointB==NULL){
        return 0;
      }
    return pointA;}
};