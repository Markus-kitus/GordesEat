#include <Arduino.h>
// #include <Stepper.h>
#include <functions.h>

void menjarDiariMi(int stepsPerRevolution){

    Stepper miSteps(stepsPerRevolution, 9, 8, 7, 6);
    miSteps.setSpeed(120);

    Serial.println("Motor Mi funciona");

    for(int i = 0; i < 2; i++){

      miSteps.step(stepsPerRevolution);

    }
    
};

void menjarDiariMel(int stepsPerRevolution){

    Stepper melSteps(stepsPerRevolution, 10, 11, 12, 13);
    melSteps.setSpeed(120);

    Serial.println("Motor Mel Funciona");

    for(int i = 0; i < 1; i ++){

      melSteps.step(stepsPerRevolution);

    }
};
