//
// Created by Mitch Holyoak on 11/21/18.
//

#include "Person.h"

Person::Person(std::string firstName, std::string lastName, int age) :
    _firstName(firstName),
    _lastName(lastName),
    _age(age)
{

}

std::string Person::GetFirstName() const
{
    return _firstName;
}

std::string Person::GetLastName() const
{
    return _lastName;
}

int Person::GetAge() const
{
    return _age;
}
