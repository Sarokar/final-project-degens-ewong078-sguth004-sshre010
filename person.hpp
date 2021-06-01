#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>
#include <string>
#include "character.hpp"

class Person {
    protected:
        std::string name;
    
    public:
        Person() {
            name = "";
        }
        virtual std::string getName() {
            return name;
        }
        virtual void setName(std::string nameInput) {
            name = nameInput;
        }


        virtual void display(std::string) = 0;



};





#endif
