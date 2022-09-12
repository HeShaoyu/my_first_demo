#include <solider.h>

Solider::Solider(std::string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
}

void Solider::add_gun(Gun * ptr)
{
    this->_ptr_gun = ptr;
}

void Solider::add_bullet_to_gun(int num)
{
    this->_ptr_gun->add_bullet(num);

}
void Solider::fire()
{
    this->_ptr_gun->shoot();
}

Solider::~Solider()
{
    if (this->_ptr_gun == nullptr)
    {
        return;
    }
    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}