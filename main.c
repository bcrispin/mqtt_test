#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "MQTTClient.h"


#define ADDRESS     "tcp://localhost:1883"
#define CLIENT_ID   "AABBCCDDEEFF"
#define TOPIC       "Test"
#define QOS         1
#define TIMEOUT     10000L

volatile MQTTClient_deliveryToken deliveryToken

int main() {
    return 0;
}