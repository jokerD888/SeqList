#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//#define PUSHFRONT 1
//#define POPFRONT 2
//#define PUSHBACK 3
//#define POPBACK 4
//#define INSERT 5
//#define ERASE 6
//#define PRINT 7

enum Option
{
	EXIT,
	PUSHFRONT,
	POPFRONT,
	PUSHBACK,
	POPBACK,
	INSERT,
	ERASE,
	PRINT
};
//˳�����Ч�����������б�����������
//��̬˳�����ƣ��̶���С��
//typedef int SLDataType;
//#define N 10
//
////vector
//struct SeqList
//{
//	int a[N];
//	int size;
//};
//void SeqListPushBack(struct SeqList* ps, SLDataType x);
//void SeqListPopBack(struct SeqList* ps);
//void SeqListPushFront(struct SeqList* ps, SLDataType x);
//void SeqListPopFront(struct SeqList* ps);
//


//��̬̬˳�����ƣ���С�ɱ䣩
typedef int SLDataType;
#define N 10

//vector
typedef struct SeqList
{
	SLDataType* a;
	int size;      //��Ч���ݵĸ���
	int capacity; //�����ռ�Ĵ�С
}SL,SeqList;



//��ʼ��
void SeqListInit(SL* ps);
//��ӡ
void SeqListPrint(SL* ps);
//����
void SeqListCheckCapacity(SL* ps);

//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
//����λ�õĲ����ɾ��
void SeqListInsert(SL*ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);

void menu();
