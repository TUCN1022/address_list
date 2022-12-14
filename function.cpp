//
// Created by Simon on 2022/12/5.
//


#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include "function.h"

using namespace std;



void Function::showMenu(){
    string menu="=================================\n"
                "=\t\t\t1.添加联系人\t\t\t=\n"
                "=\t\t\t2.显示联系人\t\t\t=\n"
                "=\t\t\t3.删除联系人\t\t\t=\n"
                "=\t\t\t4.查找联系人\t\t\t=\n"
                "=\t\t\t5.修改联系人\t\t\t=\n"
                "=\t\t\t6.清空联系人\t\t\t=\n"
                "=\t\t\t7.退出通讯录\t\t\t=\n"
                "=================================";
    cout<<menu<<endl;
}

void Function::addPerson(Person* head){
    //添加内容包括姓名，性别，年龄，电话，家庭
    cout<<"添加联系人"<<endl;
    Person* p=head;
    while (p->next!=NULL){
        p=p->next;
    }
    Person* node=new Person();
    p->next=node;
    cout<<"请输入联系人姓名：";
    cin>>node->name;
    getchar();
    cout<<"请输入联系人性别：";
    cin>>node->gender;
    getchar();
    cout<<"请输入联系人年龄：";
    cin>>node->age;
    getchar();
    cout<<"请输入联系人电话：";
    cin>>node->phone;
    getchar();

    cout<<"请输入联系人家庭住址：";
    cin>>node->address;
    getchar();

}

void Function::showPerson(Person* head){
    cout<<"显示联系人"<<endl;
    Person* p=head;
    int no=0;
    while(p->next!=NULL){
        p=p->next;
        cout<<"=================="<<endl;
        cout<<"编号："<<no++<<endl;
        cout<<"姓名："<<p->name<<endl;
        cout<<"性别："<<p->gender<<endl;
        cout<<"年龄："<<p->age<<endl;
        cout<<"电话："<<p->phone<<endl;
        cout<<"家庭住址："<<p->address<<endl;


    }
}

void Function::deletePerson(Person* head){
    cout<<"删除联系人"<<endl;
    Person* p=head;
    cout<<"请输入要删除的联系人的姓名：";
    string deleteName;
    cin>>deleteName;
    
    bool findout=personIsExist(head,deleteName);

    if (findout== false){
        cout<<"没有找到该联系人"<<endl;
        return ;
    }
    else{
        cout<<"找到该联系人："<<endl;
        while(p->next!=NULL && p->next->name!=deleteName){
            p=p->next;
        }
        p->next=p->next->next;
    }
}

void Function::searchPerson(Person* head){
    cout<<"查找联系人"<<endl;
    Person* p=head;
    cout<<"请输入要查找的联系人的姓名：";
    string searchName;
    cin>>searchName;
    
    bool findout=personIsExist(head,searchName);

    if (findout== false){
        cout<<"没有找到该联系人"<<endl;
        return ;
    }
    else{
        cout<<"找到该联系人："<<endl;
        while(p->next!=NULL && p->next->name!=searchName){
            p=p->next;
        }
        p=p->next;
        cout<<"=================="<<endl;
        cout<<"姓名："<<p->name<<endl;
        cout<<"性别："<<p->gender<<endl;
        cout<<"年龄："<<p->age<<endl;
        cout<<"电话："<<p->phone<<endl;
        cout<<"家庭住址："<<p->address<<endl;
        cout<<"=================="<<endl;
    }
}

void Function::changePerson(Person* head){
    cout<<"修改联系人"<<endl;
    Person* p=head;
    cout<<"请输入要修改的联系人的姓名：";
    string changeName;
    cin>>changeName;
    
    bool findout=personIsExist(head,changeName);

    if (findout== false){
        cout<<"没有找到该联系人"<<endl;
        return ;
    }
    else{
        cout<<"找到该联系人："<<endl;
        while(p->next!=NULL && p->next->name!=changeName){
            p=p->next;
        }
        p=p->next;
        cout<<"请重新输入需要修改的联系人的所有信息"<<endl;
        cout<<"请输入联系人姓名：";
        cin>>p->name;
        getchar();
        
        cout<<"请输入联系人性别：";
        cin>>p->gender;
        getchar();
        
        cout<<"请输入联系人年龄：";
        cin>>p->age;
        getchar();
        
        cout<<"请输入联系人电话：";
        cin>>p->phone;
        getchar();
        
        cout<<"请输入联系人家庭住址：";
        cin>>p->address;
        getchar();
        
    }
}

void Function::clearPerson(Person* head){
    cout<<"清空联系人"<<endl;
    head->next=NULL;
}

bool Function::personIsExist(Person* head, string name){
    Person* p=head;
    bool findout=false;
    while(p->next!=NULL){
        p=p->next;
        if(name==p->name){
            return true;
        }
    }
    return findout;
}