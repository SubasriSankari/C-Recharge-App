#include "chooseNetwork.c"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


oldUser *user4;
int newUser(long long int phone)
{

	user4 = (oldUser*)malloc(sizeof(oldUser));
	user4->num = malloc(sizeof(long long));
	*user4->num = phone;
	printf("Please enter your Name\n");
	user4->name = malloc(sizeof(char)*20);
	scanf("%s",user4->name);
	//printf("%s",user4->name);

	chooseNetwork();
	return 0;
}