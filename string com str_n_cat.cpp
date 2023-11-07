#include <stdio.h>
#include <string.h>

int main(){
	
	char osni1[15]="buraco ";
	char osni2[10]="do zerbit";

	strncat(osni1,osni2,6);
	
	printf("osni = %s", osni1);
}
