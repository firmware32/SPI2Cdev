// 
// 
// 
#include "Arduino.h"
#include <SPI.h>
#include "SPI2Cdev.h"
#include "SPIdev32.h"

SPIdev32::SPIdev32()
{
}

SPIdev32::SPIdev32(SPIClass * w)
{
}

int8_t SPIdev32::readBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t * data, uint16_t timeout )
{
	return int8_t();
}

int8_t SPIdev32::readBitW(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint16_t * data, uint16_t timeout )
{
	return int8_t();
}

int8_t SPIdev32::readBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t * data, uint16_t timeout )
{
	return int8_t();
}

int8_t SPIdev32::readBitsW(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint16_t * data, uint16_t timeout )
{
	return int8_t();
}

int8_t SPIdev32::readByte(uint8_t devAddr, uint8_t regAddr, uint8_t * data, uint16_t timeout  )
{
	return int8_t();
}

int8_t SPIdev32::readWord(uint8_t devAddr, uint8_t regAddr, uint16_t * data, uint16_t timeout  )
{
	return int8_t();
}

int8_t SPIdev32::readBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t * data, uint16_t timeout  )
{
	return int8_t();
}

int8_t SPIdev32::readWords(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint16_t * data, uint16_t timeout )
{
	return int8_t();
}

bool SPIdev32::writeBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t data)
{
	return false;
}

bool SPIdev32::writeBitW(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint16_t data)
{
	return false;
}

bool SPIdev32::writeBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t data)
{
	return false;
}

bool SPIdev32::writeBitsW(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint16_t data)
{
	return false;
}

bool SPIdev32::writeByte(uint8_t devAddr, uint8_t regAddr, uint8_t data)
{
	return false;
}

bool SPIdev32::writeWord(uint8_t devAddr, uint8_t regAddr, uint16_t data)
{
	return false;
}

bool SPIdev32::writeBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t * data)
{
	return false;
}

bool SPIdev32::writeWords(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint16_t * data)
{
	return false;
}
