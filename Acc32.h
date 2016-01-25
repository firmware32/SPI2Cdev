// Acc32.h

#ifndef _ACC32_h
#define _ACC32_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Acc32 
{
 protected:


 public:
	 virtual void AccUpdate() = 0;
};

 

#endif

