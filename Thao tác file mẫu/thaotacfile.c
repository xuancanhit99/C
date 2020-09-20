#include<stdio.h>
#include<conio.h>
int main()
{
	/*-------------------WIRTE FILE----------------------*/
	FILE *f;
	char path[40];
	char c;
	printf("moi nhap path file: ");
	scanf("%s",path);
	f=fopen(path,"wt");// open for writing
	printf("Nhap noi dung file: ");
	while(1)//writing file
	{
		c=getch();
		putchar(c);
		if(c==13) break;
		fprintf(f,"%c",c);
	}
	fclose(f);
	/*-----------------READING--------------------*/
	f=fopen(path,"rt");//open for reading
	char ch;
	printf("\nnoi dung file: ");
	while(!feof(f))//reading
	{
		ch=fgetc(f);
		putchar(ch);
	}
	fclose(f);//close file
	getch();
}