#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main()
{

	FILE* fp;
	fp = fopen("example.txt", "wb");
	int a = 10000;
	fprintf(fp, "%d", a);

	/*fwrite(&a, sizeof(int), 1, fp);*/
	fclose(fp);
	//fseek(pFile,0,SEEK_SET);
	/*fputs("This is an apple.", pFile);
	fseek(pFile, 9, SEEK_SET);
	fputs(" sam", pFile);*/
	/*fclose(pFile);*/
		
	//FILE* ¾ä±ú
	/*FILE *fp = fopen("test.log", "w");
	if (NULL == fp) {

		printf("fopen error!\n");
		system("pause");
		return 1;
	}*/

	/*for (int c = 'a'; c <= 'z'; c++) {
		int pos = ftell(fp);
		printf("%d\n", pos);
		fputc(c, fp);
	}
	fseek(fp,-3,SEEK_END);
	fputs("XYZ", fp);*/

	/*int i = 0;
	char c = 0;
	fscanf(fp, "hello %d,hello %c", &i,&c);*/

	//fprintf(stdout, "hello %d", 100);
	//fprintf(fp, "hello %d",100);

	//fputs("helloworld",fp);

	//for (char i = 'A'; i < 'D'; i++) {
	//	//fputc(i, fp);
	//	fputc(i, stdout);
	//}
	/*fclose(fp);*/
	system("pause");
	return 0;
}