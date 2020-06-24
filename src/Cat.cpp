#include <Cat.h>

    Cat::Cat(std::string name, int numberOfLegs, int health, bool canFly)
    {
        m_Name = name;
        m_NumberOfLegs = numberOfLegs;
        m_Health = health;
        m_CanFly = canFly;
    }

    void Cat::SetNumberOfLegs(int newLegNumber)
    {
        m_NumberOfLegs = newLegNumber;
    }
    int Cat::GetNumberOfLegs()
    {
        return m_NumberOfLegs;
    }

    void Cat::SetHealth(int newHealth)
    {
        m_Health = newHealth;
    }
    int Cat::GetHealth()
    {
        return m_Health;
    }

    void Cat::SetCanFly(bool canFly)
    {
        m_CanFly = canFly;
    }
    bool Cat::GetCanFly()
    {
        return m_CanFly;
    }

    void Cat::SetName(std::string newName)
    {
        m_Name = newName;
    }
    std::string Cat::GetName()
    {
        return m_Name;
    }