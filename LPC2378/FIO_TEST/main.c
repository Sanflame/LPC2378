#include<stdio.h>
#include<LPC23xx.h>



int main(){
	PINSEL0=0x000000ff;
	FIO0DIR0=0x00000ff;
while(1){

if(FIO0PIN0 & (1<<8)){

FIO0SET0=0x000000ff;


}
else{

FIO0CLR0=0x000000ff;

}



}
	



}