*******************************************************
*  Name      :         
*  Student ID:                
*  Class     :  CSC 2421           
*  HW#       :                  
*  Due Date  :  
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program ("clock") uses objects to compute the cost of parking a
car in a public garage.  We assume the rate is $6.00 per hour. The program
prompts the user to input two times, corresponding to when a customer enters
and later exits the garage. The output is a receipt that includes the
arrival, the time of departure, and the length of time the car is parked,
along with the total charges. The charges are prorated to the minutes.
For example, if the time duration is 1 hour and 20 minutes, then the charge
should be $8 dollars. We don't record dates so the maximum duration would be
23 hours and 59 minutes.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  Prompts for in time and out time, computes parking cost,
   and displays receipt.  Contains business logic specified in the program
   requirements.

Name:  TimeStamp.h
   Contains the definition for the class TimeStamp.

Name: TimeStamp.cpp
   Defines and implements the TimeStamp class for storing the time
   of day.  This class provides routines to get/set the time of day,
   to get the number of minutes of seconds past midnight, and to format
   the time of day as a string.


*******************************************************
*  Debug/Run results of assignment
*******************************************************

   The program runs successfully.

   The program was developed and tested on Windows 2000 using Microsoft Visual
   Studio 6.  It was compiled, run, and tested on gcc ouray.cudenver.edu and
   engrlab.cudenver.edu