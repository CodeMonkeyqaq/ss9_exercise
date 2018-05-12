//
//  9.4.main.hpp
//  ss9_excersize
//
//  Created by 王星洲 on 2018/4/11.
//  Copyright © 2018年 王星洲. All rights reserved.
//

#ifndef __4_main_hpp
#define __4_main_hpp
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    void SetSales(Sales & s, const double ar[], int n = QUARTERS);
    void SetSales(Sales & s);
    void showSales(const Sales & s);
}

#endif /* __4_main_hpp */
