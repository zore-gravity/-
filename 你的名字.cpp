#include <stdio.h>					
#include <string.h>				
#include <stdlib.h>				
#include <Windows.h>			
#include <assert.h>						
 

void gotoxy(int x, int y)
{
	COORD pos; pos.X = x - 1; pos.Y = y - 1;			
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
 

int main()
{
	system("color f0");				
	long i;								
	char FileName[100];					
	char hi[254000];					
	FILE *in;							
 
	system("C:\\Users\\hasee\\Desktop\\�ַ������\\�������.mp4");//����ԭ��Ƶ��ַ����Ҫ��������и���	
	Sleep(1000);						
 

	for (i=1; i<=5584; i++)
	{
		sprintf(FileName,
			"C:\\Users\\hasee\\Desktop\\�ַ������\\��������ַ���\\2 (%ld).txt", i);//�����ַ���Ƭ��λ�ã���Ҫʱ�������޸� 
 
		in = fopen(FileName, "r");
		assert(in != NULL);	
 
		fread(hi, 1, 254000, in);
 
		printf("%s\n%d", hi, i);
		gotoxy(1, 1);		
		Sleep(26);
		fclose(in);
	}
	system ("pause");
	return 0;
}
