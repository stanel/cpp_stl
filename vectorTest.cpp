#include "CppUTest/TestHarness.h"
#include <vector>

using namespace std;

TEST_GROUP(vectorTest){
};

TEST(vectorTest, elementsCanBeIteratedByUsingIterators)
{
    vector<int> numbers;
    
    numbers.push_back(11);
    numbers.push_back(22);
    numbers.push_back(33);

    int sum = 0;
    for(vector<int>::iterator itr = numbers.begin();itr<numbers.end();itr++)
        sum+= *itr;

    CHECK_EQUAL(66, sum);
}

TEST(vectorTest, sizeReturnTheNumberOfElements)
{
    vector<int> numbers;
    
    numbers.push_back(11);
    numbers.push_back(22);
    numbers.push_back(33);

    CHECK_EQUAL(3, numbers.size());

    numbers.pop_back();
    CHECK_EQUAL(2, numbers.size());
}