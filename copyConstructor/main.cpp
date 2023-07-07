#include <iostream>
#include <algorithm>
using namespace std;

class A
{
public:
	// ����Ʈ ������
	A()
	{
		cout << "������" << endl;
		memoryBlock = (char*)malloc(1000000);
	}

	// ����Ʈ �Ҹ���
	~A()
	{
		cout << "�Ҹ���" << endl;
		// ���� ���簡 �� ��� if ������ ��������Ѵ�.
		free(memoryBlock);
		
	}

	// ���� �����ڴ� �ڵ����� �����ȴ�.
	// ���� ��������ڸ� ����� �ټ� �ִ�.
	// ���� ����
	/*A(const A& a)
	{
		cout << "���� ������" << endl;
		memoryBlock = a.memoryBlock;
	}*/

	// ���� ����
	A(const A& a)
	{
		cout << "���� ������" << endl;
		memoryBlock = (char*)malloc(1000000);
		std::copy(a.memoryBlock, a.memoryBlock + 1000000, memoryBlock);
	}

protected:
private:
	char* memoryBlock;
};

// �Ű������� �ѱ� ��쿡�� ��������ڰ� ȣ��ȴ�.
void func(A a)
{
}

// ���۷��� Ÿ���� ��� ���� �����ڰ� ȣ����� �ʴ´�.
void refFunc(A& a)
{

}

int main()
{
	{
		A a1;
		A a2 = a1;
		A a3(a2);

		clock_t start;
		clock_t end;
		start = clock();
		func(a3);
		end = clock();

		cout << "����ð� :" << end - start << "�и���" << endl;
	}
	{
		string str(2000000000, 'b');
		clock_t start;
		clock_t end;
		start = clock();
		end = clock();
		
		cout << "����ð� :" << end - start << "�и���" << endl;
	}

	return 0;
}