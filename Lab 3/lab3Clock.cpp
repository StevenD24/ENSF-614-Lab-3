/*
 *  File Name: lab3Clock.cpp
 *  Assignment: ENSF 614 Lab 3 Exercise C
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Feb 3, 2023
 */

#include "lab3Clock.h"

Clock::Clock() {
    hour = 0;
    minute = 0;
    second = 0;
}

Clock::Clock(int seconds) {
    if (seconds < 0) {
        hour = minute = second = 0;
    } else {
        sec_to_hms(seconds);
    }

}

Clock::Clock(int hour, int minute, int second) {
    if (second > 59 || second < 0 || minute > 59 || minute < 0 || hour > 23 || hour < 0) {
        this->hour = this->minute = this->second = 0;
    } else {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
}

int Clock::get_hour() const {
    return hour;
}

int Clock::get_minute() const {
    return minute;
}

int Clock::get_second() const {
    return second;
}

void Clock::set_hour(int hours) {
    if (hours >= 0 && hours <= 23) {
        this->hour = hours;
    }
}

void Clock::set_minute(int minutes) {
    if (minutes >= 0 && minutes <= 59) {
        this->minute = minutes;
    }
}

void Clock::set_second(int seconds) {
    if (seconds >= 0 && seconds <= 59) {
        this->second = seconds;
    }
}

void Clock::sec_to_hms(int seconds) {
    int h = (seconds / 3600) % 24;
    int m = (h % 60) - h;
    int s = seconds % 60;

    set_hour(h);
    set_minute(m);
    set_second(s);
}

int Clock::hms_to_sec() const {
    return (get_hour() * 3600 + get_minute() * 60 + get_second());
}

void Clock::increment() {
    sec_to_hms(hms_to_sec() + 1);
}

void Clock::decrement() {
    if (second > 0) {
        second--;
    } else {
        set_second(59);
        if (minute > 0) {
            minute--;
        } else {
            set_minute(59);
            if (hour > 0) {
                hour--;
            } else {
                set_hour(23);
            }
        }
    }
}

void Clock::add_seconds(int seconds) {
    sec_to_hms(hms_to_sec() + seconds);
}