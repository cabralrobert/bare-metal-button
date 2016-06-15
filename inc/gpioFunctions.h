#ifndef GPIOFUNCTIONS_H_
#define GPIOFUNCTIONS_H_

#include "gpioLED.h"

//#define  GETPIN(nGpio)		(nGpio / 32)
//#define  GETBANK(nGpio)		(nGpio % 32)

int ledInit(int nGpio, int dir_in_out);
void modulo0(int nGpio);
void modulo1(int nGpio);
void modulo2(int nGpio);
void modulo3(int nGpio);
void Delay(volatile unsigned int count);
int getValue(unsigned int nGpio);
void whitePinHigh(unsigned int nGpio);
void whitePinLow(unsigned int nGpio);

#endif //GPIOFUNCTIONS_H_
