#include "CodeBuilder.hpp"

std::string CodeSnippet::str(int indent) const {
		std::ostringstream oss;
		std::string i(indent_size * indent, ' ');

		oss << i << "class " << class_name << std::endl << "{" << std::endl;

		if (!elements.empty()) {
			for (const auto& e : elements) {
				oss << std::string(indent_size * (indent + 1), ' ') << e.type << " " << e.name << ";" << std::endl;
			}
		}

		oss << i << "};" << std::endl;

		return oss.str();
	}

CodeBuilder::CodeBuilder(const std::string& class_name)
{
	root.class_name = class_name;
}

CodeBuilder& CodeBuilder::add_field(const std::string& name, const std::string& type)
{
	root.elements.push_back(CodeSnippet::attributes{ type, name });

	return *this;
}

std::string CodeBuilder::str() const {
	return root.str();
}

std::ostream& operator<<(std::ostream& os, const CodeBuilder& obj)
{
	os << obj.str();

	return os;
}

