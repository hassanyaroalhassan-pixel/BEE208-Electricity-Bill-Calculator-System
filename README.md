# BEE208-Electricity-Bill-Calculator-System

## Project Title

**Electricity Bill Calculator System**

---

## Project Background

Electricity billing is a common task in homes, hostels, shops, offices, workshops, and laboratories. Users often need to know how much electricity they have consumed and how much they are expected to pay based on meter readings.

This project develops a C++ application that calculates an electricity bill using previous and current meter readings, tariff rate, and fixed service charge. The system also classifies the level of electricity consumption and saves the bill record for future reference.

---

## Problem Statement

Many electricity users do not understand how their electricity bills are calculated. Most users only know the final amount payable without knowing the units consumed, tariff rate applied, or the fixed service charge.

This project provides a simple C++ solution that accepts customer and meter information, calculates the electricity bill, displays a detailed bill report, and stores the report in a text file.

---

## Aim

To develop a C++ Electricity Bill Calculator System that calculates the total electricity bill from meter readings and generates a clear customer bill report.

---

## Objectives

- Identify the input, processing, and output requirements of an electricity billing system.
- Write an algorithm for the electricity bill calculator.
- Write pseudocode for the application.
- Design a flowchart for the system.
- Develop the application using C++ classes and functions.
- Validate meter readings and user inputs.
- Classify electricity consumption.
- Save bill records using file handling.
- Document the project using Markdown.
- Submit the project through GitHub.

---

## Features

The application allows users to:

- Enter customer name.
- Enter customer meter number.
- Enter previous meter reading.
- Enter current meter reading.
- Enter tariff rate.
- Enter fixed service charge.
- Calculate units consumed.
- Calculate energy charge.
- Calculate total bill.
- Classify electricity consumption.
- Display a bill summary.
- Save the bill into **electricity_bill.txt**.

---

## Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Functions
- Classes and Objects
- Conditional Statements
- File Handling (`fstream`)
- Git
- GitHub
- Markdown

---

## Project Structure

```
BEE208-Electricity-Bill-Calculator-System
│
├── README.md
├── main.cpp
├── algorithm.md
├── pseudocode.md
├── flowchart.png
├── report.md
├── sample-output.png
├── test-data.md
├── electricity_bill.txt
├── group-contribution.md
└── screenshots
    ├── input-screen.png
    ├── output-screen.png
    └── file-output.png
```

---

## How to Compile

```bash
g++ main.cpp -o ElectricityBill
```

## How to Run

```bash
./ElectricityBill
```

Or run the program using any C++ IDE such as:

- Visual Studio Code
- Code::Blocks
- Dev-C++
- Visual Studio

---

## Sample Input

```
Customer Name: Ama Mensah
Meter Number: MTR-2045
Previous Reading: 1250
Current Reading: 1385
Tariff Rate: 1.20
Fixed Service Charge: 10
```

---

## Sample Output

```
Customer Name: Ama Mensah
Meter Number: MTR-2045
Units Consumed: 135 kWh
Energy Charge: GHS 162.00
Fixed Service Charge: GHS 10.00
Total Bill: GHS 172.00
Consumption Status: Moderate Consumption

Bill record saved to electricity_bill.txt
```

---

## Repository Information

**Course Code:** BEE 208

**Course Title:** C++ Programming

**Project:** Mid-Semester Practical Project Examination

**Project Question:** 2

**Project Title:** Electricity Bill Calculator System

**Institution:** Accra Technical University

**Department:** Electrical/Electronic Engineering

**Lecturer:** Douglas Ayitey

---

## Group Members

| No. | Student Name | Index Number |
|:---:|--------------|--------------|
| 1 | Maclean Sena Awoye | 01243567B |
| 2 | Alhassan Yaro Hassan | 01243099B |
| 3 | Emmanuel Mawunyo Klutse | 01245369B |
| 4 | Teleba Joshua | 01243557B |
| 5 | Awogchaab Desmond Akanlueratey | 01246467B |
| 6 | Isaac Okoye Godspower | 01241932B |
| 7 | Azievor T. Godwin | 01246463B |
| 8 | Mary Pokua | 01242825B |
| 9 | Samuel Hayford | 01244691B |
| 10 | Baidoo Godfred | 01245515B |

---

## GitHub Repository

Repository Name:

**BEE208-Electricity-Bill-Calculator-System**

---

## License

This project was developed solely for academic purposes as part of the BEE 208 C++ Programming Mid-Semester Practical Project at Accra Technical University.
