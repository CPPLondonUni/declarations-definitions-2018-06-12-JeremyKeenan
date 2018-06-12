//
// Created by Jeremy Keenan on 12/06/2018.
//
#include "utility.h"

std::string ReadStringFromConsole() {
    std::string ret;
    std::cin >> ret;
    return ret;
}

std::string DescribePersonAsSomething(const std::string& person, const std::string& adjective) {
    return person + " is " + adjective;
}
