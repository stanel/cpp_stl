#include "CppUTest/TestHarness.h"
#include <set>

using namespace std;

TEST_GROUP(setTest){
};

TEST(setTest, elementsCanBeIteratedByUsingIterators)
{
    set<int> numbers;
    
    numbers.insert(11);
    numbers.insert(22);
    numbers.insert(33);

    int sum = 0;
    for(set<int>::iterator itr = numbers.begin();itr!=numbers.end();itr++)
        sum+= *itr;    

    CHECK_EQUAL(66, sum);
}