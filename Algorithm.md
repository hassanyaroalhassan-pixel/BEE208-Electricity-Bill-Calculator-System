# Electricity Bill Calculator Algorithm

This document describes the algorithm used by `EB.cpp` to calculate and display an electricity bill.

## Overview
The program uses a simple class-based design to:
1. collect customer and meter information,
2. validate meter readings and pricing values,
3. compute energy consumption and bill amounts,
4. classify the consumption level, and
5. display a formatted bill report or error message.

## Data Input
The program prompts the user for:
- Customer name
- Meter number
- Previous meter reading (kWh)
- Current meter reading (kWh)
- Tariff rate per kWh
- Fixed service charge

Input is read from standard input using `getline` for text values and `cin` for numeric values.

## Validation
After collecting the input, the program validates:
- `currentReading` must not be less than `previousReading`
- `tariffRate` must not be negative
- `fixedCharge` must not be negative

If any validation check fails, the program prints an error message and stops further processing.

## Computation
If validation succeeds, the program computes:
- `unitsConsumed = currentReading - previousReading`
- `energyCharge = unitsConsumed * tariffRate`
- `totalBill = energyCharge + fixedCharge`

## Consumption Classification
The program classifies consumption into one of four categories based on `unitsConsumed`:
- `0 to 50`: Low consumption
- `51 to 150`: Moderate consumption
- `151 to 300`: High consumption
- `301+`: Very High consumption

## Output
The bill report includes:
- Customer Name
- Meter Number
- Previous Reading
- Current Reading
- Units Consumed
- Energy Charge
- Fixed Service Charge
- Total Bill
- Consumption Status

The report is printed to standard output using `cout`.

## Program Flow
1. Start program
2. Create `ElectricityBill` object
3. Call `setCustomerDetails()` to read input
4. Call `validateReadings()` to check input
5. If valid:
   - Call `calculateBill()`
   - Call `displayBill()`
6. End program

## Notes
- The program assumes valid numeric input from the user for the meter readings, tariff rate, and fixed charge.
- Error handling is limited to simple validation checks; non-numeric input may cause undefined behavior because `cin` parsing is not checked.
- All calculations use `double` for decimal precision.
