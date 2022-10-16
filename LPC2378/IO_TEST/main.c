#include <LPC23xx.h>
#include <stdio.h>

void delay(void);															// TIMER IS NOT USED , configure DELAY as per requirement

int main(){																		//MAIN FUNC
PINSEL0=0x00;																	//SELECT PORT0 as GPIO
IODIR0=0x000000FF;														//SET PORT0 0-7 as output, rest input
	while(1){
if(IOPIN0 & (1<<8)){													//CHECK 8th bit of PORT0 (if 8th bit == 1 ) then condition is true
IOSET0=0x000000FF;														// set 0-7 pin of port0 as high

}	
else{
IOCLR0=0x000000FF;														//clear pin 0-7 of port 0
}
	}

}


void delay(){
for(int i=0;i<2;i++){
}



}