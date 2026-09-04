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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


    int a=0,b=0,sum=0,carry=0,digit=0;
    ListNode* current1=l1;
    ListNode* current2=l2;
    ListNode* result=nullptr;
    ListNode* tail=nullptr;

  while(current1!=NULL || current2!=NULL || carry!=0){
    if(current1!=NULL){
a=current1->val;
current1=current1->next;
    }
    else{
        a=0;
    }
    if(current2!=NULL){
b=current2->val;
current2=current2->next;
    }
    else{
b=0;    }
sum=a+b+carry;
digit=sum%10;
carry=sum/10;

 ListNode* newNode =new ListNode(digit);
 if(result== nullptr){
result=newNode;
tail=newNode;
 }
 else{
    tail->next=newNode;
    tail=newNode;
 }

  }  
    return result;}
};