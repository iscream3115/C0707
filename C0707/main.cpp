#include <iostream>


int main()
{
	FILE* pfile;
	char buffer[1000];

	pfile = fopen("monster.csv", "r");

	if (pfile == NULL) return 0;


	//���� �� �ϰ� ���
	while (!feof(pfile))
	{
		if (fgets(buffer, 1000, pfile))
			fputs(buffer, stdout);
	}

	//���� �ݱ�
	fclose(pfile);


	return 0;
}