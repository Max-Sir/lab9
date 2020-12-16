//Контейнер: ассоциативный контейнер (ключ - объект, значение - число).
//Итераторы: вывода и однонаправленный.
//Алгоритмы:
//1.	Подсчет слов в строке, которые содержат указанную подстроку.
//2.	функция для проверки все ли элементы удовлетворяют определенному условию.
//3.	функция, которая копирует множество элементов, удовлетворяющих условию, в заданное место.(в файл)
#include "algorithm.h"
namespace lab9_space{
    void Algorithm::algorithm_1(string substring){
        std::fstream file;
        int fl = 0;
        char c;
        file.open("T2.txt", ios::in);
        file.seekg(0,ios_base::beg);
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
            return;
        }
        int n=0;
        while (!file.eof()) {
            file.get(c);
            if (c == substring[0]) {
                n++;
                for(int j=1;j<substring.length()&& !file.eof();j++) {
                    file.get(c);
                    if (c == substring[j])n++;
                    else break;
                }
                }
            if(n==substring.length()){
                fl++;
                n = 0;
                continue;
            }
            else n=0;
            }
        file.close();
        fstream f1;
        f1.open("uk_place.txt", ios::out);
            f1<<"Kol-vo:"<<fl;
            cout << "Kol-vo:" << fl << "\n";
        f1.close();
        }

    void Algorithm::algorithm_2(std::list<lab9_space::Wear>::iterator begin, std::list<lab9_space::Wear>::iterator end){
        int i1=0,i2=0;
        while (begin != end) {
            begin++;
            if (begin == end) break;
            i1++;
            if ((*begin).cost > 10) {
                i2++;
            }
        }
        if(i1==i2) cout<<"Condition is met"<<endl;
        else cout<<"Condition isn't met"<<endl;
    }
    void Algorithm::algorithm_3(std::list<lab9_space::Wear>::iterator begin, std::list<lab9_space::Wear>::iterator end){
        fstream file;
        file.open("1txt.txt", ios::out);
        try {
            if (!file.is_open()) throw 1;
        }
        catch (int i)
        {
            Exception ex(i);
            ex.Print();
        }
        while(begin!=end){
            if ((*begin).cost > 10) {
                file << (*begin).get_name();
                file << " ";
                file << (*begin).get_cost();
                file << " ";
                file << (*begin).get_id();
                file << " ";
                file << "\n";
            }
            begin++;
        }
        file.close();
    }

}
