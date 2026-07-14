#include <iostream> // Includes the standard input/output stream library
#include <string> // Includes the string data type library
using namespace std; // Allows use of standard library names without std:: prefix
     // I LOVE PLAYING WITH C++ 
class ElectricityBill { // Defines a class for managing electricity bill calculations
private: // Declares private data members
    string customerName; // Stores the customer's name
    string meterNumber; // Stores the meter number
    double previousReading; // Stores the previous meter reading
    double currentReading; // Stores the current meter reading
    double tariffRate; // Stores the electricity tariff rate per kWh
    double fixedCharge; // Stores the fixed service charge
    double unitsConsumed; // Stores the units consumed
    double energyCharge; // Stores the calculated energy charge
    double totalBill; // Stores the total bill amount
    string consumptionStatus; // Stores the consumption category

public: // Declares public member functions
    // Input function
    void setCustomerDetails() { // Collects customer and meter information from the user
        cout << "============================================"<<endl;
        cout << "==========ELECTRICITY BILL REPORT==========="<<endl;
        cout << "============================================"<<endl;
		cout << "Enter customer name: "; // Prompts for the customer's name
        getline(cin, customerName); // Reads the customer's name
        cout << "Enter meter number: "; // Prompts for the meter number
        getline(cin, meterNumber); // Reads the meter number
        cout << "Enter previous reading (kWh): "; // Prompts for the previous reading
        cin >> previousReading; // Reads the previous reading
        cout << "Enter current reading (kWh): "; // Prompts for the current reading
        cin >> currentReading; // Reads the current reading
        cout << "Enter tariff rate per kWh: "; // Prompts for the tariff rate
        cin >> tariffRate; // Reads the tariff rate
        cout << "Enter fixed service charge: "; // Prompts for the fixed service charge
        cin >> fixedCharge; // Reads the fixed service charge
    }

    // Validation
    bool validateReadings() { // Checks whether the entered readings and charges are valid
        if (currentReading < previousReading) { // Ensures current reading is not less than previous
            cout << "Error: Current reading cannot be less than previous reading.\n"; // Displays an error message
            return false; // Returns false for invalid input
        }
        if (tariffRate < 0 || fixedCharge < 0) { // Ensures values are not negative
            cout << "Error: Tariff rate and fixed charge must not be negative.\n"; // Displays an error message
            return false; // Returns false for invalid input
        }
        return true; // Returns true when input is valid
    }

    // Processing calculations + classification
    void calculateBill() { // Computes the bill and consumption category
        unitsConsumed = currentReading - previousReading; // Calculates units consumed
        energyCharge = unitsConsumed * tariffRate; // Calculates the energy charge
        totalBill = energyCharge + fixedCharge; // Calculates the total bill

        // Integrated classification logic
        if (unitsConsumed <= 50) // Classifies low consumption
            consumptionStatus = "Low consumption"; // Sets the status for low usage
        else if (unitsConsumed <= 150) // Classifies moderate consumption
            consumptionStatus = "Moderate consumption"; // Sets the status for moderate usage
        else if (unitsConsumed <= 300) // Classifies high consumption
            consumptionStatus = "High consumption"; // Sets the status for high usage
        else // Classifies very high consumption
            consumptionStatus = "Very High consumption"; // Sets the status for very high usage
    }

    // Output
    void displayBill() { // Prints the electricity bill report
    	cout << "\n"; // Prints a blank line
    	cout << "=========================================\n"; // Prints the top border
        cout << "======== ELECTRICITY BILL RECEIPT =======\n"; // Prints the report header
        cout << "=========================================\n"; // Prints the header border
        cout << "Customer Name: " << customerName << endl; // Prints the customer name
        cout << "Meter Number: " << meterNumber << endl; // Prints the meter number
        cout << "Previous Reading: " << previousReading << " kWh\n"; // Prints the previous reading
        cout << "Current Reading: " << currentReading << " kWh\n"; // Prints the current reading
        cout << "Units Consumed: " << unitsConsumed << " kWh\n"; // Prints the units consumed
        cout << "Energy Charge: GHS " << energyCharge << endl; // Prints the energy charge
        cout << "Fixed Service Charge:"<<" GHS " << fixedCharge << endl; // Prints the fixed service charge
        cout << "Total Bill: GHS " << totalBill << endl; // Prints the total bill
        cout << "=========================================\n"; // Prints the summary border
        cout << "CONSUMPTION STATUS: " << consumptionStatus << endl; // Prints the consumption status
        cout << "=========================================\n" ; // Prints the final border
    }
};

int main() { // Starts the main program
    ElectricityBill bill; // Creates an object of the ElectricityBill class
    bill.setCustomerDetails(); // Calls the input function

    if (bill.validateReadings()) { // Validates the data before calculation
        bill.calculateBill(); // Computes the bill
        bill.displayBill(); // Displays the final bill report
    }

    return 0; // Ends the program successfully
}
