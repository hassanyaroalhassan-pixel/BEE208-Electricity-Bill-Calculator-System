# Electricity Bill Program Pseudocode

This pseudocode describes the logic in `EB.cpp` for computing and displaying an electricity bill.

```
START
  CREATE an ElectricityBill object named bill

  CALL bill.setCustomerDetails()
    PROMPT "Enter customer name: "
    READ customerName
    PROMPT "Enter meter number: "
    READ meterNumber
    PROMPT "Enter previous reading (kWh): "
    READ previousReading
    PROMPT "Enter current reading (kWh): "
    READ currentReading
    PROMPT "Enter tariff rate per kWh: "
    READ tariffRate
    PROMPT "Enter fixed service charge: "
    READ fixedCharge

  IF bill.validateReadings() IS TRUE THEN
    CALL bill.calculateBill()
      SET unitsConsumed = currentReading - previousReading
      SET energyCharge = unitsConsumed * tariffRate
      SET totalBill = energyCharge + fixedCharge
      IF unitsConsumed <= 50 THEN
        SET consumptionStatus = "Low consumption"
      ELSE IF unitsConsumed <= 150 THEN
        SET consumptionStatus = "Moderate consumption"
      ELSE IF unitsConsumed <= 300 THEN
        SET consumptionStatus = "High consumption"
      ELSE
        SET consumptionStatus = "Very High consumption"
      END IF
    END CALL

    CALL bill.displayBill()
      PRINT "--- ELECTRICITY BILL REPORT ---"
      PRINT customerName
      PRINT meterNumber
      PRINT previousReading
      PRINT currentReading
      PRINT unitsConsumed
      PRINT energyCharge
      PRINT fixedCharge
      PRINT totalBill
      PRINT consumptionStatus
    END CALL
  END IF

  END PROGRAM

FUNCTION bill.validateReadings()
  IF currentReading < previousReading THEN
    PRINT "Error: Current reading cannot be less than previous reading."
    RETURN FALSE
  END IF
  IF tariffRate < 0 OR fixedCharge < 0 THEN
    PRINT "Error: Tariff rate and fixed charge must not be negative."
    RETURN FALSE
  END IF
  RETURN TRUE
END FUNCTION
```

Notes:
- The program assumes valid numeric input for readings, tariff rate, and fixed charge.
- Validation handles only negative values and meter reading order.
- Output is displayed only when validation passes.
