#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int cmp(int a, int b) {
	return (a >= b);
}

 


// t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
//     int swap;
//     t_list *start;

//     start = lst;

//     while (lst != NULL && lst->next != NULL)
//     {
//         if ((*cmp)(lst->data, lst->next->data) == 0)
// 		{
//             swap = lst->data;
//             lst->data = lst->next->data;
//             lst->next->data = swap;
//             lst = start;
//         }
// 	else
// 		lst = lst->next;
//     }
//     return (start);
// }
t_list *sort_list(t_list *head,int (*cmp)(int, int) ){
	t_list *start = head;
	int swap;
	while(head !=NULL && head->next !=NULL){
		if((*cmp)(head->data,head->next->data)==0){
			swap = head->data;
			head->data=head->next->data;
			head->next->data=swap;
			head=start;
		} else{
			head=head->next;
		}
	}
	return start;

}

int main() {
   t_list *head = (t_list *)malloc(sizeof(t_list));
   head->data = 50;

   t_list* n1 = (t_list *)malloc(sizeof(t_list));
   n1->data = 152;
   head->next = n1;

   t_list *n2 = (t_list *)malloc(sizeof(t_list));
   n2->data = 5;
   n1->next = n2;

	t_list *current = head;
	while(current != NULL){
		printf(" %d ",current->data);
		current=current->next;
	}
	head = sort_list(head, cmp);
	current = head;
	printf("\n");
	while(current != NULL){
		printf(" %d ",current->data);
		current=current->next;
	}

    return 0;
}