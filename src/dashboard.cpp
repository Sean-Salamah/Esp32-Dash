#include "dashboard.h"

void Dashboard::init() {
    tft.init();
    tft.setRotation(1);
    tft.fillScreen(TFT_BLACK);

}

void Dashboard::setRPM(int rpm) 
{
    currentRPM = rpm;
}

void Dashboard::setSpeed(float speed) 
{
    currentSpeed = speed;
}

void Dashboard::render() 
{
    tft.fillScreen(TFT_BLACK);

    drawRPMBar();
    drawRPMText();
    drawSpeedText();
}

void Dashboard::drawRPMText()
{
    tft.setTextColor(TFT_GREEN);
    tft.setTextsize(3);
    tft.setCursor(20,80);
    tft.printf("%f km/h", currentSpeed)
}

void Dashboard::drawRPMBar() 
{
    int maxRPM = 13000;
    int barWidth = 200;
    int barHeight = 20;

    int filledWidth = map(currentRPM,0,maxRPM,0,barWidth);

    int x = 20;
    int y = 150;

    tft.drawRect(x, y, barWidth, barHeight, TFT_WHITE);

    uint16_t = TFT_GREEN;

    if (currentRPM > 4000) color = TFT_RED;
    else if (currentRPM > 6000) color = TFT_ORANGE;

    tft.fillRect(x + 1, y + 1, filledWidth - 2, barHeight - 2, color);
}
