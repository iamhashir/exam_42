int pgsd(int a, int b){
	while(a!=b){
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}

unsigned int lcm(unsigned int a,unsigned int b){
	if ( a  == 0 || b == 0)
		return 0;
	return (a*b)/pgsd(a,b);
}

// unsigned int lcm(unsigned int a, unsigned int b)
// {
// 	unsigned int n;	

// 	if (a == 0 || b == 0)
// 		return (0);
// 	if (a > b)
// 		n = a;
// 	else
// 		n = b;
// 	while (1)
// 	{
// 		if (n % a == 0 && n % b == 0)
// 			return (n);
// 		++n;
// 	}
// }
// int main(){
// 	printf("%d",lcm(-12,2932));
// }