#ifndef PWM_H
#define PWM_H


class PWM
{
    public:
       PWM(int freq, int duty_cycle);
       int freq;
       int duty_cycle;
       void set_freq(int freq);
       void set_duty(int duty);
       int get_freq();
       int get_duty();
};

#endif // PWM_H

