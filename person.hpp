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

           //my interpretation but i dont think its that good tbh LOL

        // virtual std::string evaluateText(std::string);
        // virtual std::string display(std::string) = 0; //i think we should change display 
        virtual void evaluateText(int) = 0;
        virtual void display(int) = 0;
        // virtual void evaluateText(Character, int);
        // virtual void display(Character, int);


};





#endif