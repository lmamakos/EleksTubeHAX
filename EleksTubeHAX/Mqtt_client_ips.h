#ifndef mqtt_client_H_
#define mqtt_client_H_

#include "GLOBAL_DEFINES.h"

extern bool MqttConnected;

// commands from server
extern bool MqttCommandPower;
extern int  MqttCommandState;
extern bool MqttCommandPowerReceived;
extern bool MqttCommandStateReceived;

// status to server
extern bool MqttStatusPower;
extern int MqttStatusState;
extern int MqttStatusBattery;
extern float MqttStatusTemperature;
extern char MqttStatusTemperatureTxt[10];
extern bool TemperatureUpdated;

// functions

void MqttStart();
void MqttLoopFrequently();
void MqttLoopInFreeTime();


#endif /* mqtt_client_H_ */
