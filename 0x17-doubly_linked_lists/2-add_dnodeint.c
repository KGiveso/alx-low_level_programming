#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
  dlistint_t *current = *head;
  dlistint_t *prev = NULL;

  // Check if the list is empty.
  if (current == NULL) {
    return 0;
  }

  // Find the node at the given index.
  for (unsigned int i = 0; i < index; i++) {
    prev = current;
    current = current->next;

    // Check if the index is out of bounds.
    if (current == NULL) {
      return 0;
    }
  }

  // Delete the node.
  if (prev == NULL) {
    // This is the first node in the list.
    *head = current->next;
  } else {
    // This is not the first node in the list.
    prev->next = current->next;
  }

  // Free the memory allocated for the node.
  free(current);

  return 1;
}


