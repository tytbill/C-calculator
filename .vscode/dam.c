#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

typedef struct Node Node;

void insert_node(Node** p_first, Node** p_last, int data)
{
    Node* p_node = (Node*)malloc(sizeof(Node));
    p_node->data = data;
    p_node->next = NULL;

    if (*p_first == NULL)
    {
        *p_first = p_node;
        *p_last = p_node;
    }
    else
    {
        (*p_last)->next = p_node;
        *p_last = p_node;
    }
}

int main()
{
    Node* first = NULL;
    Node* last = NULL;
    insert_node(&first, &last, 111);
    insert_node(&first, &last, 222);
    insert_node(&first, &last, 333);
    return 0;
}
