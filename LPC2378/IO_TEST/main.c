#include <LPC23xx.h>
#include <stdio.h>

void delay(void);

int main(){
PINSEL0=0x00;
IODIR0=0x000000FF;
	while(1){
if(IOPIN0<<9){
IOSET0=0x000000FF;

}	
else{
IOCLR0=0x000000FF;
}
	}

}


void delay(){
for(int i=0;i<2;i++){
}



}