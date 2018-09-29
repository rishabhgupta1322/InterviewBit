/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode *t=A;
    while(t->next != NULL && t->next->next!=NULL){
        int x = t->val;
        t->val = t->next->val;
        t->next->val = x;
        t = t->next->next;
    }
    if(t->next != NULL){
        int x = t->val;
        t->val = t->next->val;
        t->next->val = x;
    }
    return A;
}
