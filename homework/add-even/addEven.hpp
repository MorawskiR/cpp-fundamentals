#pragma once
#include <vector>
int addEven(const std::vector<int>& numbers)
{
     int sum = 0;
    if(numbers.capacity() ==0)
        return sum;

    for(auto const& el: numbers)
        {
            if(el % 2 == 0)
                sum+=el;
        }
        return sum;

}