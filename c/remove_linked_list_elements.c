#include <stdio.h>
#include <stdlib.h>

#define raw_list_len 7

struct ListNode
{
    int val;
    struct ListNode *next;
};

void initList(struct ListNode* head, int* list_val)
{
    // 0->1->2->3->4
    for (int i = 0; i < raw_list_len-1; i++)
    {
        head->val = list_val[i];
        head->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        head = head->next;
    }
    head->val = list_val[raw_list_len-1];
    head->next = NULL;
}

struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *cur = head;
    struct ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *pre = dummy;
    struct ListNode *del = NULL;

    while (cur != NULL)
    {
        if (cur->val == val)
        {
            pre->next = cur->next;
            del = cur;
            free(del);
            del = NULL;
            cur = pre->next;
        }
        else
        {
            pre = pre->next;
            cur = cur->next;
        }
    }

    return dummy->next;
}

int main()
{
    struct ListNode* head = (struct ListNode *)malloc(sizeof(struct ListNode));
    int list_val[raw_list_len] = {1,2,3,6,4,5,6};
    int remove_val = 6;
    struct ListNode* result;

    initList(head, list_val);

    result = removeElements(head, remove_val);

    return 0;
}