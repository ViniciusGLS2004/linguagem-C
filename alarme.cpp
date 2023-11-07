#include <stdio.h>

main(){
	
	int x, y, h=0, hx, hy;	
	
	printf("informe a cada quantas horas o alarme x toca: ");
	scanf("%d", &x);
	printf("informe a cada quantas horas o alarme y toca: ");
	scanf("%d", &y);
	hx = x;
	hy = y;	
	
	while ((h != hx) && (h != hy)){
		if (h == hx){
			hx <= x;	
		}
		h++;
	}
	printf ("os dois alarmes tocaram ao mesto tempo em: %d\n", h);
	return 0;
}
