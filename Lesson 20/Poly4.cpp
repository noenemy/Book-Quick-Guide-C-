#include <stdio.h>


/*
 * Ŭ���� �����
 */
class CPerson
{
public:
	virtual void Hello();
};


class CKoreaPerson : public CPerson
{
public:
	void Hello();
};

class CJapanPerson : public CPerson
{
public:
	void Hello();
};

class CChinaPerson : public CPerson
{
public:
	void Hello();
};

/*
 * Ŭ���� ���Ǻ�
 */
void CPerson::Hello()
{
	printf("Hello\n");
}

void CKoreaPerson::Hello()
{
	printf("�ȳ��ϼ���\n");
}

void CJapanPerson::Hello()
{
	printf("���ġ��\n");
}

void CChinaPerson::Hello()
{
	printf("���Ͽ�\n");
}

/*
 * ���� ���α׷� �����
 */
int main()
{
	CPerson *pPerson1 = new CKoreaPerson; 
	CPerson *pPerson2 = new CJapanPerson; 
	CPerson *pPerson3 = new CChinaPerson;
  
	pPerson1->Hello();
	pPerson2->Hello();
	pPerson3->Hello();

	delete pPerson1;
	delete pPerson2;
	delete pPerson3;

	return 0;
}

