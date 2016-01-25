
#include "Sensor32.h"
#include "Acc32.h"
#include "Gyro32.h"
#include "SPIdev32.h"
#include <Wire.h>
#include "SPI2Cdev.h"
#include "I2Cdev32.h"
#include "MPU6050_32.h"
I2Cdev32 i2c;
SPI2Cdev * i = &i2c;
MPU6050_32 accelgyro;
 
//MPU6050 accelgyro(0x69); // <-- use for AD0 high

int16_t ax, ay, az;
int16_t gx, gy, gz;
void setup()
{
	Wire.begin();
	
	//mpu.initialize();
	SerialUSB.begin(115200);
	while (!SerialUSB);
	// initialize device
	
	SerialUSB.println("Initializing I2C devices...");
	accelgyro.initialize(i);

	// verify connection
 
	SerialUSB.println("Testing device connections...");
 
	SerialUSB.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");


  /* add setup code here */

}

void loop()
{
	// read raw accel/gyro measurements from device
	accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

	// these methods (and a few others) are also available
	//accelgyro.getAcceleration(&ax, &ay, &az);
	//accelgyro.getRotation(&gx, &gy, &gz);

 
	// display tab-separated accel/gyro x/y/z values
	SerialUSB.print("a/g:\t");
	SerialUSB.print(ax); SerialUSB.print("\t");
	SerialUSB.print(ay); SerialUSB.print("\t");
	SerialUSB.print(az); SerialUSB.print("\t");
	SerialUSB.print(gx); SerialUSB.print("\t");
	SerialUSB.print(gy); SerialUSB.print("\t");
	SerialUSB.println(gz);
 

#ifdef OUTPUT_BINARY_ACCELGYRO
	SerialUSB.write((uint8_t)(ax >> 8)); SerialUSB.write((uint8_t)(ax & 0xFF));
	SerialUSB.write((uint8_t)(ay >> 8)); SerialUSB.write((uint8_t)(ay & 0xFF));
	SerialUSB.write((uint8_t)(az >> 8)); SerialUSB.write((uint8_t)(az & 0xFF));
	SerialUSB.write((uint8_t)(gx >> 8)); SerialUSB.write((uint8_t)(gx & 0xFF));
	SerialUSB.write((uint8_t)(gy >> 8)); SerialUSB.write((uint8_t)(gy & 0xFF));
	SerialUSB.write((uint8_t)(gz >> 8)); SerialUSB.write((uint8_t)(gz & 0xFF));
#endif

  /* add main program code here */

}
