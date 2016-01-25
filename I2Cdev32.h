// I2Cdev.h

#ifndef _I2CDEV_h
#define _I2CDEV_h

 
	#include "arduino.h"
#include <Wire.h>
#include "SPI2Cdev.h"
#define I2CDEV_DEFAULT_READ_TIMEOUT     1000
class I2Cdev32 :  public SPI2Cdev
{
 protected:


 public:
	 TwoWire * wire;
	 I2Cdev32();
	 I2Cdev32(TwoWire * w);
 
	 uint16_t readTimeout;

	 // Inherited via SPI2Cdev
	 virtual int8_t readBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t * data, uint16_t timeout = I2CDEV_DEFAULT_READ_TIMEOUT) override;
	 virtual int8_t readBitW(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint16_t * data, uint16_t timeout = I2CDEV_DEFAULT_READ_TIMEOUT) override;
	 virtual int8_t readBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t * data, uint16_t timeout = I2CDEV_DEFAULT_READ_TIMEOUT) override;
	 virtual int8_t readBitsW(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint16_t * data, uint16_t timeout = I2CDEV_DEFAULT_READ_TIMEOUT) override;
	 virtual int8_t readByte(uint8_t devAddr, uint8_t regAddr, uint8_t * data, uint16_t timeout = I2CDEV_DEFAULT_READ_TIMEOUT) override;
	 virtual int8_t readWord(uint8_t devAddr, uint8_t regAddr, uint16_t * data, uint16_t timeout = I2CDEV_DEFAULT_READ_TIMEOUT) override;
	 virtual int8_t readBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t * data, uint16_t timeout = I2CDEV_DEFAULT_READ_TIMEOUT) override;
	 virtual int8_t readWords(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint16_t * data, uint16_t timeout = I2CDEV_DEFAULT_READ_TIMEOUT) override;
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

