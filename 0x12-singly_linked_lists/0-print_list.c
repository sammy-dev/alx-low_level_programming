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

  while (current){
    if (!current->str){
      printf ("[0] (nil)\n");
    }else {
      printf ("[%u] %s\n", current->len, current->str);
    }
    current = current->next;
    node_count++;
  }
  return node_count;
  
  
