#include "PersonFactory.hpp"

std::ostream& operator<<(std::ostream& os, const Person& person)
{
    os << "id: " << person.id << " name: " << person.name;
	return os;
}

Person PersonFactory::create_person(const std::string& name)
{
    return { id++, name };
}