#include "user1.c"
#include "user2.c"
#include "user3.c"
#include "printUser.c"

int checkIsOldUser(long long number){
	//extern oldUser *user3;
	if(number == user1Detail()){
		printf("\nYou are our existing user!!\n\n");
		printUser(1);
		return 1;
	}
	else if(number == user2Detail())
	{
		printf("\nYou are our existing user!!\n\n");
		printUser(2);
		return 1;
	}
	else if(number == user3Detail())
	{
		printf("\nYou are our existing user!!\n\n");
		printUser(3);
		return 1;
	}
	else
	{
		return 0;
	}
}