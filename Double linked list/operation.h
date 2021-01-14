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
	head->prior = NULL;
	head->next = NULL;
	//printf_s("Ԫ�ڵ�ֵ��\n");
	scanf_s("%d", &head->ele);
	//printf_s("\n����ڵ㣺\n");
	for (int i = 0; i < n - 1; i++)
	{
		double_list *a = (double_list*)malloc(sizeof(double_list));
		scanf_s("%d", &a->ele);
		a->next = NULL;
		a->prior = NULL;
		head->next = a;
		a->prior = head;
		head = head->next;
	}
	return p;
}

double_list *insert_list(double_list *L) {
	double_list *a = L;
	double_list *b = L;
	int q = 0;
	while (a != NULL)
	{
		a = a->next;
		q++;
	}
	double_list *a1 = L;
	double_list *c = (double_list*)malloc(sizeof(double_list));
	c->next = NULL;
	c->prior = NULL;
	int x, n, i = 1;
	printf_s("����-ֵ λ��:");
	scanf_s("%d %d", &x, &n);
	c->ele = x;
	if (n > q + 1 || n < 1)
	{
		return L;
	}
	if (n == 1)
	{
		a1->prior = c;
		c->next = a1;
		a1 = a1->prior;
		return L;
	}

	if (n == q + 1)
	{
		while (a1 != NULL)
		{
			b = a1;
			a1 = a1->next;
		}
		a1 = b;
		a1->next = c;
		c->prior = a1;
		a1 = a1->next;
		return L;
	}

	double_list *a2 = L;
	if (n > 1 & n < q + 1)
	{
		for (int i = 2; i < n; i++)
		{
			a2 = a2->next;
		}
		c->next = a2->next;
		c->prior = a2;
		a2->next->prior = c;
		a2->next = c;
		a2 = a2->next;
	}
}



void prinr_list(double_list *L) {
	double_list *a = L, *b = L;
	for (int i = 0; a != NULL; i++)
	{
		printf_s("%d ", a->ele);
		b = a;
		a = a->next;
	}
	printf_s("\n");
	for (int i = 0; b != NULL; i++)
	{
		printf_s("%d ", b->ele);
		b = b->prior;
	}
	printf_s("\n");
}