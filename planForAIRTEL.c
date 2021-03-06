


typedef struct{
	int cost;		// cost for plan 1
	int days;		// plan 1 valid per day
	int data;		// plan 1 data GB/day
}plan1ForAIRTEL, plan2ForAIRTEL, plan3ForAIRTEL;


void planForAIRTEL(oldUser* user)
{
	plan1ForAIRTEL plan1 ={298, 28, 2};
	plan2ForAIRTEL plan2 ={698, 84, 2};
	plan3ForAIRTEL plan3 ={1498, 365, 24};
	printf("\n ------ Welcome to AIRTEL Recharge Offer -------\n\n");
	printf("Please choose your Plan\n\n");
	printf("************** \n");
	printf("1 -> For plan1\n");
	printf("************** \n");
	printf("cost Rs.%d/- \n%d Days \ndata %dGB per day\n\n\n", plan1.cost, plan1.days, plan1.data);
	printf("************** \n");
	printf("2 -> For plan2\n");
	printf("************** \n");
	printf("cost Rs.%d/- \n%d Days \ndata %dGB per day\n\n\n", plan2.cost, plan2.days, plan2.data);
	printf("************** \n");
	printf("3 -> For plan3\n");
	printf("************** \n");
	printf("cost Rs.%d/- \n%d Days \ndata %dGB per year\n\n", plan3.cost, plan3.days, plan3.data);
	int plan;
	scanf("%d",&plan);
	switch(plan)
	{	
		case 1:
			changeDetails(user,28);
			//printf("\nPlan 1 Recharged Successfully\n");
			break;
		case 2:
			changeDetails(user,84);
			//printf("\nPlan 2 Recharged Successfully\n");
			break;
		case 3:
			changeDetails(user,365);
			//printf("\nPlan 3 Recharged Successfully\n");
			break;
		default:
			printf("\nYou entered wrong key:(\n\n");
			exit(0);
	}
}