#include<stdio.h>
#include<string.h>

struct Book{
	char name[20];
	char author[30];
	float price;
};

int main(){
	struct Book book1;
	gets(book1.name);
	gets(book1.author);
	scanf("%f", &book1.price);
	printf("Ten: %s, tac gia: %s, gia:%f", book1.name, book1.author, book1.price);
}
