// Vector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <iterator> //Итератор - тоже что и указатель, только для вектора

class Person {
private:
    std::string _name;
    int _age;

public:
    Person(std::string name, int age) {
        _name = name;
        _age = age;
    }

    void ShowData() {
        std::cout << "Name: " << _name;
        std::cout << "Age: " << _age;

    }
};

int main()
{
    std::vector<int>vec = { 1, 10, 20 };
    std::vector<int>::iterator it;
    vec.push_back(5);//Изучить что означают эти функции - добавляет элемент в конец вектора
    vec.size();//возвращает размер вектора
    vec.pop_back();//Удаляет последний элемент
    vec.begin();//возвращает указатель первый элемент
    vec.end();//Возвращает указатель последний элемент
    vec.erase(vec.begin() + 2);//Удаляет объект (очень опасно, т.к. можно выйти за пределы вектора)
    vec.at(0) = 10;//Изменение значения по индексу

    for (int i = 0; i < vec.size(); i++)
        std::cout << vec.at(i);

    it = vec.begin();
    
    for (it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << ', ';//Применяем знак разыменования, иначе ошибка

    Person person1("Jon", 28);
    Person person2("Bob", 29);
    Person person3("Alex", 30);

    std::vector<Person>people;
    std::vector<Person>::iterator it;

    people.push_back(person1);
    people.push_back(person2);
    people.push_back(person3);

    for(it = vec.begin(); it != vec.end(); ++it)
    return 0;
}

