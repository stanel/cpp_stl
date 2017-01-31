#include "CppUTest/CommandLineTestRunner.h"
#include "vectorTest.cpp"

int main(int ac, char **av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);    
}