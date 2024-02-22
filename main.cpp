/*
 * File name: main.cpp
 * Author: João Víctor Costa de Oliveira
 * Creation date: 2023
 * Description: This is a simple file to control my program and call the test functions
 */

#include <cmath>
#include <iomanip>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "Not enough parameters, four needed: 'executable' 'instance path' 'algorithm' 'execution mode' " << std::endl;
        return 1;
    }
    std::cout << "Reading from file..." << std::endl;

    return 0;
}
