#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{

	//c���� �����б�
	//{
	//	FILE* pfile;
	//	char buffer[1000];

	//	pfile = fopen("monster.csv", "r");

	//	if (pfile == NULL) return 0;


	//	//���� �� �ϰ� ���
	//	while (!feof(pfile))
	//	{
	//		if (fgets(buffer, 1000, pfile))
	//			fputs(buffer, stdout);
	//	}

	//	//���� �ݱ�
	//	fclose(pfile);
	//}

	//C++ ���� ���� �б�
	//input file stream
	ifstream ifs;
	ifs.open("monster.csv");
	//ifs.open("C:\\Users\user\source\repos\C0707\C0707\monster.csv");
	string str;

	while (!ifs.eof())
	{
		getline(ifs, str);
		cout << str << endl;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ',') str[i] = ' ';
		}

		int id;
		string name;
		int lvl;
		int hp;
		int atk;
		int exp;
		stringstream ss(str);

		ss >> id >> name >> lvl >> hp >> atk >> exp;
		cout << id << " " << name << " " << lvl << " " << hp << " " << atk << " " << exp << endl;
	}

	


	return 0;
}