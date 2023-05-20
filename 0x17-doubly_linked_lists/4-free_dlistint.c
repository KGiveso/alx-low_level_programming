	
#include "your_header_file.h"  // Replace with your actual header file

void free_dlistint(dlistint_t *head) {
    dlistint_t *current = head;

    while (current != NULL) {
        dlistint_t *next = current->next;
        free(current);
        current = next;
    }
}

