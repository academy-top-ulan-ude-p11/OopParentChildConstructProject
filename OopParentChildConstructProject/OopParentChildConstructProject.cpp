#include <iostream>

class Parent
{
private:
    int iprivate;
protected:
    int iprotect;
public:
    int ipublic;
    /*
    Parent()
    {
        std::cout << this << " parent constract\n";
    }
    ~Parent()
    {
        std::cout << this << " parent destruct\n";
    }
    */
};

class Child : protected Parent
{
private:
    void PrivMethod()
    {
        ipublic = 100;
        iprotect = 100;
        iprivate = 100;
    }
protected:
    void ProtMethod()
    {
        ipublic = 100;
        iprotect = 100;
        iprivate = 100;
    }
public:
    void PublMethod()
    {
        ipublic = 100;
        iprotect = 100;
        iprivate = 100;
    }
    /*
    Child()
    {
        std::cout << this << " child constract\n";
    }
    ~Child()
    {
        std::cout << this << " child destruct\n";
    }
    */
};

/*
class StepChild : public Parent
{
public:
    StepChild()
    {
        std::cout << this << " stepchild constract\n";
    }
    ~StepChild()
    {
        std::cout << this << " stepchild destruct\n";
    }
};

class GrandChild : public Child
{
public:
    GrandChild()
    {
        std::cout << this << " grandchild constract\n";
    }
    ~GrandChild()
    {
        std::cout << this << " grandchild destruct\n";
    }
};
*/

int main()
{
    Child child;
    child.iprivate = 100;
    child.iprotect = 100;
    child.ipublic = 100;
    
}
