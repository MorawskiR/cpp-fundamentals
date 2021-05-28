

#include <vector>
#include <memory>
#include <iostream>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>>generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    vec.reserve(count);
    for (size_t i = 0; i < count; i++)
        vec.push_back(std::make_shared<int>(i));
    return vec;
}

void print(std::vector<std::shared_ptr<int>> vec)
{
  for (const auto& el : vec)
     std::cout<<*el<<" ";
}

void add10(std::vector<std::shared_ptr<int>> vec)
{
    for (size_t i = 0; i < vec.size(); i++)
    {
        *vec[i] +=  10; 
    }
}

void sub10(std::vector<std::shared_ptr<int>> vec)
{
    
}