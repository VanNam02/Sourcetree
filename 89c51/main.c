#include <REGX51.H>
#define nutnhan P3_1 
 
void delay(int value){
	int x,y ;
	for(x = 0; x < value; x++){
		for(y = 0; y < 125; y++){
		};
	}
}
void main(){
	int dem ;
  nutnhan = 1; 
	dem = 0;
	while(1){
		P2 = 0x00;
			if(nutnhan == 0){
				dem ++ ;				
			}
			if(dem == 1){	
				P2_0 = 1;
				delay(500);
			}
			else if(dem == 2){
				P2_0 = 1;
				P2_1 = 1;
				delay(500);
			}
			else if(dem == 3){
				P2_0 = 1;
				P2_1 = 1;
				P2_2 = 1;
				delay(500);
			}else if(dem == 4){
				P2_0 = 1;
				P2_1 = 1;
				P2_2 = 1;
				P2_3 = 1;
				delay(500);
			}else if(dem == 5){
				P2_0 = 1;
				P2_1 = 1;
				P2_2 = 1;
				P2_3 = 1;
				P2_4 = 1;
				delay(500);
			}else if(dem == 6){
				P2_0 = 1;
				P2_1 = 1;
				P2_2 = 1;
				P2_3 = 1;
				P2_4 = 1;
				P2_5 = 1;
				delay(500);
			}else if(dem == 7){
				P2_0 = 1;
				P2_1 = 1;
				P2_2 = 1;
				P2_3 = 1;
				P2_4 = 1;
				P2_5 = 1;
				P2_6 = 1;
				delay(500);
			}else if(dem == 8){
				P2_0 = 1;
				P2_1 = 1;
				P2_2 = 1;
				P2_3 = 1;
				P2_4 = 1;
				P2_5 = 1;
				P2_6 = 1;
				P2_7 = 1;
				delay(500);
			}else {
				P2 = 0x00;
				delay(500);
				dem = 0;
			}
	}
}