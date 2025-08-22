//Prueba simple de un servo que se mueve a un ángulo dependiendo de si está presionado un botón (pull down)

byte boton = 2; //pin del boton
bool estadoboton; //variable para guardar lectura del boton
#include <Servo.h> //libreria servo
Servo miServo;//crear servo

void setup() {
pinMode(boton,INPUT); //definir el pin del boton para entrada
miServo.attach(3); //definir el pin del servo
}

void loop() {
estadoboton = digitalRead(boton); //almacena lectura del boton
 
    if(estadoboton == HIGH) {   //si el boton esta presionado entonces...
    
      miServo.write(45);//mueve el servo a 45º
  
}
  
    else {
  
      miServo.write(135); //mueve el servo a 135º 

        }

}