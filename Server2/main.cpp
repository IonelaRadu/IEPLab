#include "mainwindow.h"
#include <QApplication>
#include <bcm2835.h>
#include <stdio.h>
#include<pin.h>
#include<pwm.h>

#define PIN RPI_GPIO_P1_12 //led
#define BUTTON RPI_GPIO_P1_15 // button

#define RANGE 1024

int main(int argc, char **argv)
{
     bcm2835_set_debug(1);

     Pin *pin= new Pin(PIN ,1,0);
      PWM  *pwm = new PWM(1024,1);

 while(1)
 {
    if(pin->get()==1)
    {
        pwm->set_duty(pwm->get_duty()+5);
    }

    if(pwm->get_duty()==100)
    {
        pwm->set_duty(0);
    }
}

    return 0;
}
