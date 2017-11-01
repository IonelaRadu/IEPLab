#include "pwm.h"
#include "bcm2835.h"

#define PWM_CHANNEL 0

PWM::PWM(int freq, int duty_cycle)
{
    this->freq=freq;
    this->duty_cycle=this->freq * duty_cycle/ 100;
    bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);
    bcm2835_pwm_set_mode(PWM_CHANNEL, 1, 1);
    bcm2835_pwm_set_range(PWM_CHANNEL, freq);
    bcm2835_pwm_set_data(PWM_CHANNEL, this->duty_cycle);
}
void PWM::set_freq(int freq)
{
    this->freq=freq;
    bcm2835_pwm_set_range(PWM_CHANNEL, freq);
}

void PWM::set_duty(int duty_cycle) /*0 <= duty_cycle <= 100*/
{
    this->duty_cycle=this->freq * duty_cycle/ 100;
    bcm2835_pwm_set_data(PWM_CHANNEL, this->duty_cycle);
}

int PWM::get_freq(void)
{
     return this->freq;
}

int PWM::get_duty(void)
{
    return this->duty_cycle * 100 / this->freq;
}
