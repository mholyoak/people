#include <iostream>

#include "Person.h"
#include <vector>

int main() {
    std::cout << "Hello, People!" << std::endl;

    std::vector<std::shared_ptr<IPerson>> people;

    people.push_back(std::make_shared<Person>("John", "Doe", 10));

    people.push_back(std::make_shared<Person>("Sue", "Kitchens", 15));


    for (auto person : people)
    {
        std::cout << "Person: " <<
            person->GetFirstName() << " " <<
            person->GetLastName() << " " <<
            std::to_string(person->GetAge()) <<
            std::endl;
    }


    std::cout << "Exit" << std::endl;

    return 0;
}