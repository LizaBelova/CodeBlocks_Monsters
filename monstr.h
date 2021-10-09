#ifndef MONSTR_H
#define MONSTR_H
#include <QString>
#include <string>

using namespace std;

class monstr
{
private:
    string _name;
    int _health=0;
    int _atk=0;
    static int count_monstrs;
public:
    monstr();
    monstr(const monstr &m);
    monstr(string name, int health, int atk);
    const int get_health();
    const int get_atk();
    string get_name();
    void set_health(int health);
    void set_atk(int atk);
    void monstr_stat();
    static const int get_count();
    static monstr megazorg(monstr &m1, monstr &m2);
    ~monstr();
};

#endif // MONSTR_H
