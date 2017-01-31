#include "CppUTest/CommandLineTestRunner.h"
#include "vectorTest.cpp"
#include "setTest.cpp"
#include "mapTest.cpp"

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);    
}