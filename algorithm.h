#pragma once
#include "libs.h"
#include "Wear.h"
#include "errors.h"
#include <list>
class iterator;
namespace lab9_space{
    class Algorithm {
    public:
        void algorithm_1(string substring);//Подсчет слов в строке, которые содержат указанную подстроку
        void algorithm_2(std::list<lab9_space::Wear>::iterator begin, std::list<lab9_space::Wear>::iterator end);//функция для проверки все ли элементы удовлетворяют определенному условию
        void algorithm_3(std::list<lab9_space::Wear>::iterator begin, std::list<lab9_space::Wear>::iterator end);//функция, которая копирует множество элементов, удовлетворяющих условию, в заданное место.
    };
}
