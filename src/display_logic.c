#include "config.h"

void displayStatus() {
    lcd_clear();
    lcd_print("Parking Status:");
    
    lcd_setCursor(1, 0);
    lcd_print("Slot1: ");
    lcd_print(slot1_status ? "Occupied" : "Available");

    lcd_setCursor(2, 0);
    lcd_print("Slot2: ");
    lcd_print(slot2_status ? "Occupied" : "Available");

    lcd_setCursor(3, 0);
    lcd_print("Slot3: ");
    lcd_print(slot3_status ? "Occupied" : "Available");
}
