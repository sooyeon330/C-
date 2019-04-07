/*#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main(){
	int N,i;
	int max,min,tmp;
	scanf("%d", &N);
	
	int su[100];

	for (i = 0; i < N; i++)
		scanf("%d", &su[i]);
	
	max = su[0]; min = su[0];

	for (i = 1; i < N; i++){
		if (max < su[i])
			max = su[i]; 
		 else if (min > su[i])
			 min = su[i]; 
	}
	
	printf("ÃÖ´ñ°ª : %d", max);
	printf("ÃÖ¼Ú°ª : %d", min);


	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int A,i;

	scanf("%d", &A);

	for (i = 2; i <A; i++){
		if (A%i == 0){
		printf("%d", i); 
		break;
		}
		if((i+1)==A) printf("0");
	   }

	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include <stdio.h>
int main(){
	char str[100]="";
	int a, b,i;

	scanf("%d %d",&a,&b);
	fflush(stdin);
	gets(str);

	for (i = a - 1; i < b; i++){
		printf("%c", str[i]);
	}

	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include <stdio.h>
int main(){
	int i;
	int su[100], sum=0;

	for (i = 0; i < 100; i++){
		scanf("%d", su[i]);
	}
	for (i = 0; i < strlen(su) - 1; i++){
		if (su[i] == -1) break;
		else  sum += su[i];
	}

	printf("%d", sum);


	return 0;
}

