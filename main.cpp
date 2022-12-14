//
// Created by Simon on 2022/12/4.
//


#include <iostream>
#include <string>
#include <stdlib.h>
//#include <cstdio>
#include "function.h"
using namespace std;

#define MAX 1000



int main(void){

    Function txl_function;
    Person* head=new Person();
    bool loop=true;
    while(loop){
        txl_function.showMenu();
        cout<<"请输入命令：";
        int order;
        cin>>order;
        switch(order){
            case 1:
                txl_function.addPerson(head);
                break;
            case 2:
                txl_function.showPerson(head);
                break;
            case 3:
                txl_function.deletePerson(head);
                break;
            case 4:
                txl_function.searchPerson(head);
                break;
            case 5:
                txl_function.changePerson(head);
                break;
            case 6:
                txl_function.clearPerson(head);
                break;
            case 7:
                loop=false;
                cout<<"退出通讯录"<<endl;
                return 0;
                break;
            default:
                cout<<"命令错误，请重新输入"<<endl;
                break;
        }
//        system("pause");
//        system("cls");
    }



    cin.get();
    return 0;
}