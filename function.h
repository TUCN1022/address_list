//
// Created by Simon on 2022/12/4.
//

#ifndef TXL_TONGXUNLU_H
#define TXL_TONGXUNLU_H

#endif //TXL_TONGXUNLU_H
#define MAX 1000
#pragma once

#include <iostream>
#include <string>


using namespace std;

struct Person{
    string name;
    string gender;
    int age;
    string phone;
    string address;
    Person* next=NULL;
};



class Function{



public:
    void addPerson(Person* head);

    void showPerson(Person* head);

    void deletePerson(Person* head);

    void searchPerson(Person* head);

    void changePerson(Person* head);

    void clearPerson(Person* head);

    void showMenu();

    bool personIsExist(Person* head,string name);
};

