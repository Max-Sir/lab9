#pragma once
#include "libs.h"
namespace lab9_space{
    class Wear
    {
    public:
        static int i;
        int id;
        string name;
        int cost;
    public:

        Wear();
        Wear(string a, int b);
        ~Wear();
        int get_id();
        string get_name();
    	void randomize()
    	{
            this->cost = 8 + rand() % 15;
    	}
        int get_cost();
        Wear& operator=(const Wear it);
        friend bool operator==(Wear it1, Wear it2);
        friend ostream& operator<<(ostream& out, const Wear it);
        friend fstream& operator<<(fstream& file, Wear& item);
    };
}
