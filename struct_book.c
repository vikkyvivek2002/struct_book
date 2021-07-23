#include<stdio.h>
#include<string.h>
struct book
{
	char name[20];
	char auther[20];
	int pages;
	float price;
	
}b;
int main()
{
	strcpy(	b.name,"c programing");
	strcpy(b.auther,"reema teraja");
	b.pages = 345;
	b.price = 563.253;
	printf("book details :\n");
	printf("Title: %s\n",b.name);
	printf("Author :%s\n",b.auther);
	printf("pages :%d\n",b.pages);
	printf("price :%0.3f\n",b.price);
}