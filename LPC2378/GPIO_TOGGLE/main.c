// CODE IS WRITTEN FOR SIMULATING IN KEIL USING LPC2398

#include <LPC23xx.H>
#include <stdio.h>

void delay(void); 								//Delay function as timer is not used, customise as per requirements
int main(){

PINSEL0 = 0x00;										//Configure port0 for GPIO (default(reset) value == 00)
IODIR0 = 0x000000FF;							//SET port0   0x000000FF as output pins , from pin 0 to 7
while(1)
{
IOSET0=0x000000FF;								//SET port0   0x000000FF as high , from pin 0 to 7
	delay();
IOCLR0=0x000000FF;								//CLEAR port0   0x000000FF (set as low) , from pin 0 to 7
delay();

}
return 0;													//return
}
void delay(){
																			// customise as per requirements
for(int i=0;i<1;i++)
{continue;
}


}