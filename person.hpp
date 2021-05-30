#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>
#include <string>

class Person {
    protected:
        std::string name;
    
    public:
        virtual std::string getName() {
            return name;
        }
        virtual void setName(std::string nameInput) {
            name = nameInput;
        }
        virtual void evaluateText() = 0;
        virtual void display() = 0;


};





#endif