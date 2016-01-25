// SPI2Cdev.h

#ifndef _SPI2CDEV_h
#define _SPI2CDEV_h
 
	#include "arduino.h"
 

#define SPI2C_I2C_CLOCK_100 100000
#define SPI2C_I2C_CLOCK_400 400000
#define SPI2C_NOT_USED  0
enum SPI2C_type_e
{
	SPI2C_NOT_SET,
	SPI2C_I2C,
	SPI2C_SPI,
	SPI2C_SPI_TRANSACTIONAL,
#if defined(ARDUINO_SAM_DUE)
	SPI2C_I2C1,
#endif
	SPI2C_COUNT


};

typedef struct {

	SPI2C_type_e spi2ctype;
	union {
		uint8_t	i2c_address;
		uint8_t spi_cs;
	};
	union {
		uint32_t i2c_clock;
		uint32_t spi_clock;
	};
	uint8_t spi_dataMode;
	uint8_t spi_bitOrder;
}SPI2C_config;
class SPI2Cdev 
{
 protected:


 public:
	 virtual int8_t readBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t *data, uint16_t timeout = 1000)= 0;
	 virtual int8_t readBitW(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint16_t *data, uint16_t timeout = 1000)= 0;
	 virtual int8_t readBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t *data, uint16_t timeout = 1000)= 0;
	 virtual int8_t readBitsW(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint16_t *data, uint16_t timeout = 1000)= 0;
	 virtual int8_t readByte(uint8_t devAddr, uint8_t regAddr, uint8_t *data, uint16_t timeout = 1000)= 0;
	 virtual int8_t readWord(uint8_t devAddr, uint8_t regAddr, uint16_t *data, uint16_t timeout = 1000)= 0;
	 virtual int8_t readBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data, uint16_t timeout = 1000)= 0;
	 virtual int8_t readWords(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint16_t *data, uint16_t timeout = 1000)= 0;

	 virtual bool writeBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t data)= 0;
	 virtual bool writeBitW(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint16_t data)= 0;
	 virtual bool writeBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t data)= 0;
	 virtual bool writeBitsW(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint16_t data)= 0;
	 virtual bool writeByte(uint8_t devAddr, uint8_t regAddr, uint8_t data)= 0;
	 virtual bool writeWord(uint8_t devAddr, uint8_t regAddr, uint16_t data)= 0;
	 virtual bool writeBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data)= 0;
	 virtual bool writeWords(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint16_t *data)= 0;
};

 

#endif

