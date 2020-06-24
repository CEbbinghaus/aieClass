#include <string>

class Cat
{
public:
    Cat(std::string name, int numberOfLegs = 4, int health = 100, bool canFly = false);

    void SetNumberOfLegs(int newLegNumber);
    int GetNumberOfLegs();

    void SetHealth(int newHealth);
    int GetHealth();

    void SetCanFly(bool canFly);
    bool GetCanFly();

    void SetName(std::string newName);
    std::string GetName();

private:
    int m_NumberOfLegs;
    int m_Health;
    bool m_CanFly;
    std::string m_Name;
};