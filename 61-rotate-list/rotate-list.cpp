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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL || k == 0){
            return head;
        }
        
        int len = 1;
        ListNode* temp = head;
        while(temp->next != NULL){
            temp = temp -> next;
            len++;
        }

        k = k % len;
        if(k == 0) return head;

        for(int i = 0; i < k; i++){
            ListNode* curr = head;
            ListNode* prev = NULL;
            while(curr -> next != NULL){
                prev = curr;
                curr = curr -> next;
            }
            prev -> next = NULL;
            curr -> next = head;
            head = curr;
        }
        return head;
    }
};