#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tr){
    std::cout << "ShrubberyCreationForm Constructor with target" << std::endl;
    this->target = tr;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf)
{
    this->target = scf.target;
}

// ShrubberyCreationForm::ShrubberyCreationForm(std::string tr, const std::string sh_name, bool sh_is_sign, const int sh_grade_sig, const int sh_grade_exe) : AForm(sh_name, sh_is_sign, sh_grade_sig, sh_grade_exe)
// {
//     this->target = tr;
//     std::cout << "parametrized Constructor" << std::endl;
// }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    this->target = rhs.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Desstructor" << std::endl;
}

void ShrubberyCreationForm::action() const
{
    std::ofstream outfile;
    std::string fileName = this->target + "__shrubbery";
    outfile.open(fileName);
    outfile << "    oxoxoo    ooxoo" << std::endl;
    outfile << "  ooxoxo oo  oxoxooo" << std::endl;
    outfile << " oooo xxoxoo ooo ooox" << std::endl;
    outfile << "  oxo o oxoxo  xoxxoxo" << std::endl;
    outfile << "  oxo xooxoooo o ooo" << std::endl;
    outfile << "    ooo\\oo\\  /o/o" << std::endl;
    outfile << "        \\ \\/ /" << std::endl;
    outfile << "         |   /" << std::endl;
    outfile << "         |  |" << std::endl;
    outfile << "         | D|" << std::endl;
    outfile << "         |  |" << std::endl;
    outfile << "         |  |" << std::endl;
    outfile << "         |  |" << std::endl;
    outfile << "  ______/____\\____" << std::endl;
    outfile << "  .....//||||\\...." << std::endl;
    outfile.close();
}
