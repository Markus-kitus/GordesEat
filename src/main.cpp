#include <Arduino.h>
// #include <Stepper.h>
#include "functions.h"

// Define el número de pasos por revolución del motor
const int stepsPerRevolution = 200;  // Ajusta este valor según tu motor

unsigned long previousMillis = 0;  // Almacena el último tiempo en que se ejecutó
//const long interval = 24 * 60 * 60 * 1000; // 24 h
const long interval = 10*1000;
void setup(){

    Serial.begin(9600);  // Inicializa la comunicación serial

};

void executarMenjadora(){

  menjarDiariMi(stepsPerRevolution);

  delay(5000);

  menjarDiariMel(stepsPerRevolution); 

  //AIXÒ ES UNA PROVA DE COMMIT

};


void loop(){

  unsigned long currentMillis = millis();  // Obtiene el tiempo actual

    // Comprueba si han pasado 24 horas
    if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;  // Resetea el tiempo de referencia
        executarMenjadora();  // Llama a la función para ejecutar la menjadora
    }
};
