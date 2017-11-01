#ifndef PIN_H
#define PIN_H


class Pin
{
    public:
            Pin(int nr_p,int dir,int pull_up);

           char get();
           void set(char value);
           void change_dir();
           int nr_p;
           int dir;
           char pull_up;
           char value;


};
#endif // PIN_H
