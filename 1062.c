#include <stdio.h>


int main() {
    double ph;
    scanf("%lf" , &ph);
    
    if(ph>7 && ph<14){
        printf("Basica");
    }
    else if(ph>1 && ph<7){
        printf("Acida");
    }
    else{
        printf("Neutra");
    }
	return 0;
}
