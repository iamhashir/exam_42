#include "unistd.h"
// int main(int argc, char **argv){
// 	if (argc==2){
// 		int i = 0;
// 		while(argv[1][i]==' ' || argv[1][i]=='\t')
// 			i++;
// 		while (argv[1][i])
// 		{
// 			write(1,&argv[1][i],1);
// 			if(argv[1][i+1]==' '){
// 				break;
// 			}
// 			i++;
// 		}
// 	}
// 	write(1,"\n",1);
// }
// int main(){
// 	int i=0;
// 	while(i <100){
// 		if(i % 3 == 0)
// 			write(1,"fizz",4);
// 		if(i % 5 == 0)
// 			write(1,"buzz",4);
// 		i++;
// 	}
// }

void ft_putstr(char *str){
	while(*str){
		write(1,str,1);
		str++;
	}
}
int main(){
	ft_putstr("hashir");
}