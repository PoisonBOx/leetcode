#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

void initList(struct ListNode** l1, struct ListNode** l2)
{
    struct ListNode* h1, * h2;
    *l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    h1 = *l1;
    h1->val = 2;
    h1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    h1 = h1->next;
    h1->val = 4;
    h1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    h1 = h1->next;
    h1->val = 3;
    h1->next = NULL;

    *l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    h2 = *l2;
    h2->val = 5;
    h2->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    h2 = h2->next;
    h2->val = 6;
    h2->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    h2 = h2->next;
    h2->val = 4;
    h2->next = NULL;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode* sum = NULL;
    struct ListNode* head;
    sum = (struct ListNode*)malloc(sizeof(struct ListNode));
    sum->val = 0;
    sum->next = NULL;
    head = sum;

    while ( 1 )
    {
        if ( l1 != NULL )
        {
            head->val += l1->val;
            l1 = l1->next;
        }
        if ( l2 != NULL )
        {
            head->val += l2->val;
            l2 = l2->next;
        }
        if ( head->val>=10 )
        {
            head->val = head->val % 10;
            head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            head->next->next = NULL;
            head = head->next;
            head->val = 1;
        }
        else
        {
            if ( l1 != NULL || l2 != NULL )
            {
                head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
                head->next->next = NULL;
                head = head->next;
                head->val = 0;
            }
            else
            {
                break;
            }
        }
    }
    return sum;
}

int main()
{
    struct ListNode* l1 = NULL, *l2 = NULL;
    struct ListNode* sum = NULL;

    initList(&l1, &l2);

    sum = addTwoNumbers(l1, l2);

    return 0;
}