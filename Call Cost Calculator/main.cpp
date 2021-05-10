//
//  main.cpp
//  Call Cost Calculator
//
//  Created by Manvir Singh on 01/05/21.
//  Copyright © 2021 Manvir Singh. All rights reserved.
//
/*
 Write a program that computes the cost of a long-distance call. The cost of the call is
 determined according to the following rate schedule:
 • Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is
 billed at a rate of $0.40 per minute.
 • Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday, is
 charged at a rate of $0.25 per minute.
 • Any call started on a Saturday or Sunday is charged at a rate of $0.15 per
 minute.
 The input will consist of the day of the week, the time the call started, and the length
 of the call in minutes.
 The output will be the cost of the call.
 
 Notes:
 1. The time is to be input as 4 digit number, representing the time in 24-hour
 notation, so the time 1:30 P.M. is input as 1330
 2. The day of the week will be read as one of the following three character string:
 ‘Mon’, ‘Tue’, ‘Wed’, ‘Thr’, ‘Fri’, ‘Sat’ or ‘Sun’
 3. The number of minutes will be input as a positive integer.
 
 For example, an execution could look like this:
 
 Enter the day the call started at: Fri
 Enter the time the call started at (hhmm): 2350
 Enter the duration of the call (in minutes): 22
 This call will cost $5.50
 */
#include <iostream>
#include <string>
using namespace std;

const double RATE_ON_WEEKENDS = 0.15;
const double RATE_ON_WORKING_DAYS_IN_DAY_TIME = 0.40;
const double RATE_ON_WORKING_DAYS_IN_NIGHT_TIME = 0.25;
int main() {
    string day;
    string day1 = "monday";
    string day2 = "tuesday";
    string day3 = "wednesday";
    string day4 = "thursday";
    string day5 = "sriday";
    string day6 = "saturday";
    string day7 = "sunday";
    int time;
    int length;
    double callCost;
    
    cout<<"Enter the day(in lowercase letters) the call started at: ";
    cin>>day;
    
    cout<<"Enter the time the call started at [without ':' this sign like this (hhmm)]: ";
    cin>>time;
    
    cout<<"Enter the duration of the call (in minutes): ";
    cin>>length;
    
    if ((day == day1 || day == day2 || day == day3 || day == day4 || day == day5) && (time < 800 || time > 1800)) {
        callCost = length * RATE_ON_WORKING_DAYS_IN_NIGHT_TIME;
        cout<<"This call will cost $"<<callCost<<endl;
    }
    else if ((day == day1 || day == day2 || day == day3 || day == day4 || day == day5) && (time >= 800 || time <= 1800)){
        callCost = length * RATE_ON_WORKING_DAYS_IN_DAY_TIME;
        cout<<"This call will cost $"<<callCost<<endl;
    }
    else
        callCost = length * RATE_ON_WEEKENDS;
    cout<<"This call will cost $"<<callCost<<endl;
    
    return 0;
}

