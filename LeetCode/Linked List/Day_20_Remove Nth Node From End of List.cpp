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
    int count(ListNode* head, int x){
        int y = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            y++;
        }
        return y;
    }
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int y = count(head,n);
        int x = y-n+1;
        ListNode* temp = head;
        if(y==1){
            head = temp->next;
            //free(temp);
            return head=nullptr;
        }
        if(x==1){
            head = temp->next;
            return head;
        }
        
        for(int i=0;i<x-2;i++){
            temp = temp->next;
        }
        ListNode* temp1 = temp->next;
        temp->next = temp1->next;
        //free(temp1);
        
        return head;
    }
};