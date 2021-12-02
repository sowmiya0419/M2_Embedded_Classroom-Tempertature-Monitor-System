## Classroom Temperature Monitoring System


## Introduction
The Classroom Temperature Monitoring system is basically used to monitor the temperature of the classroom according to the number of students presented in the class. When the students gets seated, the button sensor gets activated. After that, the classroom analyser gets access to turn on the heater.The temperature sensor buttons keeps monitoring the temperature of the classroom on the basis of students available in class and sends the analog value to the ATmega328 microcontroller. The microcontroller processes the analog input of the temperature sensor button and outputs a temperature value through serial communication. All the activities of the regulating system is performed with a microcontroller called Atmega328 and monitored by LCD serial communication o/p..

## Required Components
- ATmega328 Microcontroller
- LCD
- Push button sensor
- Serial monitor
- 5V Power Supply


## Circuit Description
The functionality of the classroom temperature monitoring system is coded in embedded c through visual studio and the working of this regulating system is performed using simulation software called SimulIDE. Where the system also includes push buttons according to number of seats availabe for maintaining the counts of students presented in the classroom and according to it manages increasing or decreasing of the temperature in the classroom and sends analog data to ATmega324 controller.

## LCD 
There are various ways to interface the LCD display to microcontroller based on the coding technique and the platform used. The LCD has 16 pins. Pin no 1 and 2 are GND and Vcc respectively, and are used to power up the LCD. The Pin no 3 VEE, which can be used to adjust the contrast of LCD by varying the potentiometer. We shall connect it to ground in our setup. Pin no 4, 5 and 6 are the control pins of LCD and they decide the working of LCD. We shall connect these pins to PORT D of microcontroller. Pin 4 is RS (Register Select) and is connected to PIN 17 (PD3/INT1), Pin 5 is RW (Read / Write) and is connected to PIN 18 (PD4) and Pin 6 is E (Enable) which is connected to PIN 19 (PD5) of the microcontroller. Pin 7 to 14 are D0-D7 which are the data lines. They are connected to PORT A of the microcontroller (PIN 40-13). The pin 15 and 16 are for LCD back light and those pins will be connected to Vcc And Gnd.

## ATmega328 controller
ATMEGA328P| – Simplified Features|
|---------|----------------------|
|CPU|8-bit AVR
|Number of Pins|28
|Operating Voltage (V)|+1.8 V TO +5.5V
|Number of programmable  I/O lines|23
|Communication Interface|Master/Slave SPI Serial Interface(17,18,19 PINS) [Can be used for programming this controller]
|Programmable Serial USART(2,3 PINS) [Can be used for programming this controller]|Two-wire Serial Interface(27,28  PINS)[Can be used to connect peripheral devices like Servos, sensors and memory devices]
|ADC Module|6channels, 10-bit resolution ADC
|Timer Module|Two 8-bit counters with Separate Prescaler and compare mode, One 16-bit counter with Separate Prescaler,compare mode and capture mode.|
|Analog Comparators|1(12,13 PINS)
|PWM channels|6
|External Oscillator|0-4MHz @ 1.8V to 5.5V,   0-10MHz @ 2.7V to 5.5V ,  0-20MHz @ 4.5V to 5.5V|
|Internal Oscillator|8MHz  Calibrated Internal Oscillator
|Program Memory Type|Flash
|Program Memory or Flash memory|32Kbytes[10000 write/erase cycles]
|CPU Speed|1MIPS for 1MHz
|RAM|2Kbytes Internal SRAM
|EEPROM|1Kbytes EEPROM
|Operating Temperature|-40°C to +105°C(+105 being absolute maximum, -40 being absolute minimum)

## Serial monitor
The Serial Monitor is an essential tool when creating projects with SimulIDE. It can be used as a debugging tool, testing out concepts or to communicate directly with the ATmega328 controller.. 

 ## Working 
 
- The System will sense whether the seats in the classroom are occupied or not.
- The user who is regulating the system of the classroom has the access to modify the temperature in the classroom on the basis of students available.
- As per the count of students in the classroom, Heater will generate the heat accordingly.
- It is best for cold Countries for heat control and for normal countries it can be used as both increasing or decreasing the heatness or coldness.
- Low cost instalization and can be redesigned according to the needs.
- Simulation and prototypical Approach can be processed.



