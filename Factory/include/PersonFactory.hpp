#pragma once

#ifndef PERSONFACTORY_H_
#define PERSONFACTORY_H_

#include <string>
#include <sstream>
#include <ostream>
#include <iostream>

struct Person
{
	int id;
	std::string name;

	Person(int id, std::string name) : id(id), name(name) {}

	friend std::ostream& operator<<(std::ostream& os, const Person& person);
	friend class PersonFactory;
};

class PersonFactory
{
private:
	int id{ 0 };
public:
	Person create_person(const std::string& name);
};

#endif  /* PERSONFACTORY_H_ */