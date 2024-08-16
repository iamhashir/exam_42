#include "stdio.h"
int ft_atoi(char *str)
{
	int result = 0;
	while(*str){
		result = result * 10 + *str - '0' ;
		str++;
	}
	return result;
}
int main(){
	printf("%i",ft_atoi("4210"));
}

