#include<stdio.h>
#include<stdlib.h>

typedef struct double_list {
	int ele;
	struct double_list *next;
	struct double_list *prior;
}double_list;

double_list *init_list(int n) {
	double_list *p = (double_list*)malloc(sizeof(double_list));
	double_list *head = p;
	head = NULL;
	for (int i = 0; i < n; i++)
	{
		double_list *a = (double_list*)malloc(sizeof(double_list));
		scanf_s("%d", &a->ele);
		a->next = NULL;
		a->prior = head;
		head->next = a;
	}
	return p;
}


void prinr_list(double_list *L) {
	double_list *a = L;
	a = a->next;
	for (int i = 0; a!=NULL; i++)
	{
		printf_s("%d ", a->ele);
		a = a->next;
	}
	printf_s("\n"); 
	a = a->prior;
	for (int i = 0; a != NULL; i++)
	{
		printf_s("%d ", a->ele);
		a = a->prior;
	}
	printf_s("\n");
}