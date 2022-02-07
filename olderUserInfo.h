#include "Date.h"
#include <stdbool.h>


typedef struct{
	char* simName;
	char* name;
	long long* num;
	Date lastRechargeDate;
	Date expiredOn;
	bool expiredOrNot;
}oldUser;