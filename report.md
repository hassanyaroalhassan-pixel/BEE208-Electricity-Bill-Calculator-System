ELECTRICITY CALCULATOR SYSTEM

BNAME:	ID NUMBER:
1.	Maclean Sena Awoye	01243567B
2.	Alhassan Yaro Hassan	01243099B
3.	Emmanuel Mawunyo Klutse 	01245369B
4.	Teleba Joshua	01243557B
5.	 Awogchaab Desmond Akanlueratey 	01246467B
6.	Isaac Okoye Godspower	01241932B
7.	Azievor T. Godwin 	01246463B
8.	MARY POKUA	01242825B
9.	Samuel Hayford	01244691B
10.	Baidoo Godfred	01245515B

INTRODUCTION
Electricity billing is a common task in homes, hostels, shops, offices, workshops, and laboratories. Users often need to know how much electricity they have consumed and how much they are expected to pay based on meter readings. This project requires students to develop a simple C++ application that calculates an electricity bill using previous and current meter readings, tariff rate, and fixed service charge. The system should also classify the level of consumption and save the bill record for future reference.

Problem Statement
Many electricity users do not easily understand how their electricity bill is calculated. In some cases, users only know the final amount but do not know the units consumed, tariff applied, fixed charge, or total amount payable. There is a need for a simple C++ application that accepts customer and meter information, calculates the units consumed, determines the total bill, displays a clear bill summary, and saves the record into a text file.


Aim of the Project
The aim of this project is to develop a C++ Electricity Bill Calculator System that calculates the total electricity bill from meter readings and produces a clear customer bill report.
Project Objectives
1. Identify the input, processing, and output requirements of an electricity billing system.
2. Write an algorithm for the electricity bill calculator.
3. Write pseudocode for the application.
4. Design a flowchart for the system.
5. Develop a working C++ programme using functions and classes.
6. Use conditional statements to validate meter readings and classify consumption.
7. Use file handling to save the bill record.
8. Document the project using Markdown and submit through GitHub.

SYSTEM REQUIREMENTS
The application should allow the user to:
1. Enter customer name.
2. Enter customer meter number. 
3. Enter previous meter reading in kilowatt-hours.
4. Enter current meter reading in kilowatt-hours.
5. Enter tariff rate per kilowatt-hour.
6. Enter fixed service charge.
7. Calculate units consumed using: Units Consumed = Current Reading - Previous Reading.
8. Calculate energy charge using: Energy Charge = Units Consumed x Tariff Rate.
9. Calculate total bill using: Total Bill = Energy Charge + Fixed Service Charge.
10. Classify consumption level as Low, Moderate, High, or Very High.
11. Display a clear electricity bill summary.
12. Save the bill record into a file named electricity_bill.txt.

Algorithm for Electricity Bill Calculator
Start.
Display "Electricity Bill Calculator System".
Enter customer name.
Enter meter number.
Enter previous meter reading.
Enter current meter reading.
Enter tariff rate per kWh.
Enter fixed service charge.
Check if current reading is less than previous reading.
If Yes, display "Invalid meter reading." and stop.
Check if tariff rate or fixed charge is negative.
If Yes, display "Invalid charges." and stop.
Calculate Units Consumed = (Current Reading − Previous Reading).
Calculate Energy Charge = Units Consumed × Tariff Rate.
Calculate Total Bill = Energy Charge + Fixed Service Charge.
Determine the consumption level:
0–50 → Low Consumption
51–150 → Moderate Consumption
151–300 → High Consumption
Above 300 → Very High Consumption
Display the electricity bill report.
Save the report to electricity_bill.txt.
Display "Bill saved successfully."
Stop.

PSEUDOCODE

BEGIN
Display "ELECTRICITY BILL CALCULATOR SYSTEM"
Input customerName
Input meterNumber
Input previousReading
Input currentReading
Input tariffRate
Input fixedCharge
IF currentReading < previousReading THEN
    Display "Invalid meter reading"
    STOP
END IF

IF tariffRate < 0 OR fixedCharge < 0 THEN
    Display "Invalid charges"
    STOP
END IF
unitsConsumed = currentReading - previousReading
energyCharge = unitsConsumed * tariffRate
totalBill = energyCharge + fixedCharge
IF unitsConsumed <= 50 THEN
    status = "Low Consumption"
ELSE IF unitsConsumed <= 150 THEN
    status = "Moderate Consumption"
ELSE IF unitsConsumed <= 300 THEN
    status = "High Consumption"
ELSE
    status = "Very High Consumption"
END IF
Display customerName
Display meterNumber
Display unitsConsumed
Display energyCharge
Display fixedCharge
Display totalBill
Display status

