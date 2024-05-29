#include <iostream>
#include <dos.h>
#include <cmath>
#include <ctime>
#include <graphics.h> // sar pute sa da erroare aici

#define PI 3.14159265

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    while (!kbhit()) {
        cleardevice();

        time_t rawtime;
        struct tm * timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        int hour = timeinfo->tm_hour;
        int minute = timeinfo->tm_min;
        int second = timeinfo->tm_sec;

        float hour_angle = ((hour % 12) * 30 + minute * 0.5) * (PI / 180);
        float minute_angle = (minute * 6 + second * 0.1) * (PI / 180);
        float second_angle = second * 6 * (PI / 180);

        circle(250, 250, 200);
        line(250, 250, 250 + 150 * cos(hour_angle - PI / 2), 250 + 150 * sin(hour_angle - PI / 2));
        line(250, 250, 250 + 180 * cos(minute_angle - PI / 2), 250 + 180 * sin(minute_angle - PI / 2));
        line(250, 250, 250 + 190 * cos(second_angle - PI / 2), 250 + 190 * sin(second_angle - PI / 2));

        delay(1000);
    }

    closegraph();
    return 0;
}