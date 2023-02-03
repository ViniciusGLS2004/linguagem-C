#include <stdio.h>

main()
{
	
	int a;
	float nota, media, total=0;
	
	for(a = 1; a <= 10; a ++){
		printf("digite a nota: ");
		scanf("%f", &nota);
		total = total + nota;
}
	media = total / 10;
		printf("a media da sala eh:%.2f\n", media);
	
return 0;
}
