#include <iostream>
#include <vector>

using namespace std;

int main()
{
	float arr[100];
	vector<int> v;


	//�迭 ũ�⺸�� �� �� ū �迭�� ���� ���뷮�� �ø���.
	for (int i = 0; i < 100; i++)
	{
		v.push_back(1);
		cout << "�迭 ũ��	: " << v.size() << endl;
		cout << "�迭 ���뷮	: " << v.capacity() << endl;
	}


	return 0;
}