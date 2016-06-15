/*******************************************************
*                                                      *
*   Criado em: Sáb 11/Jun/2016,  13:48 hs              *
*   Instituicao: Universidade Federal do Ceará         *
*   Autor: Robert Cabral                               *
*   email: robertcabral@alu.ufc.br                     *
*                                                      *
********************************************************/
#include "gpioFunctions.h"
#include "gpioLED.h"

int main(){

	//INICIALIZANDO O LED DA PLACA, GPIO1_23
	ledInit(GPIO23, MODULE1, DIR_OUTPUT);
	//INICIALIZANDO O BOTÃO NO GPIO1_14, PASSANDO INPUT
	ledInit(GPIO1, MODULE2, DIR_INPUT);

	while(TRUE){
        if(getValue(GPIO1, MODULE2)){					
			whitePinHigh(GPIO23, MODULE1);				
		}else{
			whitePinLow(GPIO23, MODULE1);	
		}
    }
	
	return(0);
}
