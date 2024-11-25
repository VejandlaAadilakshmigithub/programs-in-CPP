/*Assignment Task

Develop a feature for an Automotive Diagnostic Alert System where:

1. Singleton is used to ensure there is only one DiagnosticManager instance.

2. Observer Pattern is used to notify various subsystems (e.g., Display, Logging, and External Alert System) about the changes in diagnostic status.

3. Implement the design using advanced C++ features such as smart pointers, lambdas, and modern C++ STL.

---

Requirements

1. Create a DiagnosticManager class using the Singleton pattern to centralize diagnostic data.

2. Implement an Observer pattern to notify subscribers (Display, Logger, AlertSystem) of diagnostic updates.

3. The system should:

o Monitor diagnostics data (e.g., engine temperature, oil pressure).

o Notify subscribers whenever a fault is detected.

4. Utilize C++11 and later features:

o std::shared_ptr or std::unique_ptr for memory management.

o std::function for callback mechanism in the Observer.

o Use constexpr and enum class for defining diagnostic types.

5. Ensure thread safety for the Singleton implementation.

---

Detailed Implementation Plan

Step 1: Define Diagnostic Types

Step 2: Create Observer Interface

Define an interface for all observers to implement.

Step 3: Singleton Implementation of DiagnosticManager

Create a thread-safe Singleton that holds diagnostic data and notifies observers.

Step 4: Implement Observer Subsystems

Implement concrete observer classes.

Display Subsystem:

Logger Subsystem:

Alert System:

Step 5: Main Function

Demonstrate the functionality.

---

Key Concepts Covered

1. Singleton Pattern: Ensures a single instance of DiagnosticManager.

2. Observer Pattern: Implements loose coupling between the manager and subsystems.

3. Modern C++ Features:

o Smart pointers (std::shared_ptr).

o Thread safety with std::mutex.

o Enum classes for type safety.

o Lambdas (if callbacks are extended).

This assignment provides hands-on experience with critical software design patterns and modern C++ programming techniques in the automotive domain.*/
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
 
class Subscribers{
    public:
    virtual void show(string s)=0;
};
 
// Observer pattern
class Display : public Subscribers{
    public:
    void show(string s) override{
        cout<<"Notification from Display : "<< s<<endl;
    }
};
 
class Logger : public Subscribers{
    void show(string s) override{
        cout<<"Notification from Logger : "<< s<<endl;
    }
};
 
class AlertSystem : public Subscribers{
    void show(string s) override{
        cout<<"Notification from Alert System : "<< s <<endl;
    }
};
 
//singletone class
class DiagnosticManager{
    private:
    list<Subscribers*> l;
    int accelrat;
 
    DiagnosticManager(){
        l.push_back(new Display());
        l.push_back(new Logger());
        l.push_back(new AlertSystem());
        accelrat=0;
    }
 
    void notify(string msg){
        //Passing functor in for_each
        for_each(l.begin(), l.end(), [&](Subscribers* s)->void {s->show(msg);});
    }
 
    public:
    static DiagnosticManager* obj;
    public:
    void accelrate(){
        if(accelrat++ == 3){
            notify("Too much accelration engine temprature is high.");
        }
    }
 
    static DiagnosticManager* createDiagnosticManager(){
        if(obj==nullptr) obj=new DiagnosticManager();
        return obj;
    }
};
 
DiagnosticManager* DiagnosticManager::obj = nullptr;
 
int main(){
    DiagnosticManager* diagnosis = DiagnosticManager::createDiagnosticManager();
    diagnosis->accelrate();
    diagnosis->accelrate();
    diagnosis->accelrate();
    diagnosis->accelrate();
}