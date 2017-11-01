#include "pin.h"
#include "bcm2835.h"

Pin::Pin(int nr_p,int dir,int pull_up)
{
    this->nr_p = nr_p;
    this->dir=dir;
    this->pull_up=pull_up;
    this->value = 0;
}

char Pin::get(void)
{
    char stare;
    if(this->dir==1){
     stare = bcm2835_gpio_lev(this->nr_p);
    }
    else if(this->dir==0){
     stare = bcm2835_gpio_lev(this->nr_p);
    }
    return stare;
}
void Pin::set(char value)
{
    // output=0
    //input =1
    if(this->dir==0)
    {
        bcm2835_gpio_write(this->nr_p,value);
        this->value = value;
    }
}
void Pin::change_dir(void){

  if(bcm2835_gpio_lev(this->nr_p))
       bcm2835_gpio_fsel(this->nr_p, BCM2835_GPIO_FSEL_OUTP);
  else
      bcm2835_gpio_fsel(this->nr_p, BCM2835_GPIO_FSEL_INPT);
}
