//
//  main.cpp
//  test
//
//  Created by Paul  on 6/11/13.
//  Copyright (c) 2013 Paul Velasco. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,y,total;

   
    
    cout<< "Enter a number : "<<endl;
    cin>> x;
    cout<<"Enter another number "<<endl;
    cin>> y;
    
    total = (((x /2 )/y) + 4);
    cout<< "The numbers you enter are: "<<x<<","<<y<<endl;
    cout <<"the Total is : "<<total<< endl;
    
    return 0;
}

