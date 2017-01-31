#include "CppUTest/TestHarness.h"
#include <map>

using namespace std;

TEST_GROUP(mapTest){
};

TEST(mapTest, elementsCanBeIteratedByUsingIterators)
{
    map<string,int> colorOccurrences;

    colorOccurrences["red"]=11;
    colorOccurrences["green"]=22;
    colorOccurrences["blue"]=33;
    
    int sum = 0;
    for(map<string,int>::iterator itr = colorOccurrences.begin();itr!=colorOccurrences.end();itr++)
        sum+= itr->second;

    CHECK_EQUAL(66, sum);
}