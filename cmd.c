#include <stdio.h>
 int main(int argc, int *argv[]){
	if(argc>1){
		int i;
		for(i=1;i<argc;i++){
			char item[1]=argv[i];
			
			if(i==argc-1){
				printf("%i\n",(int)item);
				}
			else{
				printf("%i ",(int)item);
				}
		}
	}else{
		return 0;
		}
}
