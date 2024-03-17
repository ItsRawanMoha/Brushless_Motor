# Brushless Motor Control

<img src="https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/Relay.jpg" alt="Alt text" width="400" height="400">

This project demonstrates how to control a brushless motor using a relay with an LED indicator and three different operational modes: forward, backward, and auto.

## Introduction

Brushless motors are widely used in various applications due to their efficiency, reliability, and high power-to-weight ratio. This project provides examples of controlling a brushless motor using a relay with an LED indicator and implementing different operating modes.

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/Picture1.png)

## How it Works

Brushless motors are electronically commutated motors where the direction of rotation is controlled by the sequence of energizing the motor phases. By changing the sequence of energizing the motor phases, the direction of rotation can be reversed.

## Getting Started

To get started with controlling a brushless motor and implementing different modes, you need first to know how the relay works, so we will do relay with lED the, for following components:

- Relay module
- LED
- 2 Microcontroller (e.g., Arduino)
- Power supply for the motor and microcontroller
- Jumper wires or connectors for wiring

## Steps

Follow these steps to control the brushless motor with different modes:

1. Connect the brushless motor to the relay module output terminals.
2. Connect the relay module input pins to the microcontroller's GPIO pins.
3. Connect the LED to the relay module to indicate the motor's operation mode.
4. Write code to control the relay module and LED.

## Connection

The specific wiring connections depend on the relay module, LED, and microcontroller used. Refer to the datasheets and documentation for each component for detailed wiring instructions.

### Relay with LED

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/rl.jpeg)

### Forward burshless motor

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/fb.png)

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/f.jpeg)

### Backward burshless motor

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/b.jpeg)

![image](https://github.com/ItsRawanMoha/Brushless_Motor/assets/156599594/d209cbf8-e5ec-451b-b0b5-b8f49695fbb4)


### Auto burshless motor

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/a.png)

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/auto.jpeg)

## Output

Once the brushless motor is successfully connected and the code is uploaded to the microcontroller, you can control the motor in different modes: forward, backward, and auto. The LED indicator provides visual feedback of the current motor mode.

## Code

### Relay with LED

```
int Relaypin= 3; // Define input pin for relay
int LEDPin= 7;

void setup() {
  // put your setup code here, to run once:
pinMode(Relaypin, OUTPUT); // Define the Relaypin as output pin
pinMode(LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Relaypin, HIGH); // Sends high signal 
digitalWrite(LEDPin, HIGH);
delay(1000); // Waits for 1 second
digitalWrite(Relaypin, LOW); // Makes the signal low
digitalWrite(LEDPin, HIGH);
delay(1000); // Waits for 1 second
}
```

### Auto burshless motor

```
// Motor A
int enA = 2;
int in1 = 7;
int in2 = 6;
// Motor B
int enB = 3;
int in3 = 5;
int in4 = 4;

void setup(){

  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void demoTwo(){

  // This function will run the motors across the range of possible speeds
  // Note that maximum speed is determined by the motor itself and the operating voltage
  // Turn on motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 

  // Accelerate from zero to maximum speed
for (int i = 0; i < 256; i++)

  {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  } 

  // Decelerate from maximum speed to zero
  for (int i = 255; i >= 0; --i)

  {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  } 
  // Now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);  
}

void loop()

{
  demoTwo();
}
```

## Pictures

### Relay with LED

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/rl.gif)

### Forward burshless motor

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/f.gif)

### Backward burshless motor

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/b.gif)

### Auto burshless motor

![screen-gif](https://github.com/ItsRawanMoha/Brushless_Motor/blob/main/a.gif)

## Conclusion

Controlling a brushless motor with different modes adds versatility to various applications, such as robotics, drones, and industrial automation. 
