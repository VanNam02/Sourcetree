#include <REGX51.H>
#define d1 P3_0 
#define d2 P3_1
 
unsigned char port[] = {0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};

void delay(int value){
	int x, y;
	for(x = 0; x < value; x++)
		for(y = 0; y < 125; y++);
}

void Led7Seg(){
	int i, j;
	for(i = 0; i < 100; i++){
		for(j = 0; j < 10; j++){
			P2 = port[i/10] ;
			d2 = 0; 
			delay(100);
			d2 = 1;
			P2 = port[i%10] ;
			d1 = 0;
			delay(100);
			d1 = 1;
		}
	}
}
void main(){

	while (1){
		Led7Seg() ;
	}
}