# Ultrasonic_TRIPWIRE

October 2019

Inspired by: https://create.arduino.cc/projecthub/wbowl4/ultrasonic-tripwire-fe5475

Youtube Demonstration: https://youtu.be/Rqj4HV-veuM

Pictures Link: https://drive.google.com/drive/folders/1yuL1IIFapU8OkP03xm6xx-YCemEe5ayI?usp=sharing

My tripwire project consists of two key components. The first component is the ultrasonic distance sensor (HC-SR04) which constantly calculates the distance between itself and the nearest object such as a wall or door. The second component is the buzzer attached to the breadboard which is the main indicator that the user has to any movement within a certain range of the ultrasonic distance sensor. In this case when the distance between the ultrasonic distance sensor and the nearest object (door) was less than 10cm the buzzer sounded. The entire system would indicate, through the buzzer, anytime the door was open or closed. The entire system is powered by a battery which is directly connected to a switch and the rest of the system. The switch is a physical on-off switch rather than a digital one. This ensures that the battery is not depleting while the system is off.

Lessons:

My first time working with sensors in a real-life application. This could be useful for security purposes but much more effective with a louder continuous alarm.