Save bill details into electricity_bill.txt
Display "Bill saved successfully"
EN







FLOWCHART

 


c:\Users\HP\Desktop\BEE218 GROUP 1.2\flowchart.png







EXPLANATION OF THE C++ IMPLEMENTATION
The Electricity Bill Calculator System was developed using the C++ programming language with an object-oriented approach. The program is organized into a class named Electricity Bill, which stores all customer and billing information and provides functions to perform the required operations. This follows the project requirement to use classes and functions.

SAMPLE INPUT AND OUTPUT
Sample Input
Enter customer name: Kwabena Sarfo
Enter meter number: MTR-30
Enter previous reading (kWh): 1250
Enter current reading (kWh): 1385
Enter tariff rate per kWh: 1.20
Enter fixed service charge: 10
 

c:\Users\HP\Desktop\Screenshot 2026-07-10 144108.png






Sample Output
=========================================
------- ELECTRICITY BILL REPORT -------
=========================================
Customer Name: Kwabena Sarfo
Meter Number: MTR-30
Previous Reading: 1250 kWh
Current Reading: 1385 kWh
Units Consumed: 135 kWh
Energy Charge: GHS 162
Fixed Service Charge: GHS 10

Total Bill: GHS 172

=========================================
CONSUMPTION STATUS: Moderate consumption
 
c:\Users\HP\Desktop\Screenshot 2026-07-10 144108.png




CHALLENGES FACED

1)	During the development of the Electricity Bill Calculator System, our group encountered several practical challenges.
2)	Understanding Object-Oriented Programming 
3)	At the beginning of the project, some group members found it difficult to understand how to organize the program using classes and objects. We were more familiar with writing C++ programs than designing a complete application using a class.
4)	Implementing input validation was challenging because we had to ensure that the current meter reading was never less than the previous reading and that the tariff rate and fixed service charge were not negative. Initially, our program accepted invalid values, which produced incorrect bill calculations.
5)	Saving the bill details into electricity_bill.txt was one of the most challenging parts of the project. Some group members had never used the <fstream> library before, so we had to learn how to create, write to, and close a text file correctly.
6)	We encountered several syntax and logical errors during development. In some cases, the program compiled successfully but produced incorrect results because of mistakes in the calculation formulas or conditional statements. Finding these errors required repeated testing.
7)	Since this was one of our first group projects using GitHub, we initially experienced difficulties creating the repository, uploading files, committing changes, and organizing the required project structure. We also had to learn how to avoid overwriting each other's work.
8)	We had to test the program using different meter readings and tariff values to confirm that the calculations and consumption classification worked correctly for low, moderate, high, and very high consumption levels. This process took more time than expected.

How We Overcame These Challenges
We regularly discussed the project as a group, referred to our lecture notes and class examples, tested the program with different input values, corrected errors through debugging, and learned the basic GitHub workflow. By working together and reviewing each other's contributions and were able to complete the project successfully.

INDIVIDUAL CONTRIBUTIONS
NAME:	ID NUMBER:	CONTRIBUTIONS
1.	Maclean Sena Awoye	01243567B	C++ Programmer
2.	Alhassan Yaro Hassan	01243099B	Flowchart designer
3.	Emmanuel Mawunyo Klutse 	01245369B	Pseudocode
4.	Teleba Joshua	01243557B	
5.	Awogchaab Desmond Akanlueratey 	01246467B	Presentation lead
6.	Isaac Okoye Godspower	01241932B	Algorithm writer
7.	Azievor T. Godwin 	01246463B	GitHub manager
8.	MARY POKUA	01242825B	Test lead
9.	Samuel Hayford	01244691B	Documentation
10.	Baidoo Godfred	01245515B	C++ programmer


Conclusion
The Electricity Bill Calculator System was successfully developed using the C++ programming language to automate the process of calculating electricity bills. The system accepts customer information, meter readings, tariff rate, and fixed service charge, then calculates the units consumed, energy charge, and total amount payable. It also validates user input, classifies electricity consumption into different categories, displays a detailed bill report, and saves the report to a text file

Future Improvements
1.	Store customer records in a database (such as MySQL or SQLite) instead of a text file for better data management.
2.	Allow users to search, update, and delete previously saved customer records.
3.	Support different tariff categories (e.g., residential, commercial, and industrial customers).
4.	Include user authentication with login credentials to improve security.
5.	Add a bill history feature so customers can view previous bills.
6.	Improve error handling by providing more detailed messages and recovering from invalid input without restarting the program.
7.	Develop a web-based or mobile version of the application to allow users to access the system from anywhere.
