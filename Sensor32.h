// Sensor32.h

#ifndef _SENSOR32_h
#define _SENSOR32_h

 
	#include "arduino.h"
 

typedef struct {
	int8_t orientation;

} sensor_orientation_t;

typedef struct {
	union {
		int16_t data[3];
		struct {
			int16_t x;
			int16_t y;
			int16_t z;
		};

	};
} 	sensor_int_vect;
typedef struct {
	union {
		int32_t data[3];
		struct {
			int32_t x;
			int32_t y;
			int32_t z;
		};

	};
} 	sensor_int32_vect;
typedef struct {
	union {
		float data[3];
		struct {
			float x;
			float y;
			float z;
		};
		/* Orientation sensors */
		struct {
			float roll;    /**< Rotation around the longitudinal axis (the plane body, 'X axis'). Roll is positive and increasing when moving downward. -90°<=roll<=90° */
			float pitch;   /**< Rotation around the lateral axis (the wing span, 'Y axis'). Pitch is positive and increasing when moving upwards. -180°<=pitch<=180°) */
			float heading; /**< Angle between the longitudinal axis (the plane body) and magnetic north, measured clockwise when viewing from the top of the device. 0-359° */
		};

	};
}sensor_vect;
class Sensor32
{
protected:


public:
	uint32_t AccTimestamp;
	sensor_vect AccAxis;
	sensor_vect AccOffset;
	sensor_vect AccCalibrate;
	uint32_t AccmaxValue;
	uint32_t AccminValue;
	sensor_vect AccRads;
	sensor_vect AccDegrees;
	float AccScale;
	sensor_int_vect AccRaw;
	sensor_orientation_t AccOrientation;
	virtual void accUpdate() = 0;
	void accCalc();
	void init();
};

 

#endif

