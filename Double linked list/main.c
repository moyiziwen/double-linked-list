#include"operation.h"
#include<stdio.h>


int main() {
	double_list *L;
	int n;
	printf_s("����:");
	scanf_s("%d", &n);
	L = init_list(n);
	printf_s("��ʼ:\n");
	prinr_list(L);
	insert_list(L);
	printf_s("����:\n");
	prinr_list(L);
	dele_list(L);
	prinr_list(L);
	alter_list(L);
	prinr_list(L);
	search_list(L);
	system("pause");
}