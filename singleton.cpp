#include<iostream>
#include<string>
class ConfigurationManager { 

private: 

    static ConfigurationManager* instance; // Static instance of the class 

 

    // Private constructor to prevent instantiation from outside 

    ConfigurationManager() { 

        std::cout<<"Configuration Manager Initialized!" << std::endl; 

    } 

 

public: 

    // Method to get the single instance of the ConfigurationManager 

    static ConfigurationManager* getInstance() { 

        if (instance == nullptr) { 

            instance = new ConfigurationManager(); 

        } 

        return instance; 

    } 

 

    void displaySettings() { 

        std::cout<<"Displaying system settings..."<<std::endl; 

    } 

}; 

 

// Initialize the static instance pointer to nullptr 

ConfigurationManager* ConfigurationManager::instance = nullptr; 

 

int main() { 

    // Accessing the singleton instance 

    ConfigurationManager* config = ConfigurationManager::getInstance(); 

    config->displaySettings();  // Displays settings 

    return 0; 

} 

 