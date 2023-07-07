#include <iostream>
#include <vector>

using namespace std;

int main()
{
	float arr[100];
	vector<int> v;


	//배열 크기보다 좀 더 큰 배열을 만들어서 수용량을 늘린다.
	for (int i = 0; i < 100; i++)
	{
		v.push_back(1);
		cout << "배열 크기	: " << v.size() << endl;
		cout << "배열 수용량	: " << v.capacity() << endl;
	}


	return 0;
}