# Arduino Stepper Motor Control

This project is an **Arduino/PlatformIO project** for controlling a stepper motor using buttons and displaying speed on an LCD screen. The motor speed can be incremented, decremented, and adjusted dynamically.

---

## Features

- Control a stepper motor using three buttons:
  - **Plus button** – increase motor speed
  - **Minus button** – decrease motor speed
  - **Change button** – adjust speed increment factor (1–10)
- Display current speed and increment factor on a 16x2 LCD.
- Smooth motor control using the `AccelStepper` library.

---

## Hardware

- **Microcontroller:** Arduino UNO (or compatible)
- **Stepper Motor** connected via four control pins
- **Buttons:** three push buttons connected to digital pins
- **LCD Display:** 16x2, connected via six analog pins (`A0`–`A5`)

**Pin assignments in the code:**

| Component      | Pin(s)       |
|----------------|-------------|
| Plus button    | 5           |
| Change button  | 6           |
| Minus button   | 7           |
| Motor pin 1    | 11          |
| Motor pin 2    | 10          |
| Motor pin 3    | 9           |
| Motor pin 4    | 8           |
| LCD Pins       | A0–A5       |

---

## Software Dependencies

This project uses the following libraries:

- [AccelStepper]
- [LiquidCrystal]
- [LC_baseTools]

> Custom libraries must be added to the `lib/` folder in your PlatformIO project.

---

## Setup Instructions

1. **Clone the repository**:
    ```bash
    git clone https://github.com/USERNAME/Arduino-stepper-motor-control.git
    cd Arduino-stepper-motor-control
    ```

2. **Install PlatformIO**:
    - Install VSCode and the PlatformIO IDE extension.
    - Open the project folder in VSCode.

3. **Add libraries**:
    [AccelStepper]
    [LiquidCrystal]
    [LC_baseTools]

5. **Build and upload**:
    - In VSCode → PlatformIO toolbar → Build → Upload

---

## Usage

- Press the **Plus button** to increase motor speed.
- Press the **Minus button** to decrease motor speed.
- Press the **Change button** to adjust the speed increment factor.
- Current speed and increment factor are displayed on the LCD.

---