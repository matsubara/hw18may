//
//  InvestmentAccount.hpp
//  hw18may
//
//  Created by Breno Sallouti on 23/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

#ifndef InvestmentAccount_hpp
#define InvestmentAccount_hpp

#include <stdio.h>
#include "Account.hpp"
#endif /* InvestmentAccount_hpp */

class InvestmentAccount : public Account {
private:
    float stockRate;
public:
    InvestmentAccount(float initalInvestmentBalance);
    float setStockRate (float stockValuationRate);
    float stockValuation ();
};
