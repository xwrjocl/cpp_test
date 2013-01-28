//
//  main.cpp
//  cpp_test
//
//  Created by Jose Luis Clares on 08/01/13.
//  Copyright (c) 2013 Jose Luis Clares. All rights reserved.
//

#include <iostream>
using namespace std;

struct stPareja {
    int A, B;
    int LeeA() { return A; }
    int LeeB() { return B; }
    void GuardaA (int n) { A = n; }
    void GuardaB (int n) { B = n; }
} Par;

int main()
{
    Par.GuardaA(15);
    Par.GuardaB(63);
    cout << Par.LeeA() << endl;
    cout << Par.LeeB() << endl;
    
    return 0;
}

