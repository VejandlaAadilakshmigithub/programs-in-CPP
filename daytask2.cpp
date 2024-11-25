/*HMI Application Practice Task: Automotive Data Manipulation
Objective:  
In this task, you will practice manipulating data using `std::transform` and utility functions like `plus()`, `minus()`, and `ptr_fun`. Additionally, you'll work with I/O streams and format complex output for automotive-related data containers.
You are developing a Human-Machine Interface (HMI) for an automotive system that displays sensor data from a car's dashboard. The data consists of sensor readings for speed, fuel level, engine temperature, and tire pressure. The data will be manipulated (using `std::transform` and utility functions) and formatted for easy viewing on a display screen. 
1. Data Preparation:
   - Create a simple `struct` called `CarSensorData` to hold the following data:
     - `speed` (in km/h)
     - `fuelLevel` (as percentage)
     - `engineTemp` (in Celsius)
     - `tirePressure` (array of 4 tire pressures, in PSI)

2. Using `std::transform` and Utility Functions:
   - Use `std::transform` with `std::plus<>()` and `std::minus<>()` to adjust the data:
     - Increase the `speed` by 10 km/h for each reading (simulate acceleration).
     - Decrease the `fuelLevel` by 5% (simulate fuel consumption).
     - Increase the `engineTemp` by 2°C to simulate engine heating.
     - Apply `std::ptr_fun` to simulate a filter to convert tire pressures that are too low (less than 30 PSI) to 30 PSI.

3. I/O Formatting:
   - Format and display the sensor data using `std::cout` with the following formatting settings:
     - Display the `speed` in a fixed width of 10 characters, right-aligned.
     - Display the `fuelLevel` as a percentage (e.g., "Fuel Level: 85%").
     - Display the `engineTemp` with a precision of 1 decimal place.
     - Display the `tirePressure` array with each tire's pressure formatted to 1 decimal place and separated by commas.
     - Use `boolalpha` to display `true`/`false` values for a flag indicating whether the tire pressures are within the safe range (PSI > 30).
 
Expected Output:-
Speed:         110 km/h
Fuel Level: 75%
Engine Temperature: 92.5 °C
Tire Pressures: 32.5 PSI, 30.0 PSI, 33.2 PSI, 30.0 PSI
Tires Safe: true

Additional Exercise:
- Modify the program to also display whether the fuel level is too low (less than 20%).
- Experiment with other I/O formatting flags like `left`, `right`, `showpos`, and `scientific`.
- Practice with different types of `std::transform` operations for more complex data manipulation, such as applying a discount factor to the tire pressure values or adjusting the speed based on weather conditions. 
Learning Goals:
- Practice using `std::transform` and utility functions (`std::plus`, `std::minus`, `std::ptr_fun`) for data manipulation.
- Get comfortable with formatting output using `std::setw`, `std::setprecision`, `std::fixed`, and other formatting flags.
- Understand how to format complex data structures for clear output, especially in a real-world automotive context.  */   
 #include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>


struct CarSensorData {
    int speed;               
    int fuelLevel;           
    float engineTemp;        
    std::array<float, 4> tirePressure; 
};


void adjustSpeed(int& speed) {
    speed += 10;
}


void adjustFuelLevel(int& fuelLevel) {
    fuelLevel -= 5;
}


void adjustEngineTemp(float& engineTemp) {
    engineTemp += 2.0f;
}


void adjustTirePressure(float& pressure) {
    if (pressure < 30.0f) {
        pressure = 30.0f;
    }
}


void manipulateData(CarSensorData& data) {
    adjustSpeed(data.speed);       
    adjustFuelLevel(data.fuelLevel); 
    adjustEngineTemp(data.engineTemp); 
    std::for_each(data.tirePressure.begin(), data.tirePressure.end(), adjustTirePressure); 
}


void displayData(const CarSensorData& data) {
    std::cout << "Speed: " << std::setw(10) << std::right << data.speed << " km/h\n";
    std::cout << "Fuel Level: " << data.fuelLevel << "%\n";
    std::cout << "Engine Temperature: " << std::fixed << std::setprecision(1) << data.engineTemp << " °C\n";
    std::cout << "Tire Pressures: ";
    for (size_t i = 0; i < data.tirePressure.size(); ++i) {
        std::cout << std::fixed << std::setprecision(1) << data.tirePressure[i];
        if (i != data.tirePressure.size() - 1) std::cout << ", ";
    }
    std::cout << " PSI\n";

    bool tiresSafe = std::all_of(data.tirePressure.begin(), data.tirePressure.end(), [](float pressure) {
        return pressure > 30.0f;
    });
    std::cout << "Tires Safe: " << std::boolalpha << tiresSafe << "\n";
}
void displayFuelLevelWarning(const CarSensorData& data) {
    if (data.fuelLevel < 20) {
        std::cout << "Warning: Fuel level is too low!\n";
    }
}
int main()
 {
    CarSensorData carData = {100, 80, 90.0f, {32.5f, 29.0f, 33.2f, 31.0f}};
 manipulateData(carData);
displayData(carData);
displayFuelLevelWarning(carData);
return 0;
}
