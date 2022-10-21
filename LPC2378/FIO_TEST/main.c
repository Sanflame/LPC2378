#include<stdio.h>
#include<LPC23xx.h>



int main(){
	SCS=(SCS & 0xfffffffe)|0x1;
	PINSEL0=0x0;
	FIO0DIR=0x00000ff;
while(1){

if(FIO0PIN & (1<<8)){

FIO0SET=0x000000ff;


}
else{

FIO0CLR=0x000000ff;

}



}
	



}