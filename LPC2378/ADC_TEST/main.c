#include<stdint.h>
#include<LPC23xx.h>





int main(){
int adcdata=0;
float voltage=0.0;	
PCONP |= 0x00001000;
PINSEL1 |= 0x4000;
AD0CR = 0x01200001;
while(1){
while(AD0DR0 & 0x80000000){

adcdata=(AD0DR0 & 0x0000FFC0);
adcdata=adcdata>>6;
voltage=((adcdata/1023.0)*3.3);
IOPIN1=voltage;
AD0CR = 0x01200001;

}

}


}
