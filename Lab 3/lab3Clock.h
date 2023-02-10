/*
 *  File Name: lab3Clock.h
 *  Assignment: ENSF 614 Lab 3 Exercise C
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Feb 3, 2023
 */

#ifndef LAB_3_LAB3CLOCK_H
#define LAB_3_LAB3CLOCK_H

class Clock {

private:
    int hour, minute, second;

    void sec_to_hms(int seconds);
    // Converts total seconds into hours, minutes and seconds

    // REQUIRES:
    //      hour >= 0 and hour <= 23
    //      minute >= 0 and minute <= 59
    //      seconds >= 0 and seconds <= 59
    //
    // PROMISES:
    //      Initialize all member variables of the class to be within the range required above

    int hms_to_sec() const;
    // Converts hours, minutes and seconds into a total number of seconds

    // REQUIRES:
    //      NONE
    //
    // PROMISES:
    //      Return the total time as seconds

public:
    Clock();
    // Default constructor which initializes all objects to 0

    // REQUIRES:
    //      NONE
    //
    // PROMISES:
    //      Initialize all member variables of the class to 0

    Clock(int seconds);
    // Class constructor which constructs a clock object with
    // the time value in seconds

    // REQUIRES:
    //      seconds >= 0
    //
    // PROMISES:
    //      An object of type Clock with a time value in seconds

    Clock(int hour, int minute, int seconds);
    // Class constructor which creates a Clock object containing
    // the hours, minutes and seconds

    // REQUIRES:
    //      hour >= 0 and hour <= 23
    //      minute >= 0 and minute <= 59
    //      seconds >= 0 and seconds <= 59
    //
    // PROMISES:
    //      An object of type Clock with a time in hours, minutes and seconds

    int get_hour() const;
    // Getter method for the hour member variable

    // REQUIRES:
    //      NONE
    //
    // PROMISES:
    //      Return the hour of the Clock object

    int get_minute() const;
    // Getter method for the minute member variable

    // REQUIRES:
    //      NONE
    //
    // PROMISES:
    //      Return the minute of the Clock object

    int get_second() const;
    // Getter method for the second member variable

    // REQUIRES:
    //      NONE
    //
    // PROMISES:
    //      Return the second of the Clock object

    void set_hour(int hour);
    // Setter method for the hour member variable

    // REQUIRES:
    //      hour >= 0 and hour <= 23
    //
    // PROMISES:
    //      Set the hour to the value that is passed in the parameter

    void set_minute(int minute);
    // Setter method for the minute member variable

    // REQUIRES:
    //      minute >= 0 and minute <= 59
    //
    // PROMISES:
    //      Set the minute to the value that is passed in the parameter

    void set_second(int second);
    // Setter method for the second member variable

    // REQUIRES:
    //      second >= 0 and second <= 59
    //
    // PROMISES:
    //      Set the second to the value that is passed in the parameter

    void increment();
    // Increment the time in the Clock object by one second

    // REQUIRES:
    //      NONE
    //
    // PROMISES:
    //      Increases the time represented in Clock object by one second

    void decrement();
    // Decrement the time in the Clock object by one second

    // REQUIRES:
    //      NONE
    //
    // PROMISES:
    //      Decreases the time represented in Clock object by one second

    void add_seconds(int seconds);
    // Add seconds to the time represented in a Clock object

    // REQUIRES:
    //      NONE
    //
    // PROMISES:
    //      Total time is increased by the number of seconds passed in the parameter

};

#endif //LAB_3_LAB3CLOCK_H




