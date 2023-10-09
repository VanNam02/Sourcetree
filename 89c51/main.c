#include <REGX51.H>
 
unsigned char port[] = {0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};

void delay(int value){
	int x, y;
	for(x = 0; x < value; x++)
		for(y = 0; y < 125; y++);
}
void main(){
	int i ;
	for(i = 0; i < 10; i++){
		P2 = port[i];
		delay(1000);
	}
}