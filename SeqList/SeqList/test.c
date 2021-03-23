#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	SeqListPushBack(&s, 9);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);
	SeqListPushFront(&s, -3);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);

	SeqListInsert(&s, 2, 2);
	SeqListInsert(&s, 3, 3);
	SeqListPrint(&s);

	SeqListErase(&s, 2);
	SeqListErase(&s, 2);
	SeqListPrint(&s);




}
int main(void)
{
	//TestSeqList1();
	int input = 0;
	SeqList s;
	SeqListInit(&s);//��ʼ��

	do
	{
		int x = 0;
		int pos = 0;
		menu();
		printf("��ѡ��:>");
		if (!scanf("%d", &input))
		{
			printf("�������ʽ���������¿�ʼ\n");
			return 0;
		}
		switch (input)
		{
		case EXIT:
			printf("�˳�˳���\n");
			break;
		case PUSHFRONT:
			printf("��������Ҫͷ���������:>");
			scanf("%d", &x);
			SeqListPushFront(&s, x);
			break;
		case POPFRONT:
			SeqListPopFront(&s);
			break;
		case PUSHBACK:
			printf("��������Ҫβ���������:>");
			scanf("%d", &x);
			SeqListPushBack(&s, x);
			break; 
		case POPBACK:
			SeqListPopBack(&s);
			break;
		case INSERT:
			printf("��������Ҫ�����λ�ú�����:>");
			scanf("%d%d", &pos, &x);
			SeqListInsert(&s, pos, x);

			break;
		case ERASE:
			printf("��������Ҫɾ�������ݵ�λ��:>");
			scanf("%d", &pos);
			SeqListErase(&s, pos);
			break;
		case PRINT:
			SeqListPrint(&s);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	
	return 0;
}