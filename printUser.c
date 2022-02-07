#include "Recharge.c"

extern oldUser *user1;
extern oldUser *user2;
extern oldUser *user3;
extern oldUser *user4;

int printUser(int value)
{
	if(value == 1){
		printf("--------------- Welcome %s ---------------\n\n",user1->name);
		if(user1->expiredOrNot){
			printf("Your Plan Expired on %d/%d/%d\n\n",user1->expiredOn.year,user1->expiredOn.month,user1->expiredOn.day);
			int Rcase;
			printf("1 -> To Recharge now\n");
			printf("2 -> Not now...Exit\n\n");
			scanf("%d",&Rcase);
			switch(Rcase){
				case 1: 
					Recharge(1);
					break;
				case 2:
					exit;
			}
		}
		else{
			printf("Your Plan will Expires on %d/%d/%d\n",user1->expiredOn.year,user1->expiredOn.month,user1->expiredOn.day);
			printf("Thank You :)\n");
			exit;
		}
	}
	else if(value == 2){
		printf("--------------- Welcome %s ---------------\n\n",user2->name);
		if(user2->expiredOrNot){
			printf("Your Plan Expired on %d/%d/%d\n\n",user2->expiredOn.year,user2->expiredOn.month,user2->expiredOn.day);
			int Rcase;
			printf("1 -> To Recharge now\n");
			printf("2 -> Not now...Exit\n\n");
			scanf("%d",&Rcase);
			switch(Rcase){
				case 1: 
					Recharge(2);
					break;
				case 2:
					exit;
			}
		}
		else{
			printf("Your Plan will Expires on %d/%d/%d\n\n",user2->expiredOn.year,user2->expiredOn.month,user2->expiredOn.day);
			printf("Thank You :)\n");
			exit;
		}
	}
	else if(value == 3){
		printf("--------------- Welcome %s ---------------\n\n",user3->name);
		if(user3->expiredOrNot){
			printf("Your Plan Expired on %d/%d/%d\n\n",user3->expiredOn.year,user3->expiredOn.month,user3->expiredOn.day);
			int Rcase;
			printf("1 -> To Recharge now\n");
			printf("2 -> Not now...Exit\n\n");
			scanf("%d",&Rcase);
			switch(Rcase){
				case 1: 
					Recharge(3);
					break;
				case 2:
					exit;
			}
		}
		else{
			printf("Your Plan will Expires on %d/%d/%d\n\n",user3->expiredOn.year,user3->expiredOn.month,user3->expiredOn.day);
			printf("Thank You :)\n");
			exit;
		}
	}
	else
	{
		extern int value;
		printf("--------------- Welcome %s ---------------\n\n",user4->name);
		if(user4->expiredOrNot){
			printf("Your Plan Expired on %d/%d/%d\n\n",user4->expiredOn.year,user4->expiredOn.month,user4->expiredOn.day);
			int Rcase;
			printf("1 -> To Recharge now\n");
			printf("2 -> Not now...Exit\n\n");
			scanf("%d",&Rcase);
			switch(Rcase){
				case 1: 
					Recharge(value);
					break;
				case 2:
					exit;
			}
		}
		else{
			printf("Congratulations!!!.... You have Recharged Successfully!!\n\n");
			printf("Your Plan will Expires on %d/%d/%d\n\n",user4->expiredOn.year,user4->expiredOn.month,user4->expiredOn.day);
			printf("Thank You :)\n");
			exit(0);
		}
	}
	return 0;
}