#include <stdio.h>

int main(){
	int i;
	char text[20];
	for (i=1;i<10;++i){
		sprintf(text,"%d",i);
		printf("%s\n",text);
	}

  	return 0;
}
