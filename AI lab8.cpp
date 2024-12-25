#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    std::string country;
    std::string dateOfBirth;
    int height;
    int weight;

public:
    Person(const std::string& n, const std::string& c, const std::string& dob, int h, int w)
        : name(n), country(c), dateOfBirth(dob), height(h), weight(w) {}

    void displayInformation() const {
        std::cout << "+------------------------------------------+" << std::endl;
        std::cout << "| Person |" << std::endl;
        std::cout << "|------------------------------------------|" << std::endl;
        std::cout << "| Name: " << name << std::endl;
        std::cout << "| Country: " << country << std::endl;
        std::cout << "| Date of Birth: " << dateOfBirth << std::endl;
        std::cout << "| Height: " << height << " Feet" << std::endl;
        std::cout << "| Weight: " << weight << " kg" << std::endl;
        std::cout << "+------------------------------------------+" << std::endl;
    }
};

class Employee {
private:
    std::string occupation;
    double salary;
    std::string company;
    std::string location;

public:
    Employee(const std::string& occ, double sal, const std::string& comp, const std::string& loc)
        : occupation(occ), salary(sal), company(comp), location(loc) {}

    void displayInformation() const {
        std::cout << "+------------------------------------------+" << std::endl;
        std::cout << "| Employee |" << std::endl;
        std::cout << "|------------------------------------------|" << std::endl;
        std::cout << "| Occupation: " << occupation << std::endl;
        std::cout << "| Salary: " << salary << " lakhs per month" << std::endl;
        std::cout << "| Company: " << company << std::endl;
        std::cout << "| Location: " << location << std::endl;
        std::cout << "+------------------------------------------+" << std::endl;
    }
};

int main() {
    Person* ram = new Person("Ram", "Nepal", "15th December 1999", 6, 80);
    Employee* ramJob = new Employee("AI Researcher", 1.5, "info company", "Kathmandu");

    ram->displayInformation();
    ramJob->displayInformation();

    delete ram;
    delete ramJob;

    return 0;
}
