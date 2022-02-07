
#include "checkIsOldUser.c"

int user(long long phone_num)
{
	if(checkIsOldUser(phone_num)!=0){
		
		return 1;
	}
	else
	{
		return 0;
	}
	
}