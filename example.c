#include <stdio.h>
#include <stdlib.h>
#include "olderUserInfo.h"

int main(){
	oldUser user1;
	printf("%s",user1.name);
	if(user1.name == NULL){
		printf("please enter name");
		printf("%d",user1.currentposition);
	}

}