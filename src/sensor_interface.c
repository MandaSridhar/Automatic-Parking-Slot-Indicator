#include "config.h"

int checkSlotStatus(int slot) {
    return digitalRead(slot); // Returns 1 if occupied, 0 if empty
}

void updateParkingStatus() {
    slot1_status = checkSlotStatus(SLOT1_PIN);
    slot2_status = checkSlotStatus(SLOT2_PIN);
    slot3_status = checkSlotStatus(SLOT3_PIN);
}
