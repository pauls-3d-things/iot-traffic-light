# IoT Traffic Light Assembly

## Overview

This document describes the assembly steps to build the traffic light and the sensor:
![overview](all.jpg)

## Sensor
### Overview
![sensor](sensor_overview.png)

### Steps

![sensor](sensor_1.png)
![sensor](sensor_2.png)
![sensor](sensor_3.png)
![sensor](sensor_4.png)
![sensor](sensor_5.png)
![sensor](sensor_6.png)
![sensor](sensor_7.png)
![sensor](sensor_8.png)

### Testing
Flash the `sensor-demo.ino` project to the D1 mini.

See Arduino Settings at the bottom of this document.

Open the serial monitor ( Tools -> Serial Monitor), and verify the output:

```
Temp: 21.56°C		Humidity: 33.30% RH		Pressure: 99364.14 Pa```


### Traffic Light

## Overview
![sensor](traffic_light_overview.png)
*Note:* The colors of the cables will be different! ⚠️

## Steps

![trafficlight](traffic_light_1.png)
![trafficlight](traffic_light_2.png)
![trafficlight](traffic_light_3.png)
![trafficlight](traffic_light_4.png)
![trafficlight](traffic_light_5.png)
![trafficlight](traffic_light_6.png)

Soldering the LED wires to the Board will be the last step.
Twist the wires before pushing them throught the lamp post, then solder to the board.

### Testing

Flash the `traffic-light-demo.ino` project to the D1 mini.

See Arduino Settings below.

## Arduino Settings

Configure the Arduino IDE to flash to the D1 mini target:

![Arduino Settings](arduino_settings.png)
