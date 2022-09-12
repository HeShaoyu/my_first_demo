#pragma once

#include <string>
#include <gun.h>
class Solider
{
public:
    Solider(std::string name);
    ~Solider();
    void add_gun(Gun * ptr);
    void add_bullet_to_gun(int num);
    void fire();
private:
    std::string _name;
    Gun * _ptr_gun;
};