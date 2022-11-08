#include<stdint.h>
#include<LPC23xx.h>



int main(){

IO0_INT_EN_R = 0x1;         //GPIO Interrupt on rising edge
IO0_INT_EN_F=0x02;					//GPIO INTERRUPT ON FALLING EDGE		
	while(1);

}


