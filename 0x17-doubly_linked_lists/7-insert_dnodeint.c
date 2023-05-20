#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
  dlistint_t *new_node, *current_node = *h;

  if (idx == 0) {
    return add_dnodeint(h, n);
  }

  for (; idx != 1; idx--) {
    if (current_node == NULL) {
      return NULL;
    }
    current_node = current_node->next;
  }

  new_node = malloc(sizeof(dlistint_t));
  if (new_node == NULL) {
    return NULL;
  }

  new_node->n = n;
  new_node->next = current_node->next;
  new_node->prev = current_node;
  current_node->next->prev = new_node;
  current_node->next = new_node;

  return new_node;
}


