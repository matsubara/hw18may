//
//  InvestmentAccount.cpp
//  hw18may
//
//  Created by Breno Sallouti on 23/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#include "InvestmentAccount.hpp"
#include "Account.hpp"

 InvestmentAccount::InvestmentAccount(float initalInvestmentBalance){
   balance = initalInvestmentBalance;
}

InvestmentAccount::setStockRate( float stockIntrestRate){
    stockRate = stockIntrestRate;
   return 0;
}

 InvestmentAccount::stockValuation(){
   balance = balance * 1 + stockRate;
   return balance;
}
