void free_dlistint(dlistint_t *head) {
  dlistint_t *current_node = head;
  while (current_node != NULL) {
    dlistint_t *next_node = current_node->next;
    free(current_node);
    current_node = next_node;
  }
}


	
