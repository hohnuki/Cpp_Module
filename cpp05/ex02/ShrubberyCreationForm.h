//
// Created by 大貫　弘貴 on 2022/07/04.
//

#ifndef CPP_MODULE_SHRUBBERYCREATIONFORM_H
#define CPP_MODULE_SHRUBBERYCREATIONFORM_H

#include <fstream>
#include "Form.h"

class ShrubberyCreationForm : public Form {
private:
	int const sSignableGrade = 145;
	int const sExecutableGrade = 137;

public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_MODULE_SHRUBBERYCREATIONFORM_H
