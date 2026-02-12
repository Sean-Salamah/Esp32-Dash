#ifndef SENSORS_H
#define SENSORS_H

class Sensors
{
    public:
        void init();
        void update();
        int getRPM();
        float getSpeed();

    private:
        int rpm = 0;
        float speed = 0;

};

#endif