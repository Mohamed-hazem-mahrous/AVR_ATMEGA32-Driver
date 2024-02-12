#ifndef I2C_H_
#define I2C_H_

#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>
#include "UTILS.h"

void I2C_Init(unsigned long SCL_Clock);
void I2C_Start(void);
void I2C_Write(unsigned char cByte);
unsigned char I2C_Read(unsigned char ack);
void I2C_Stop();



#endif /* I2C_H_ */