//
//  main.cpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 19/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

// Modify the Account class to have only basic behavior
// Create the InvestmentAccount that inherits from the Account class. Create stockValuation method that increases balance by stockInterest rate (attribute).



#include <iostream>
#include "Account.hpp"
#include "SavingsAccount.hpp"

int main(int argc, const char * argv[]) {

    SavingsAccount brenosSavAcc(10);
    
    //std::cout << brenosSavAcc.balance;
    
   brenosSavAcc.setInterestRate(0);
    std::cout << brenosSavAcc.savingsValuation();
    std::cout << brenosSavAcc.savingsValuation();
    std::cout << brenosSavAcc.withdraw(0);
    std::cout << brenosSavAcc.deposit(0);
    
    
    
    Account johnsAcc;
    
   Account brenosBankAccount(100);
    Account mauriciosBankAccount(10);
    float remainingBalance;
    float transferResult;
    
    brenosBankAccount.loan(00);
    mauriciosBankAccount.loan(100);
    
    remainingBalance = brenosBankAccount.withdraw(10);
    transferResult = mauriciosBankAccount.transfer(0, &brenosBankAccount);

    brenosBankAccount.loanCollection(0);
    mauriciosBankAccount.loanCollection(100);
    
    brenosBankAccount.applyServiceTax(0.02);
    mauriciosBankAccount.applyServiceTax(0.02);

    
   
    
    if (transferResult==-1)
        std::cout<< "Breno's Balance: \nerror not enough balance\n";
    else{
        std::cout<< "Breno's Balance: \n" << brenosBankAccount.balance;
    }
    
    if (brenosBankAccount.balance<0)
        std::cout<< "\nBreno's Balance: \n Error not enough balance\n";
    else {
        std::cout<< "\nBreno's Balance: \n" <<brenosBankAccount.balance;
    }
    
    if (mauriciosBankAccount.balance>0)
        std::cout << "\nMauricio's Balance: \n" << mauriciosBankAccount.balance;
  
    if (mauriciosBankAccount.balance<0)
        std::cout<< "\nMaurcio's Balance: \nerror not enough balance";
    
    std::cout<< "\n";
    std::cout<<"\n";
    return 0;
}


