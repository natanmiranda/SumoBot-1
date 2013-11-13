/*
 * Sonar.h
 *
 * Created: 11/12/2013 12:54:50 PM
 *  Author: kazumi
 */ 

#ifndef SONAR_H_
#define SONAR_H_

volatile unsigned int count;
volatile unsigned int risingEdge;
volatile float range;

void initSonar(void);

void resetTimer(void);

void updateCount(void);

void startSonarMeasurement(void);

void getSonar(void);

#endif /* SONAR_H_ */