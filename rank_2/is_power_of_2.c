int is_power_of_2(int n){
	if(n==0)
		return 0;
	retiurn (n &(n-1)==0);
}