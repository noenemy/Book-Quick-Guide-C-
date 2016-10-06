#include <stdio.h>
#include <malloc.h>

struct Node
{
	int nData; // ������
	Node *pNext; // ���� ��忡 ���� ��ũ
};

void InsertNode(Node *pPrev, int nData);
void DeleteNode(Node *pPrev);
void TraverseNode(Node *pNode);

/*
 * ���� ���α׷� �����
 */ 
int main()
{
	// ���� �Ӹ����� ������� ����
	Node head, tail;
	head.nData = 10;
	tail.nData = 20;
	head.pNext = &tail;
	tail.pNext = NULL;

	TraverseNode(&head);
	printf("\n");
	
	InsertNode(&head, 2);
	InsertNode(&head, 4);
	InsertNode(&head, 1978);

	TraverseNode(&head);
	printf("\n");

	DeleteNode(&head);
	DeleteNode(&head);
	DeleteNode(&head);

	TraverseNode(&head);
	printf("\n");

	return 0;
}

void InsertNode(Node *pPrev, int nData)
{
	// ���ο� ��带 �����Ѵ�.
	Node *pNode = NULL;
	pNode = (Node *)malloc(sizeof(Node));
	pNode->nData = nData;

	// ���� ����� ��ũ�� �����Ѵ�.
	pNode->pNext = pPrev->pNext;

	// ���� ����� ��ũ�� ���ο� ��� �ּҸ� �����Ѵ�. 
	pPrev->pNext = pNode;
}

void DeleteNode(Node *pPrev)
{
	// ������ ���
	Node *pDelNode = pPrev->pNext;

	// ������ ��� ��ũ ������ �����Ѵ�.
	pPrev->pNext = pDelNode->pNext;

	// ��带 �����Ѵ�.
	free(pDelNode);
}

void TraverseNode(Node *pNode)
{
	Node *pPointer = pNode;

	// ����� �����͸� ����Ѵ�.	
	printf("%d ", pPointer->nData);

	// ���� ��� ������ ������ �ݺ��Ѵ�. (���ȣ��)
	if (pPointer->pNext != NULL)
		TraverseNode(pPointer->pNext);		

}