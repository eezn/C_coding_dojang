// input: 10 20 30 40 50 60 70 80 90 100
// 40
// output: 100 90 80 70 60 50 30 20 10

#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    struct NODE *next;
    int data;
};

void addFirst(struct NODE *target, int data)
{
    struct NODE *newNode = malloc(sizeof(struct NODE));
    newNode->next = target->next;
    newNode->data = data;
    target->next = newNode;
}

void removeNode(struct NODE *node, int data)
{
    struct NODE *curr;
    struct NODE *before;
    before = node;
    curr = node->next;
    while (1)
    {
        if (curr->data == data)
            break;
        else if (curr == NULL)
            return;
        before = curr;
        curr = curr->next;
    }
    before->next = curr->next;
    free(curr);
}

int main()
{
    int numArr[10] = {
        0,
    };
    int removeNum;

    scanf("%d %d %d %d %d %d %d %d %d %d",
          &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4],
          &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);

    scanf("%d", &removeNum);

    struct NODE *head = malloc(sizeof(struct NODE));
    head->next = NULL;

    int i = 0;
    while (i < 10)
        addFirst(head, numArr[i++]);

    removeNode(head, removeNum);

    struct NODE *curr;
    curr = head->next;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }

    curr = head->next;
    while (curr != NULL)
    {
        struct NODE *next = curr->next;
        free(curr);
        curr = next;
    }

    free(head);

    return (0);
}
