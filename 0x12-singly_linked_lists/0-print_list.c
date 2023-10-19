#include <stdio.h>
#include <lists.h>

/**
 *print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of list.
 * return - the number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
  size_t node_count = 0;
  const list_t *current = h;

  while (current != NULL){
    if (current->str == NULL){
      printf ("[0] (nil)\n");
    }else {
      printf ("%s\n", current->str);
    }
    node_count++;
    current = current->next;
  }
  return node_count;
  
