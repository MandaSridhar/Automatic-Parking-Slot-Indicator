#ifndef CONFIG_H
#define CONFIG_H

#define SLOT1_PIN  2
#define SLOT2_PIN  3
#define SLOT3_PIN  4
#define GATE_PIN   5

int slot1_status = 0;
int slot2_status = 0;
int slot3_status = 0;

void setupHardware();

#endif
