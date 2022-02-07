#include <stdio.h>
#include <stdlib.h>

extern oldUser* user4;
int value;
void chooseNetwork()
{
	printf("\n\nPlease Choose Your Network!!!\n\n");
	printf("1 -> JIO Network\n");
	printf("2 -> AIRTEL Network\n");
	printf("3 -> VI Network\n\n");
	scanf("%d",&value);
	user4->simName = malloc(sizeof(char)*20);
	if(value == 1){
		user4->simName = "JIO";
		planForJIO(user4);
		otpConfirm();
		printUser(4);
	}
	else if(value == 2){
		user4->simName = "AIRTEL";
		planForAIRTEL(user4);
		otpConfirm();
		printUser(4);
	}
	else if(value == 3){
		user4->simName = "VI";
		planForVI(user4);
		otpConfirm();
		printUser(4);
	}
	else
	{
		printf("You entered wrong keyword:(\n\n");
		exit(0);
	}
}