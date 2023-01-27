  1 #include <stdlib.h>
  2 #include <string.h>
  3 #include <stdio.h>
  4 #include "lists.h"
  5
  6 /**
  7  * main - check the code
  8  *
  9  * Return: Always 0.
 10  */
 11 int main(void)
 12 {
 13     list_t *head;
 14     list_t *new;
 15     list_t hello = {"World", 5, NULL};
 16     size_t n;
 17
 18     head = &hello;
 19     new = malloc(sizeof(list_t));
 20     if (new == NULL)
 21     {
 22         printf("Error\n");
 23         return (1);
-- INSERT --                
