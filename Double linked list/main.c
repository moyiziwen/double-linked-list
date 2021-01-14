#include"operation.h"
#include<stdio.h>


int main() {
	double_list *L;
	int n;
	printf_s("¸öÊı:");
	scanf_s("%d", &n);
	L = init_list(n);
	prinr_list(L);
	insert_list(L);
	prinr_list(L);


	system("pause");
}