#include "planForJIO.c"
#include "planForAirtel.c"
#include "planForVI.c"
#include "otpConfirm.c"

extern oldUser *user1;
extern oldUser *user2;
extern oldUser *user3;

void Recharge(int value){
	if(value==1){
		planForJIO(user1);
		int result = otpConfirm();
		if(result!=1)
			exit;

		printf("\nRecharged Successfully !!!\n\n");
		printUser(1);
	}
	else if(value==2){
		planForAIRTEL(user2);
		int result = otpConfirm();
		if(result!=1)
			exit;

		printf("\nRecharged Successfully !!!\n\n");
		printUser(2);
	}
	else if(value==3){
		planForVI(user3);
		int result = otpConfirm();
		if(result!=1)
			exit;

		printf("\nRecharged Successfully !!!\n\n");
		printUser(3);
	}
}