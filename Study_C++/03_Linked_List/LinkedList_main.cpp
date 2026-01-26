/*----연결형리스트----*/
#include <iostream>

#include "LinkedList.h"
using namespace std;

int main()
{
	tLinkedList list = {}; // 리스트 선언
	InitList(&list); // 리스트 초기화

	PushBack(&list, 100); // 리스트에 값 추가
	PushBack(&list, 200);
	PushFront(&list, 300);

	tNode* pNode = list.pHeadNode; // 헤드 노드 저장
	for (int i = 0; i < list.iCount; i++)
	{
		cout << pNode->iData << " "; 
		pNode = pNode->pNextNode; // 차례 차례 값 출력후 다음 노드 저장
	}

	ReleaseList(&list); // 리스트 메모리 해제

	return 0;
}