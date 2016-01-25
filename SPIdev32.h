// SPIdev32.h

#ifndef _SPIDEV32_h
#define _SPIDEV32_h

 
	#include "arduino.h"
 
#include "arduino.h"
#include <SPI.h>
#include "SPI2Cdev.h"
class SPIdev32 : public SPI2Cdev
{
 protected:


 public:
 
	 SPIClass * wire;
	 SPIdev32();
	 SPIdev32(SPIClass * w);


	 // Inherited via SPI2Cdev
	 virtual int8_t readBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t * data, uint16_t timeout = 1000) override;

	 virtual int8_t readBitW(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint16_t * data, uint16_t timeout = 1000) override;

	 virtual int8_t readBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t * data, uint16_t timeout = 1000) override;

	 virtual int8_t readBitsW(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint16_t * data, uint16_t timeout = 1000) override;

	 virtual int8_t readByte(uint8_t devAddr, uint8_t regAddr, uint8_t * data, uint16_t timeout = 1000) override;

	 virtual int8_t readWord(uint8_t devAddr, uint8_t regAddr, uint16_t * data, uint16_t timeout = 1000) override;

	 virtual int8_t readBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t * data, uint16_t timeout  ) override;

	 virtual int8_t readWords(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint16_t * data, uint16_t timeout  ) override;

	 virtual bool writeBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t data) override;

	 virtual bool writeBitW(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint16_t data) override;

	 virtual bool writeBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t data) override;

	 virtual bool writeBitsW(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint16_t data) override;

	 virtual bool writeByte(uint8_t devAddr, uint8_t regAddr, uint8_t data) override;

	 virtual bool writeWord(uint8_t devAddr, uint8_t regAddr, uint16_t data) override;

	 virtual bool writeBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t * data) override;

	 virtual bool writeWords(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint16_t * data) override;

};

 

#endif

