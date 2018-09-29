/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode *t,*front=NULL,*rear=NULL;
    int carry = 0;
    while(A!=NULL && B!=NULL){
        t = (ListNode*)malloc(sizeof(ListNode));
        t->val = A->val + B->val + carry;
        carry = t->val/10;
        t->val %= 10;
        if(front == NULL){
            front = rear = t;
        }else{
            rear->next = t;
            rear = rear->next;
        }
        A = A->next;
        B = B->next;
    }
    while(A!=NULL){
        t = (ListNode*)malloc(sizeof(ListNode));
        t->val = A->val + carry;
        carry = t->val/10;
        t->val %= 10;
        if(!front){
            front = rear = t;
        }else{
            rear->next = t;
            rear = rear->next;
        }
        A = A->next;
    }
    while(B!=NULL){
        t = (ListNode*)malloc(sizeof(ListNode));
        t->val = B->val + carry;
        carry = t->val/10;
        t->val %= 10;
        if(!front){
            front = rear = t;
        }else{
            rear->next = t;
            rear = rear->next;
        }
        B = B->next;
    }
    if(carry == 1){
        t = (ListNode*)malloc(sizeof(ListNode));
        t->val = carry;
        rear->next = t;
        rear = rear->next;
    }
    rear->next = NULL;
    return front;
}
