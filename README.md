# Automatic Parking Slot Indicator 🚗💡

## Overview
The **Automatic Parking Slot Indicator** is an embedded system designed to streamline vehicle parking by automatically detecting vacant slots using **IR sensors** and displaying slot availability on an **LCD screen** at the parking entrance. This system helps reduce congestion and enhances parking efficiency.

## Features
- **IR Sensors** detect occupied and vacant slots.
- **LCD Display** shows real-time slot availability.
- **Microcontroller-based system** for accurate monitoring.
- **Automated gate** that opens only when slots are available.
- **User-friendly interface** for easy operation.

## Technologies Used
- **Microcontroller** (AT89S52)
- **IR Sensors**
- **LCD Display (16x2)**
- **DC Motor and Motor Driver (L293D)**
- **Embedded C for programming**
- **Keil uVision IDE for software development**

## How It Works 🏗️
1. Each parking slot is equipped with **IR sensors**.
2. When a vehicle enters a slot, the sensor detects its presence and updates the system.
3. The **LCD display** at the entrance shows available slots.
4. If slots are **available**, the gate opens automatically.
5. If all slots are **occupied**, the gate remains closed.

## Installation & Setup 🔧
### **1. Hardware Setup**
- Place **IR sensors** at parking slots.
- Connect sensors to the **microcontroller** (AT89S52).
- Interface **LCD display** to show slot status.
- Use a **motor driver (L293D)** to control the entrance gate.

### **2. Software Setup**
1. Install **Keil uVision** IDE.
2. Compile the source code using Keil.
3. Flash the code to the microcontroller.

## Folder Structure 📂
