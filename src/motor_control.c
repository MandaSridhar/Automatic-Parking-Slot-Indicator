#include "config.h"

void controlGate() {
    if (slot1_status == 0 || slot2_status == 0 || slot3_status == 0) {
        digitalWrite(GATE_PIN, HIGH); // Open gate
    } else {
        digitalWrite(GATE_PIN, LOW);  // Close gate
    }
}
