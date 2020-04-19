#include<stdio.h>

int main(void)
{
	char str[100], ch;
	int i;
	FILE* fp;

	fp = fopen("E:/arnol/Documents/VisualStudio/C/ClassEG/20191122/a1.txt", "w+");
	ch = getchar();

	while (ch != '#')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	
	rewind(fp);
	fgets(str, 5, fp);
	puts(str);
	fclose(fp);

	return 0;
}