#include"operation.h"
#include<stdio.h>


int main() {
	double_list *L = (double_list*)malloc(sizeof(double_list));
	int n;
	printf_s("¸öÊý:");
	scanf_s("%d", &n);
	L = init_list(n);
	prinr_list(L);
	system("pause");
}