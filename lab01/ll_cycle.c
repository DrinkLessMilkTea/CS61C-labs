#include "ll_cycle.h"
#include <stddef.h>

int ll_has_cycle(node *head) {
  /* your code here */
  node *first = head;
  if (first == NULL)
    return 0;
  node *second = head->next;
  while (second != NULL) {
    if (second == first)
      return 1;
    second = second->next;
    if (second == NULL) {
      return 0;
    } else {
      second = second->next;
    }
    first = first->next;
  }
  return 0;
}
