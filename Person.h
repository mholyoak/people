//
// Created by Mitch Holyoak on 11/21/18.
//

#ifndef PEOPLE_PERSON_H
#define PEOPLE_PERSON_H

#include <string>

class IPerson {
public:
    virtual ~IPerson(){}
    virtual std::string GetFirstName() const = 0;
    virtual std::string GetLastName() const = 0;
    virtual int GetAge() const = 0;
};

class Person : public IPerson {
public:
    Person(std::string firstName, std::string lastName, int age);

    std::string GetFirstName() const override;
    std::string GetLastName() const override;
    int GetAge() const override;

private:
    std::string _firstName;
    std::string _lastName;
    int _age;
};


#endif //PEOPLE_PERSON_H
