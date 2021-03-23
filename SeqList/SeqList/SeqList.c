#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//��ʼ��
void SeqListInit(SL* ps)
{
	/*ps->size = 0;
	ps->a = NULL;
	ps->capacity = 0;*/
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);//ǿ���˳�
	}
	ps->size = 0;
	ps->capacity = 4;
	
}
//��ӡ
void SeqListPrint(SL* ps)
{
	assert(ps);
	
	int i = 0;
	for (i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListCheckCapacity(SL* ps)
{
	assert(ps);
	//���������Ҫ����
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}
}


//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)
{
	assert(ps);
	//ps->a[ps->size - 1] = 0;//ûʲô����
	ps->size--;

}
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int start = 0;
	while (start < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
		++start;	
	}
	ps->size--;
}
//����λ�õĲ����ɾ��
//posΪҪ��ɾ���ĵڼ���Ԫ��
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	
	int end = ps->size - 1;
	while (end >=pos-1)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[pos-1] = x;
	ps->size++;
	
}
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	int start = pos-1;
	while (start < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
		++start;
	}
	ps->size--;
}

void menu()
{
	printf("*****************************\n");
	printf("********0.�˳�****************\n");
	printf("***1.ͷ��     2.ͷɾ**********\n");
	printf("***3.β��     4.βɾ**********\n");
	printf("***5.�����   6.����ɾ*********\n");
	printf("***    7.��ӡ��ʾ     *********\n");
	printf("*****************************\n");

}
