#include <stdio.h>
#include <stdlib.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) 
{
    struct ListNode* reverse = NULL;
    while ( head != NULL )
    {
        struct ListNode* current = (struct ListNode*)malloc(sizeof(struct ListNode));
        current->next = reverse;
        current->val = head->val;
        reverse = current;
        head = head->next;
    }
    return reverse;
}

void initList(struct ListNode* head)
{
    // 0->1->2->3->4
    for ( int i=0; i<4; i++ )
    {
        head->val = i;
        head->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        head = head->next;
    }
    head->val = 4;
    head->next = NULL;
}

void printList( struct ListNode* head )
{
    for ( int i=0; i<5; i++ )
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode* head = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->next = NULL;
    struct ListNode* reverse = NULL;

    initList(head);
    printList(head);

    reverse = reverseList(head);
    printList(reverse);

    return 0;
}