#include "stdio.h"
unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main(){
	printf("%i",swap_bits(15));
}