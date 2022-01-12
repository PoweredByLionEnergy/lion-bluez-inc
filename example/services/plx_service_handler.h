//
// Created by martijn on 12-01-22.
//

#ifndef TEST_PLX_SERVICE_HANDLER_H
#define TEST_PLX_SERVICE_HANDLER_H

#include "../service_handler_manager.h"

#define PLX_SERVICE_UUID "00001822-0000-1000-8000-00805f9b34fb"
#define SPOT_MEASUREMENT_CHAR_UUID "00002a5e-0000-1000-8000-00805f9b34fb"
#define CONTINUOUS_MEASUREMENT_CHAR_UUID "00002a5f-0000-1000-8000-00805f9b34fb"

ServiceHandler *plx_service_handler_create();

#endif //TEST_PLX_SERVICE_HANDLER_H
