#include "gun.h"
#include <iostream>
void Gun::add_bullet(int num)
{
    this->_bullet_count += num;
}

bool Gun::shoot()
{
    if (this->_bullet_count <= 0)
    {
        std::cout << "没有子弹！！" << std::endl;
        return false;
    }
    this->_bullet_count--;
    std::cout << "发射成功" << std::endl;
    return true;
}