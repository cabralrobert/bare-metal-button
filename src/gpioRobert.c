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
	unsigned int gpioOutput = 65;
	unsigned int gpioInput = 44;	

	//INICIALIZANDO O LED DA PLACA, GPIO1_23
	ledInit(gpioOutput, DIR_OUTPUT);
	//INICIALIZANDO O BOTÃO NO GPIO2_1, PASSANDO INPUT
	ledInit(gpioInput, DIR_INPUT);

	while(TRUE){
        if(getValue(gpioInput)){					
			whitePinHigh(gpioOutput);				
		}else{
			whitePinLow(gpioOutput);	
		}
    }
	
	return(0);
}
