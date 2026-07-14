# Electricity Bill Program Test Data

This file contains sample test cases for `EB.cpp`, which calculates an electricity bill based on meter readings, tariff rate, and a fixed service charge.

## Test Case 1: Low consumption
- Customer Name: Alice
- Meter Number: MTR123
- Previous Reading: 1000
- Current Reading: 1040
- Tariff Rate: 0.50
- Fixed Service Charge: 30

Expected behavior:
- Units Consumed: 40
- Energy Charge: 20.00
- Fixed Service Charge: 30.00
- Total Bill: 50.00
- Consumption Status: Low consumption

## Test Case 2: Moderate consumption
- Customer Name: Bob
- Meter Number: MTR456
- Previous Reading: 500
- Current Reading: 620
- Tariff Rate: 0.75
- Fixed Service Charge: 25

Expected behavior:
- Units Consumed: 120
- Energy Charge: 90.00
- Fixed Service Charge: 25.00
- Total Bill: 115.00
- Consumption Status: Moderate consumption

## Test Case 3: High consumption
- Customer Name: Carol
- Meter Number: MTR789
- Previous Reading: 200
- Current Reading: 430
- Tariff Rate: 1.20
- Fixed Service Charge: 40

Expected behavior:
- Units Consumed: 230
- Energy Charge: 276.00
- Fixed Service Charge: 40.00
- Total Bill: 316.00
- Consumption Status: High consumption

## Test Case 4: Very high consumption
- Customer Name: Dave
- Meter Number: MTR321
- Previous Reading: 150
- Current Reading: 480
- Tariff Rate: 1.50
- Fixed Service Charge: 50

Expected behavior:
- Units Consumed: 330
- Energy Charge: 495.00
- Fixed Service Charge: 50.00
- Total Bill: 545.00
- Consumption Status: Very High consumption

## Test Case 5: Invalid current reading
- Customer Name: Eve
- Meter Number: MTR654
- Previous Reading: 900
- Current Reading: 850
- Tariff Rate: 0.60
- Fixed Service Charge: 20

Expected behavior:
- Program should print an error message:
  - "Error: Current reading cannot be less than previous reading."

## Test Case 6: Invalid negative values
- Customer Name: Frank
- Meter Number: MTR987
- Previous Reading: 400
- Current Reading: 450
- Tariff Rate: -0.80
- Fixed Service Charge: -10

Expected behavior:
- Program should print an error message:
  - "Error: Tariff rate and fixed charge must not be negative."

## Notes
- The program reads input interactively in the order shown above.
- Expected output values are calculated as:
  - `Units Consumed = Current Reading - Previous Reading`
  - `Energy Charge = Units Consumed * Tariff Rate`
  - `Total Bill = Energy Charge + Fixed Service Charge`
- Consumption status is determined by the units consumed:
  - 0–50: Low consumption
  - 51–150: Moderate consumption
  - 151–300: High consumption
  - 301+: Very High consumption
