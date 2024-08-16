#include "stdio.h"
char ft_tolower(char c){
	if(c>='A' && c <='Z')
		return c+('A'-'a');
	return c;
}

int get_digit(char c, int digits_in_base){
	int max_digit;
	int correction = digits_in_base - 1;
	if(digits_in_base <= 10)
		max_digit =  correction + '0';
	else
		max_digit =  correction - 10 + 'a';
	if(c >= '0' && c<='9' && c <= max_digit)
		return c -'0';
	else if(c>='a' && c <='f' && c <= max_digit)
		return 10 + c - 'a';
	else 
		return (-1);
}
 

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit = 0;
	if(str == NULL || str_base <2 || str_base >16)
		return 0;
	if(*str == '-'){
		sign = -1;
		++str;
	}
	while(*str){
		digit = get_digit(ft_tolower(*str),str_base);
		if(digit == -1)
			break;
		result = result * str_base + digit;
		++str;
	}
	return result* sign;
}
int main(){
	printf("%d", ft_atoi_base("11",16));
}

int get_digit(char *str ,int base)
{
	int max_digit = 0;
	int correction = base -1;
	if(*str >= '0'&&*str <='9'){
		max_digit = correction + '0';
	}
	else{
		max_digit = correction - 10 +'a';
	}
	if(c<='0' && c>='9' && c<=max_digit){
		return c - '0';
	}
	else if ( c<='a' && c>='f' && c<=max_digit){
		return 10 + c -'a';
	}
	return -1;
}
int ft_atoi_base(char *s,int base){
	int r = 0;
	int sign  = 1;
	int digit=0;
	if (s = =NULL || base <2 || base >16)
		return 0;
	if(*s ='-'||*s='+'){
		sign = -1;
		++str;
	}
	while(*str){
		digit = get_digit(ft_tolower(*str),base);
		if(digit == -1)
			break;
		++str;
	}
	return res *sign;
}