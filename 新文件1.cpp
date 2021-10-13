#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ForC;
	int F;
	int C;
	
	printf("使用攝氏 按1\n使用華氏 按2\n");
	/////////////////////////////////
	scanf("%d",&ForC);
	if(ForC==1){
		printf("攝氏:");
	}
	
	else if(ForC==2){
		printf("華氏:");
    } 
	
	else
		printf("Not Fun");
	////////////////////////////////////	
		
		
		
	return 0;
}
