//
//  9.4.cpp
//  ss9_excersize
//
//  Created by 王星洲 on 2018/4/11.
//  Copyright © 2018年 王星洲. All rights reserved.
//

#include <iostream>
#include "9.4.h"
using namespace std;
namespace SALES
{
    void SetSales(Sales & s, const double ar[], int n)
    {
        double sum = 0;
        s.max = ar[0];
        s.min = ar[0];
        for(int i=0;i<n;i++)
        {
            s.sales[i] = ar[i];
            sum += ar[i];
            if(s.max < ar[i])
            {
                s.max = ar[i];
            }
            if(s.min > ar[i])
            {
                s.min = ar[i];
            }
        }
        s.average = sum / n;
    }
    void SetSales(Sales & s)
    {
        cout<<"enter the 4 numbers of this Sales."<<endl;
        double ar[QUARTERS];
        for(int i=0;i<QUARTERS;i++)
        {
            cin>>ar[i];
        }
        SetSales(s,ar,QUARTERS);
    }
    void showSales(const Sales & s)
    {
        for(int i=0;i<QUARTERS;i++)
        {
            cout<<s.sales[i]<<" ";
        }
        cout<<s.max<<" "<<s.min<<" "<<s.average<<endl;
    }
}

