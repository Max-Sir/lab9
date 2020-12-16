#include "libs.h"
#include "Wear.h"
#include "algorithm.h"
int main(){
    srand(time(NULL));
    //std::cout << "source: statement: element by own cost>10, 1st algoritm used by T2 as input and 1txt and uk_place as out of result. ";
    lab9_space::Algorithm A;
    std::fstream file;
    file.open("T2.txt", ios::out);
    try {
        if (!file.is_open())
        {
            throw 1;
        }
    }
    catch (int i)
    {
        lab9_space::Exception ex(i);
        ex.Print();
        return 0;
    }
    std::list<lab9_space::Wear> list;
    lab9_space::Wear Wear1, Wear2, Wear3, Wear4,Wear5;
    file<<Wear1;
    file<<Wear2;
    file<<Wear3;
    file<<Wear4;
    file<<Wear5;
    file.close();
    A.algorithm_1("1");//find str with "1" as substr
    list.push_back(Wear1);
    list.push_back(Wear2);
    list.push_back(Wear3);
    list.push_back(Wear4);
    list.push_back(Wear5);
    try {
        if (list.size() <= 0)
        {
            throw 2;
        }
    }
    catch (int i)
    {
        lab9_space::Exception ex(i);
        ex.Print();
        return 0;
    }
    std::list<lab9_space::Wear>::iterator It;
    It = list.begin();
    while (It != list.end())
    {
        std::cout << *It;
        It++;
    }
    A.algorithm_2(It = list.begin(), It = list.end());
    A.algorithm_3(It = list.begin(), It = list.end());
    return 0;
}


