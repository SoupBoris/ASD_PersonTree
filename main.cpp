#include <iostream>
#include "bst.h"

using namespace std;

int main()
{
    BSTree<Person> *arbolito = new BSTree<Person>();
    cout << "BST para gestionar Personas" << endl;
    arbolito->insert(Person(10, "David"));
    arbolito->insert(Person(20, "Alonso"));
    arbolito->insert(Person(4, "Bela"));
    arbolito->insert(Person(3, "Nicolas"));
    arbolito->insert(Person(2, "keila"));
    arbolito->insert(Person(23, "Bastian"));
    arbolito->insert(Person(32, "Luis"));
    arbolito->insert(Person(19, "Ailton"));
    arbolito->insert(Person(5, "Raul"));
    cout<<"InOrder-------------------------"<<endl;
    arbolito->displayInOrder();
    cout<<"PreOrder------------------------"<<endl;
    arbolito->displayPreOrder();
    cout<<"PostOrder-----------------------"<<endl;
    arbolito->displayPostOrder();
    cout<<"Arbolito bonito-----------------"<<endl;
    //arbolito->displayPretty();
    delete arbolito;
}