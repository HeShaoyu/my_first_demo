#include <iostream>
template <typename T>
void swap1(T &a, T &b);
struct job
{
    char name[40];
    double salary;
    int floor;
};
template <> void swap1(job &a, job &b);
void show(job,job);
int main()
{
    using namespace std;
    job j1 = {"sarah", 40.1, 20};
    job j2 = {"mike", 99.9, 50};
    show(j1, j2);
    swap1(j1, j2);
    show(j1, j2);
    swap1(j1, j2);
    show(j1, j2);
    return 0;
}
template <typename T>
void swap1(T &a, T &b)
{
    job temp = a;
    a = b;
    b = temp;
}
template <> void swap1(job &a, job &b)
{
    double temp1 = a.salary;
    double temp2 = a.floor;
    a.salary = b.salary;
    a.floor = b.floor;
    b.salary = temp1;
    b.floor = temp2;
}
void show(job j1, job j2)
{
    std::cout << j1.name << "  " << j1.salary << "  " << j1.floor << "  " 
              << j2.name << "  " << j2.salary << "  " << j2.floor << std::endl;
}