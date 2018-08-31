#include <string>
#include <iostream>

#include "tbsys/linklist.h"
typedef struct Node{
    std::string name;
    std::size_t age;
    Node* _prev;
    Node* _next;
    Node():name("xxx"),age(0),_prev(nullptr),_next(nullptr){}
    Node(std::string _name,std::size_t _age):name(_name),age(_age),_prev(nullptr),_next(nullptr){}
}Node,*pNode;

int main(){
    Node n1("cxh",111);
    Node n2("jack",112);
    Node n3("lilei",113);
    Node n4("hameimei",114);
    Node n5("tom",115);
    Node n6("luc",116);

    tbsys::LinkList<Node> la;
    tbsys::LinkList<Node> lb;
    la.append(&n1);
    la.append(&n2);
    la.append(&n6);
    std::cout << std::boolalpha << la.empty() << std::endl;
    lb.append(&n3);
    lb.append(&n5);
    lb.append(&n4);
    std::cout << std::boolalpha << lb.empty() << std::endl;
    la.combine(lb);

    auto head = la.head();
    std::cout << "la head :" << head->name << "\t" << head->age << std::endl;
    auto tail = la.tail();
    std::cout << "la tail :" << tail->name << "\t" << tail->age << std::endl;
    return 0;
}
