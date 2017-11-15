#include "mainwindow.h"
#include <QApplication>
#include <bcm2835.h>
#include <stdio.h>
#include<pin.h>
#include<pwm.h>
#include<serial.h>
#include<spi.h>
#include<stdint.h>

int main(int argc, char **argv)
{
     bcm2835_set_debug(1);

     spi *S=new spi(BCM2835_SPI_BIT_ORDER_MSBFIRST,BCM2835_SPI_MODE0,BCM2835_SPI_CLOCK_DIVIDER_65536,BCM2835_SPI_CS0,LOW);
     uint8_t send_data = 0x23;



     printf("Sent to SPI: 0x%02X. Read back from SPI: 0x%02X.\n", send_data, S->transfer_data(send_data));

    return 0;
}
