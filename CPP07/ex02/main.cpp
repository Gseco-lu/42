/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:18:39 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/24 17:05:50 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cmath>
#include <cstring>
//
//#define MAX_VAL 750
//int main(int, char**)
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//
//        Array<int> tmp;
//        tmp.operator=(numbers);
//        Array<int> test(tmp);
//
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//
//    for (int i = 0; i < 16; i++)
//    {
//        numbers[i] = rand();
//        std::cout << numbers[i] << std::endl;
//    }
//    delete [] mirror;//
//
//    std::cout << "\n>>>>>End of first test<<<<<<\n" << std::endl;
//    
//    Array<char> str(14);
//    std::string s1 = "Hello World!";
//    for (unsigned int i = 0; i < str.size(); i++)
//        str[i] = s1[i];
//    
//    for (unsigned int i = 0; i < str.size(); i++)
//        std::cout << str[i];
//    std::cout << std::endl;
//    return 0;
//}

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10

class MyClass
{
public:
    MyClass() : data (0){}
    MyClass(int value) : data (value){}
    int getData() const { return data; }
    int data;
};


int main(void)
{
    Array<int> numbers(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
       std::cout << "I: " << i << " " << numbers[i] <<  std::endl;
    }
    Array<int> numbers3;
    try
    {
        numbers3[-2] = 0;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;;
    }
    Array<int> numbers2(10);
    for (int i = 0; i < 10; i++)
    {
       std::cout << "I: " << i << " " << numbers2[i] <<  std::endl;
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    Array<MyClass>complexArray(3);
    complexArray[0] = MyClass(10);
    complexArray[1] = MyClass(2);
    complexArray[2] = MyClass(1);
    std::cout << "0: " << complexArray[0].getData() << std::endl;
    std::cout << "1: " << complexArray[1].getData() << std::endl;
    std::cout << "2: " << complexArray[2].getData() << std::endl;
    std::cout << "size: " << complexArray.size() << std::endl;
    return 0;
}