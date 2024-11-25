#include <iostream> 
#include <string> 
// Class responsible for Car Maintenance (Single Responsibility) 

class CarMaintenance { 

public: 

    void changeOil() { 

        std::cout << "Changing oil..." << std::endl; 

    } 

  void checkEngine() { 

        std::cout << "Checking engine..." << std::endl; 

    } 

}; 

// Class responsible for Reporting (Single Responsibility) 

class CarReport { 

public: 

    void generateReport() { 

        std::cout << "Car status report generated!" << std::endl; 

        std::cout << "Oil changed: Yes" << std::endl; 

        std::cout << "Engine checked: Yes" << std::endl; 

    } 

}; 
int main() { 

    // Create instances of the classes 

    CarMaintenance maintenance; 

    CarReport report; 

  

    // Perform maintenance tasks 

    maintenance.changeOil(); 

    maintenance.checkEngine(); 

    report.generateReport();

    // // Generate the report 

    // report.generateReport(maintenance); 

  

    return 0; 

} 

/*
class OrderProcess
{
    public:

    void calculatePrice()
    {
                
    }
    void discount()
    {

    }
};

class SendingEmail
{
    public:

    void sendingEmail()
    {
        std::cout<<"order confirmed details."<<std::endl;
    }
    int main()
    {
        OrderProcess orp;
        SendingEmail se;



    }
};
};*/