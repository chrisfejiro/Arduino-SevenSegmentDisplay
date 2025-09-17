Seven-Segment Display with Arduino

This project demonstrates how to control a single-digit 7-segment display (common anode) using an Arduino. The program sequentially displays numbers 0–9, with each number held for 1 second before moving to the next.

🛠 Features

Displays digits 0 to 9 on a 7-segment display.

Uses a for loop to increment through digits.

Implements a LightLed() function with a switch-case for digit-to-segment mapping.

Configured for common anode displays.

📋 Requirements
Hardware

Arduino board (Uno, Nano, or similar)

1x Common Anode 7-segment display

Current-limiting resistors (220–330Ω for each segment recommended)

Jumper wires

Breadboard

Software

Arduino IDE

⚡ Pin Connections

Each segment of the display is connected to a digital pin on the Arduino:

Segment	Arduino Pin
a	7
b	8
c	9
d	10
e	11
f	12
g	13

⚠️ Note: For a common anode display, connect the common pin to +5V and each segment through a resistor to the Arduino pins.

📂 Code Overview

LightLed(int n):
Turns ON/OFF the correct segments for the given digit (0–9) using digitalWrite.

setup():
Configures pins 7–13 as OUTPUT.

loop():
Iterates through numbers 0–9 with a 1-second delay between each.

▶️ Usage

Connect your 7-segment display to the Arduino following the pin table above.

Open the provided code in Arduino IDE.

Upload the code to your Arduino.

The display will automatically start cycling from 0 → 9 repeatedly.

🔮 Possible Improvements

Add a button to increment digits manually.

Use a potentiometer to adjust display speed.

Expand to a multi-digit display with multiplexing.
