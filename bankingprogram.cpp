#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main(){

    double balance = 0;
    int choice = 0;
    std::cout << "*************Banking************* \n";
    do{
        std::cout << "Enter your choice: \n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit money \n";
        std::cout << "3. Withdraw money \n";
        std::cout << "4. Exit \n";
    
        std::cin >> choice;
    
        switch(choice){
            case 1: showBalance(balance);
                break;
    
            case 2: balance = balance + deposit();
            break;
    
            case 3:balance -= withdraw(balance);
            break;
    
            case 4: std::cout<< "Thanks for vising \n";
            break;
    
            default: std::cout << "Invalid input \n";
        }
    }while(choice != 4);
    std::cout << "********************************* \n";
    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $"<< std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
    double amount =0;
    std::cout << "Enter amount to deposit: $ \n";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "Invalid amount! \n";
        return 0;
    }
    return amount;
}
double withdraw(double balance){
    double amount =0;
    std::cout << "Enter the amount of withdraw: ";
    std::cin >> amount;
    if(balance < amount){
        std::cout << "Insufficiant balance \n";
        return 0;
    }
    return amount;
}
