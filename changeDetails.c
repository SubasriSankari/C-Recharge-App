#include <stdio.h>
#include <time.h>

extern oldUser* user1;
extern oldUser* user2;
extern oldUser* user3;
extern oldUser* user4;


int changeDetails(oldUser* user, int days){

	time_t timer;
	timer = time(NULL);
	struct tm date = {0};
	date = *gmtime(&timer);
	
	if(*user->num == *user1->num){
		user1->lastRechargeDate.day = date.tm_mday-1;
		user1->lastRechargeDate.month = date.tm_mon + 1;
		user1->lastRechargeDate.year = date.tm_year + 1900;
		date.tm_year = date.tm_year;
		date.tm_mon = date.tm_mon;
		date.tm_mday = date.tm_mday + days;
		timer = mktime(&date);
		date = *gmtime(&timer);
		user1->expiredOn.day = date.tm_mday-1;
		user1->expiredOn.month = date.tm_mon +1;
		user1->expiredOn.year = date.tm_year + 1900;
		user1->expiredOrNot = false;
		//printf("Last Recharged on %d/%d/%d\n\n",user1->lastRechargeDate.day,user1->lastRechargeDate.month,user1->lastRechargeDate.year);
		//printf("Expires on %d/%d/%d\n\n",user1->expiredOn.day,user1->expiredOn.month,user1->expiredOn.year);
		
	}
	else if(*user->num == *user2->num){
		user2->lastRechargeDate.day = date.tm_mday-1;
		user2->lastRechargeDate.month = date.tm_mon + 1;
		user2->lastRechargeDate.year = date.tm_year + 1900;
		date.tm_year = date.tm_year;
		date.tm_mon = date.tm_mon;
		date.tm_mday = date.tm_mday + days;
		timer = mktime(&date);
		date = *gmtime(&timer);
		user2->expiredOn.day = date.tm_mday-1;
		user2->expiredOn.month = date.tm_mon +1;
		user2->expiredOn.year = date.tm_year + 1900;
		user2->expiredOrNot = false;
		//printf("Last Recharged on %d/%d/%d\n\n",user2->lastRechargeDate.day,user2->lastRechargeDate.month,user2->lastRechargeDate.year);
		//printf("Expires on %d/%d/%d\n\n",user2->expiredOn.day,user2->expiredOn.month,user2->expiredOn.year);
	}
	else if(*user->num == *user3->num){
		user3->lastRechargeDate.day = date.tm_mday-1;
		user3->lastRechargeDate.month = date.tm_mon + 1;
		user3->lastRechargeDate.year = date.tm_year + 1900;	
		date.tm_year = date.tm_year;
		date.tm_mon = date.tm_mon;
		date.tm_mday = date.tm_mday + days;
		timer = mktime(&date);
		date = *gmtime(&timer);
		user3->expiredOn.day = date.tm_mday-1;
		user3->expiredOn.month =date.tm_mon +1;
		user3->expiredOn.year = date.tm_year + 1900;
		user3->expiredOrNot = false;
		//printf("Last Recharged on %d/%d/%d\n\n",user3->lastRechargeDate.day,user3->lastRechargeDate.month,user3->lastRechargeDate.year);
		//printf("Expires on %d/%d/%d\n\n",user3->expiredOn.day,user3->expiredOn.month,user3->expiredOn.year);
	}
	else if(*user->num == *user4->num){
		user4->lastRechargeDate.day = date.tm_mday-1;
		user4->lastRechargeDate.month = date.tm_mon + 1;
		user4->lastRechargeDate.year = date.tm_year + 1900;
		date.tm_year = date.tm_year;
		date.tm_mon = date.tm_mon;
		date.tm_mday = date.tm_mday + days;
		timer = mktime(&date);
		date = *gmtime(&timer);
		user4->expiredOn.day = date.tm_mday-1;
		user4->expiredOn.month =date.tm_mon +1;
		user4->expiredOn.year = date.tm_year + 1900;
		user4->expiredOrNot = false;
		
	}
		
}