//
//  main.cpp
//  L01OOP
//
//  Created by  songzeqing on 14-10-30.
//  Copyright (c) 2014年 ballwang. All rights reserved.
//

#include <iostream>
#include "People.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    People *p =new People();
    p->sayHello();
    delete p;
    return 0;
}
