#pragma once

#include <string>
#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>

#ifndef CODESNIPPET_H
#define CODESNIPPET_H
class CodeSnippet
{
	std::string class_name;
	const size_t indent_size = 2;

	struct attributes {
		std::string type;
		std::string name;

		attributes() {}
		attributes(const std::string& type, const std::string& name) : type(type), name(name) {}
	};

	std::vector<attributes> elements;

public:
	CodeSnippet() {}
	CodeSnippet(const std::string& class_name) : class_name(class_name) {}

	std::string str(int indent = 0) const;

	friend class CodeBuilder;
};
#endif

#ifndef CODEBUILDER_H
#define CODEBUILDER_H
class CodeBuilder
{
	CodeSnippet root;

public:
	CodeBuilder(const std::string& class_name);

	CodeBuilder& add_field(const std::string& name, const std::string& type);

	std::string str() const;

	friend std::ostream& operator<<(std::ostream& os, const CodeBuilder& obj);
};
#endif