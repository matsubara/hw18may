//
//  Account.hpp
//  hw18may
//
//  Created by Mauricio Matsubara on 18/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>

class Account {
public:
    int id;
    float balance;
    
    Account();
    Account(float initialBalance); //class constructor
    float withdraw(float withdrawl);
    float transfer (float transferValue, Account *destinationAccount);
    float deposit (float depositValue);
    float applyServiceTax(float tax);
    float loan (float loanAmount);
    float loanCollection (float loanCollectionAmount);
};

#endif /* Account_hpp */
