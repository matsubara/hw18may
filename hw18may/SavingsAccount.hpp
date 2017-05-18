//
//  SavingsAccount.hpp
//  hw18may
//
//  Created by Mauricio Matsubara on 18/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp

#include <stdio.h>
#include "Account.hpp"

class SavingsAccount : public Account {
private:
    float interestRate;
public:
    SavingsAccount(float initialSavingsBalance);
    float setInterestRate (float savingsInterest);
    float savingsValuation(); //multiplies current balance by savings interest rate
};

#endif /* SavingsAccount_hpp */
