#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

// #include <iostream>
#include <iostream>

class Bureaucrat
{
	private:
		std::string Name;
		int grade;
	public:
		int getGrade() const ; //ok
		std::string getName() const; //ok
		Bureaucrat(); //ok
		Bureaucrat(int _grade, std::string _name); //..
		Bureaucrat(const Bureaucrat &New); //ok
		Bureaucrat& operator=(const Bureaucrat &rhs); //ok
		~Bureaucrat();
};

#endif