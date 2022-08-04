/**
 * @file twoNumbersLinkedList.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given an linkedlist of integers and have to add them into new list
 * @problemRefrence https://leetcode.com/problems/add-two-numbers/
 * @version 1.1
 * @date 2022-08-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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
    void addNode(ListNode* &head,int data){
        ListNode* dataNode = new ListNode();
        dataNode->val = data;
        if(head == nullptr) head = dataNode;
        else{
            ListNode *temp = head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next = dataNode;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *Result = nullptr;
        int carry = 0, carryResult = 0;
        while(l1 != nullptr && l2 != nullptr){
            carry = l1->val + l2->val + carry;
            carryResult = carry%10;
            carry /= 10;
            addNode(Result, carryResult);
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1 != nullptr){
            carry += l1->val;
            carryResult = carry%10;
            carry /= 10;
            addNode(Result, carryResult);
            l1 = l1->next;
        }
        
        while(l2 != nullptr){
            carry += l2->val;
            carryResult = carry%10;
            carry /= 10;
            addNode(Result, carryResult);
            l2 = l2->next;
        }
        if(carry) addNode(Result, carry);
        return Result;
    }
};
