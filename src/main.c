#include "config.h"
#include "sensor_interface.h"
#include "display_logic.h"
#include "motor_control.h"

void main() {
    setupHardware(); // Initialize system

    while (1) {
        updateParkingStatus(); // Check slot availability
        displayStatus();       // Show status on LCD
        controlGate();         // Manage entrance gate
    }
}
