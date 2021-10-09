# CodeBlocks_Monsters

http://h-l-l.ru/publ/41-1-0-81 Конструктор и деструктор
 

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
class Monster
{
private:
    int health;
    int power;
public:
    Monster()
    {
        health = 0;
        power = 0;
    }
    int getHealth() const
    {
        return health;
    }
    int getPower() const
    {
        return power;
    }
    void setHealth(const int set)
    {
        if(set <= 0)
        {
            health = 1;
        }
        else if(set > 100)
        {
            health = 100;
        }
        else
            health = set;
        checkCorrectValue();
    }
    void setPower(const int set)
    {
        if(set <= 0)
        {
            power = 1;
        }
        else if(set > 100)
        {
            power = 100;
        }
        else
            power = set;
        checkCorrectValue();
    }
    void checkCorrectValue()
    {
        if(health == 0 || power == 0)
            return;
        if(health + power > 150)
        {
        }
        else if(health + power < 50)
        {
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Monster monstr, nekromant;
    int monstrHP, nekromantHP, monstrPower, nekromantPower;
    monstrHP = nekromantHP = monstrPower = nekromantPower = 0;

    cout << "Введите значение здоровья и силу Монстра: ";
    cin >> monstrHP >> monstrPower;

    cout << "Введите значение здоровья  и силу Некроманта: ";
    cin >> nekromantHP >> nekromantPower;

    monstr.setHealth(monstrHP);
    monstr.setPower(monstrPower);
    nekromant.setHealth(nekromantHP);
    nekromant.setPower(nekromantPower);

    cout << "Новые значения:" << endl;
    cout << "Monstr: \n\t health: " << monstr.getHealth() << "\n\t power: " << monstr.getPower() << "  " << endl;
    cout << "Nekromant: \n\t health: " << nekromant.getHealth() << "\n\t power: " << nekromant.getPower() << "  " << endl;
    system("pause");
    return 0;
}



/*
#include <iostream>

using namespace std;

class monstr{
private:
    int health,strength,submit;
    string name;
    bool puding;
public:
    monstr(){}
    //~monstr()
    void setmonstr(){
        cin >> name;
        cin >> health;
        cin >> strength;
        cin >> submit;
        cin >> puding;
    }
    void getmonstr(){
        cout<< endl << name << endl<< health << strength <<endl;
    }
    monstr::~monstr() {delete [] name;}
};


/*
class nekromant{
    int _health, _mana;
public:
    string _name;
    int get_health(){return _health;}
	int get_mana(){return _mana;}
    monstr herd[100];
private:
    int _powerconq;
};
*/
int main()
{
    monstr obj1;
    obj1.setmonstr();
    obj1.getmonstr();
    return 0;
}

*/
