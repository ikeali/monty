#include "monty.h"

/**
 * add_node_to_stack - Add a new node to the head of the stack.
 * @head: Pointer to the head of the stack.
 * @n: New value.
 * Return: No return value.
 */
void add_node_to_stack(stack_t **head, int n)
{
    stack_t *new_node = malloc(sizeof(stack_t));

    if (!new_node)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head)
        (*head)->prev = new_node;

    *head = new_node;
}
