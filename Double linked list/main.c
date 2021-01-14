#include"operation.h"
#include<stdio.h>


int main() {
	double_list *L;
	int n;
	printf_s("个数:");
	scanf_s("%d", &n);
	L = init_list(n);
	printf_s("初始:\n");
	prinr_list(L);
	insert_list(L);
	printf_s("插入:\n");
	prinr_list(L);
	dele_list(L);
	prinr_list(L);
	alter_list(L);
	prinr_list(L);
	search_list(L);
	system("pause");
}