#include "unistd.h"
#include <stdio.h> 
  
void	print_bits(unsigned char octet){
	int i = 8;
	while(i--){
		unsigned char c = (octet >> i & 1)+'0';
		write(1,&c,1);
	}
}
void	reverse_bits(unsigned char octet){
	int i = 0;
	while(i<8){
		unsigned char c = (octet >> i & 1)+'0';
		write(1,&c,1);
		i++;
	}
}

int main() 
{	
	print_bits(12);
	write(1,"\n",1);
	reverse_bits(12);
    return 0; 
} 