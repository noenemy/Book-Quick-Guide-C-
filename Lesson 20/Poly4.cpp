#include <stdio.h>


/*
 * 클래스 선언부
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
 * 클래스 정의부
 */
void CPerson::Hello()
{
	printf("Hello\n");
}

void CKoreaPerson::Hello()
{
	printf("안녕하세요\n");
}

void CJapanPerson::Hello()
{
	printf("곤니치와\n");
}

void CChinaPerson::Hello()
{
	printf("니하오\n");
}

/*
 * 메인 프로그램 실행부
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

