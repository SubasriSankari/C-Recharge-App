
#include <stdbool.h>


oldUser *user2;
long long user2Detail()
{
	user2 = (oldUser*)malloc(sizeof(oldUser));
	user2->lastRechargeDate.year = 2021;
	user2->lastRechargeDate.month = 9;
	user2->lastRechargeDate.day = 10;
	user2->expiredOrNot = true;
	user2->num = malloc(sizeof(long long));
	*user2->num = 9655822628;
	user2->name="mani";
	user2->simName="Airtel";
	user2->currentPlan = 1;
	user2->expiredOn.year = 2021;
	user2->expiredOn.month = 10;
	user2->expiredOn.day = 8;
	
	return *user2->num;
	
}