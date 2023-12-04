# chesster - Cerebal Harnessing Education Sidekick for Strategic Engineering Research
Chess playing companion for teaching Matlab, Arduino, and Solidworks

## Project Overview 
Chesster was designed to be used as a training aid for ME202- Computational Methods, a course taught by the United States Military Academy Department of Civl and Mechanical Engineering. 
After completing ME202 and ME201 - Intro to Mechanical Engineering Desgin, mechanical engineering Cadets have the requisite skills in Solidworks, Matlab and Arduino to complete this project and see first hand some applications of these skills.

Chesster conssits of three primary programs 
1. A rudimentary computer vision program using an OV7670 connected to an Arduino Uno and Matlab. The Matlab functions takes images of the chess board and using matrix operations determines what moves have been made.
2. A basic chess engine using Matlab. The engine is basd on a two layer pruned decision tree algorithm which is very useful for teaching matrix operations in Matlab but does not make for a very skilled opponent.
3. A gantry based robot that is built using 8020 and 3D printed parts modeled in Soldiworks.

### Required Hardware 
1. OV7670 Camera module
2. 2xArduino Uno or Arduino Mega
3. 3x Push momentary buttons (Model number used: )
4. I2C capable LCD screen (Model number used: )
5. 24V Power supply
6. 2x NEMA 17 Stepper Motors (Model number used: )
7. 1x Linear Actuator (Model number used: )
8. Jumper wires + bread board or pcb

### Running Program
1. Open the Chesster assembly file and 3D print the blue colored parts. Use the asembly to construct the system.
2. Follow this tutorial from Mybotic - https://www.instructables.com/OV7670-Arduino-Camera-Sensor-Module-Framecapture-T/ - set up camera with one of your Arduinos. Make note of the file paths for the java proram 'SimpleRead' and the folder that the images are being saved to.
3. Connect LCD screen, motor drivers, motors and buttons according to the schemaic provided in the steup folder.
4. Clear all pieces off of the board and run calibrate.m. This script will save an image that will be used for the progra to learn the dimensions and location of the board. Anytime you move the board or camera it is recommended to repeat this calibration before playing.
5. Load play.ino onto the Arduino. The LCD should now display 'ARDUNIO STANDING BY'.
6. open play.m and update the config block with the appropraite parameters. LCD should now also display 'MATLAB STANDING BY'.
7. Click the button to start game then follow instructions on LCD. 

## Matlab
play.m 

### Computer Vision 

### Engine 

### Controller 

## Arduino

## Solidworks 


