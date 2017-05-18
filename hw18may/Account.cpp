//
//  Account.cpp
//  hw18may
//
//  Created by Mauricio Matsubara on 18/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#include "Account.hpp"

// class constructor

Account::Account(){
    balance = 0;
}

Account::Account(float initialBalance){
    balance = initialBalance;
}

float Account::withdraw(float withdrawl){
    balance= balance-withdrawl;
    return balance;
}

float Account::transfer (float transferValue, Account *destinationAccount) {
    if (transferValue>balance){
        return -1;
    }
    else{
        this->withdraw(transferValue);
        destinationAccount->deposit(transferValue);
        return balance;
    }
}

float Account::deposit (float depositValue){
    balance= balance+depositValue;
    return balance;
}

float Account::applyServiceTax(float tax) {
    balance = balance * (1 - tax);
    return balance;
}


float Account::loan(float loanAmount){
    balance = balance + loanAmount;
    return balance;
}


float Account::loanCollection(float loanCollectionAmount) {
    balance = balance - loanCollectionAmount;
    return balance;
}
