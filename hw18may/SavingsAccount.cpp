//
//  SavingsAccount.cpp
//  hw18may
//
//  Created by Mauricio Matsubara on 18/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#include "SavingsAccount.hpp"

SavingsAccount::SavingsAccount(float initialSavingsBalance){
    balance = initialSavingsBalance;
}


float SavingsAccount::setInterestRate (float savingsInterest){
    interestRate = savingsInterest;
    return 0;
}

float SavingsAccount::savingsValuation(){
    balance = balance * (1 + interestRate);
    return balance;
}
