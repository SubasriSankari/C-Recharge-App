#include <stdbool.h>

oldUser* user3;
long long user3Detail()
{

	user3 =(oldUser*) malloc(sizeof(oldUser));
	user3->lastRechargeDate.year = 2021;
	user3->lastRechargeDate.month = 9;
	user3->lastRechargeDate.day = 23;
	user3->expiredOrNot = false;
	user3->num = malloc(sizeof(long long));
	*user3->num = 8248690919;
	user3->name="subasri";
	user3->simName="VI";
	user3->currentPlan = 2;
	user3->expiredOn.year = 2021;
	user3->expiredOn.month = 11;
	user3->expiredOn.day = 18;
	
	return *user3->num;
	
}