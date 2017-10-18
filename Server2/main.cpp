#include "mainwindow.h"
#include <QApplication>
#include "bcm2835.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
    //w.show();
bcm2835_set_debug(1);
    if (!bcm2835_init())
         return 1;
       // Set the pin to be an output
       bcm2835_gpio_fsel(1, BCM2835_GPIO_FSEL_OUTP);
       // Blink
       while (1)
       {
           // Turn it on
           bcm2835_gpio_write(1,1);

           // wait a bit
           bcm2835_delay(500);

           // turn it off
           bcm2835_gpio_write(1,0);

           // wait a bit
           bcm2835_delay(500);
       }
       bcm2835_close();
     return 0;
   return a.exec();
}
