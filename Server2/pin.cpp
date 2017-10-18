#include "pin.h"


Pin::Pin(int var,int dir)
{
    this->p = var;
    this->dir=dir;
}
void Pin::get(int nr_p){



}
void Pin::set(int nr_p,char pull_up){
    if(nr_p output)
    {
     bcm2835_gpio_write(nr_p, pull_up);
    }
}
void Pin::change_dir(int nr_p){

  if(bcm2835_gpio_lev(nr_p))

       bcm2835_gpio_fsel(nr_p, BCM2835_GPIO_FSEL_OUTP);
  else
      bcm2835_gpio_fsel(nr_p, BCM2835_GPIO_FSEL_INP);
}
