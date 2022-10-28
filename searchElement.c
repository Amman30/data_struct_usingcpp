//
//  main.cpp
//  reverse_a_string
//
//  Created by MOHAMMAD AMMAN on 01/07/22.
//

#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int key;
    struct Node* next;
};

void push(struct Node** head_ref, int new_key)
{

    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
 

    new_node->key  = new_key;
 

    new_node->next = (*head_ref);
 

    (*head_ref)    = new_node;
}
 

bool search(struct Node* head, int x)
{
    struct Node* current = head;
    while (current != NULL)
    {
        if (current->key == x)
            return true;
        current = current->next;
    }
    return false;
}
 
int main()
{
    struct Node* head = NULL;
    int x = 21;

    push(&head, 104);
    push(&head, 130);
    push(&head, 121);
    push(&head, 216);
    push(&head, 114);
 
    search(head, 21)? printf("yes") : printf("no");
    return 0;
}
 
