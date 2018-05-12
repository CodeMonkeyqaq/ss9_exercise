//
//  9.4.main.cpp
//  ss9_excersize
//
//  Created by 王星洲 on 2018/4/11.
//  Copyright © 2018年 王星洲. All rights reserved.
//

#include "9.4.h"
#include <iostream>
using namespace std;
int main()
{
    using namespace SALES;
    Sales a, b;
    double ar[QUARTERS]={1,2,3,4};
    SetSales(a, ar);
    SetSales(b);
    showSales(a);
    showSales(b);
    return 0;
}
