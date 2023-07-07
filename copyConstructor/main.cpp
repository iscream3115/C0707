#include <iostream>
#include <algorithm>
using namespace std;

class A
{
public:
	// 디폴트 생성자
	A()
	{
		cout << "생성자" << endl;
		memoryBlock = (char*)malloc(1000000);
	}

	// 디폴트 소멸자
	~A()
	{
		cout << "소멸자" << endl;
		// 얕은 복사가 될 경우 if 문으로 막아줘야한다.
		free(memoryBlock);
		
	}

	// 복사 생성자는 자동으로 생성된다.
	// 직접 복사생성자를 만들어 줄수 있다.
	// 얕은 복사
	/*A(const A& a)
	{
		cout << "복사 생성자" << endl;
		memoryBlock = a.memoryBlock;
	}*/

	// 깊은 복사
	A(const A& a)
	{
		cout << "복사 생성자" << endl;
		memoryBlock = (char*)malloc(1000000);
		std::copy(a.memoryBlock, a.memoryBlock + 1000000, memoryBlock);
	}

protected:
private:
	char* memoryBlock;
};

// 매개변수로 넘길 경우에도 복사생성자가 호출된다.
void func(A a)
{
}

// 레퍼런스 타입의 경우 복사 생성자가 호출되지 않는다.
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

		cout << "수행시간 :" << end - start << "밀리초" << endl;
	}
	{
		string str(2000000000, 'b');
		clock_t start;
		clock_t end;
		start = clock();
		end = clock();
		
		cout << "수행시간 :" << end - start << "밀리초" << endl;
	}

	return 0;
}