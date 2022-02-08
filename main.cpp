#include "mbed.h"

DigitalOut myled(LED1);
PwmOut MotorL(PA_8);
PwmOut MotorR(PA_9);

int i;

int main(){
    while(1){
        myled = 1;
        wait(0.1);
        
        
        for(i=0;i<=20;i++){
            MotorL = i*0.05;
            wait(0.1);
        }
        
        for(i=0;i<=20;i++){
            MotorR = i*0.05;
            wait(0.1);
        }
        
        myled = 0;
        wait(0.1);
        
        
        for(i=20;i>=0;i--){
            MotorL = i*0.05;
            wait(0.1);
        }
        
        for(i=20;i>=0;i--){
            MotorR = i*0.05;
            wait(0.1);
        }
        
        
    }
}
