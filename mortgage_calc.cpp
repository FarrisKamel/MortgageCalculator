#include <iostream>
#include <stdlib.h>
#include <math.h>

//Calculate Mortgage
double calculateMortgage(double borrow_mortgage, double mortgage_length, double yearly_rate){
    
    double theta = 1/(1 - (yearly_rate/100));
    double n = mortgage_length * 12; 
    double dominator = borrow_mortgage * yearly_rate;
    double numerator = 1 - (pow(theta, n));
    
    return dominator / numerator; 
}

int main() {

    // initalize variables
    double borrow_mortgage;
    double mortgage_length;
    double yearly_rate;

    //Print prompt to user
    std::cout << "Please enter the following information: \n";
    std::cout << "1. $ Mortgage Borrow Amount: ";
    std::cin >> borrow_mortgage;
    if (!std::cin){
        std::cout << "Error: Enter only a number";
        exit(1);
    }

    std::cout << "\n 2. $ Mortgage Length (years): ";
    std::cin >> mortgage_length;
    if (!std::cin){
        std::cout << "Error: Enter only a number";
        exit(1);
    }

    std::cout << "\n 3. $ Yearly Rate: ";
    std::cin >> yearly_rate;
    if (!std::cin){
        std::cout << "Error: Enter only a number";
        exit(1);
    } 

    std::cout << "Your monthly payment: " <<  calculateMortgage(borrow_mortgage, mortgage_length, yearly_rate) << ".\n";

}


