#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10   //默认最大长度为10
typedef struct {
	int data[MaxSize];
	int Lengeth;
}SqList;
//初始化线性表
void InitList(SqList& L, int n)
{
	int i;
	for (i = 0; i < n; i++)
		L.data[i] = i;
	L.Lengeth = n;
}
//线性表的插入
void ListInsert(SqList& L, int i, int e)
{
	int j;
	for (j = L.Lengeth; j >= i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.Lengeth++;
}
int main()
{
	int n = 5;
	int i = 3, e = 3;
	SqList L;
	InitList(L, n);
	ListInsert(L, i, e);
	for(int j=0;j<L.Lengeth;j++)
		printf("%d\n", L.data[j]);
	return 0;
}










