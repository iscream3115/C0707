#include <iostream>


int main()
{
	FILE* pfile;
	char buffer[1000];

	pfile = fopen("monster.csv", "r");

	if (pfile == NULL) return 0;


	//파일 갯 하고 출력
	while (!feof(pfile))
	{
		if (fgets(buffer, 1000, pfile))
			fputs(buffer, stdout);
	}

	//파일 닫기
	fclose(pfile);


	return 0;
}