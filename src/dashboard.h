#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <TFT_eSPI.h>

class Dashboard {
    public:
        void init();
        void render();

        void setRPM(int rpm);
        void setSpeed(float speed);

    private:
    TFT_eSPI tft = TFT_eSPI();

    int currentRPM = 0;
    float currentSpeed = 0;

    void drawRPMBar();
    void drawRPMText();
    void drawSpeedText();

};

#endif