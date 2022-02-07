#include <stdio.h>
#include "UserInfoGet.c"
#include "changeDetails.c"
#include "newUser.c"
#include "checkPhoneNumIsValid.c"

int main(){

	long long phone_num;
	printf("\nPlease enter your phone number\n");
	scanf("%lld",&phone_num);
	checkPhoneNumIsValid(phone_num);
	int result = user(phone_num);
	if(result != 1){
		printf("\n ******** You are new User ********\n\n");
		newUser(phone_num);
	}
	return 0;
}