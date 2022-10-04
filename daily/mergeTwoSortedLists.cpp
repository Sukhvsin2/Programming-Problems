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
    ListNode* insert(ListNode* head, int data){
        ListNode* newNode = new ListNode(data);
        ListNode* temp = head;
        if(head == NULL){
            head = newNode;
            return head;
        }
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next = newNode;
        return head;
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res = NULL, *temp1 = list1, *temp2 = list2;
        
        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val < temp2->val){
                res = insert(res, temp1->val);
                temp1 = temp1->next;
            }else{
                res = insert(res, temp2->val);
                temp2 = temp2->next;
            }
        }
        while(temp1 != NULL){
            res = insert(res, temp1->val);
            temp1 = temp1->next;
        }
        while(temp2 != NULL){
            res = insert(res, temp2->val);
            temp2 = temp2->next;
        }
        return res;
    }
};
