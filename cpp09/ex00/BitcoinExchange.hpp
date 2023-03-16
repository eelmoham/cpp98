#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

void fill(std::ifstream &input, std::map<std::string, std::string> &data);
std::pair<std::string, std::string> saveSpliter(std::string &line);

//function to check if date is valid
bool isDateValid(std::string date);


#endif