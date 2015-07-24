#ifndef CONTROL_H_
#define CONTROL_H_


#include <inttypes.h>

#include "main.h"


// =============================================================================
// Accessors:

float AngularCommand(enum BodyAxes axis);

// -----------------------------------------------------------------------------
float KalmanP(void);

// -----------------------------------------------------------------------------
float KalmanPDot(void);

// -----------------------------------------------------------------------------
float KalmanQ(void);

// -----------------------------------------------------------------------------
float KalmanQDot(void);

// -----------------------------------------------------------------------------
uint16_t MotorSetpoint(uint8_t n);


// =============================================================================
// Public functions:

void ControlInit(void);

// -----------------------------------------------------------------------------
void Control(void);

// -----------------------------------------------------------------------------
void SetActuationInverse(float actuation_inverse[MAX_MOTORS][4]);


#endif  // CONTROL_H_
