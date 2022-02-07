
#include "olderUserInfo.h"
#include <stdlib.h>
#include <stdbool.h>

oldUser* user1;
long long user1Detail()
{
	
	user1 = (oldUser*)malloc(sizeof(oldUser));
	user1->lastRechargeDate.year = 2021;
	user1->lastRechargeDate.month = 5;
	user1->lastRechargeDate.day = 1;
	user1->expiredOrNot = true;
	user1->num = malloc(sizeof(long long));
	*user1->num = 7810045325;
	user1->name="sankari";
	user1->simName="Jio";
	user1->currentPlan = 2;
	user1->expiredOn.year = 2021;
	user1->expiredOn.month = 7;
	user1->expiredOn.day = 23;

	return *user1->num;
	
}

