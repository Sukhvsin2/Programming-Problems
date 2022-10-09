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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dup = NULL, *temp = head;
        
        while(temp != NULL){
            if(dup != NULL && dup->val == temp->val){
                ListNode* t = temp;
                dup->next = temp->next;
                temp = dup->next;
                delete t;
            }else{
                dup = temp;
                temp = temp->next;
            }
        }
        temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
            
        return head;
    }
};
