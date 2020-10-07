#include <iostream>
#include <string>
using namespace std;

struct Person{
    int edad;
    string nombre;

    Person* left;
    Person* right;

    Person() : left(nullptr), right(nullptr) {}   
    Person(int age, string name) : edad(age), nombre(name), left(nullptr), right(nullptr) {}

    Person* operator*(Person persona){
        return this;
    }

};


template <typename Node>
class BSTree{
        Node* root;

    public:

        BSTree(): root(nullptr) {};

        void insert(Node persona) {
            Node* persona_ptr = &persona;
            insert(root, persona_ptr);
        }

        void displayInOrder(){
            displayInOrder(root);
        }
                   
        void displayPostOrder(){
            displayPostOrder(root);
        }

        void displayPreOrder(){
            displayPreOrder(root);
        }


        void insert(Node* &root, Node* &persona);
        void displayInOrder(Node* node);
        void displayPostOrder(Node* node);
        void displayPreOrder(Node* node);

};

template <typename Node>
void BSTree<Node>::insert(Node* &node, Node* &persona_ptr){
    if(node == nullptr)    
        node = persona_ptr;
    else if(persona_ptr->edad < node->edad)
        insert(node->left, persona_ptr);
    else 
        insert(node->right, persona_ptr);    
}

template <typename Node>
void BSTree<Node>::displayInOrder(Node* node){
    if(node->left != nullptr)
        displayInOrder(node->left);
    
    cout << node->edad << " - " << node->nombre << endl;
    if(node->right != nullptr)
        displayInOrder(node->right);
}

template <typename Node>
void BSTree<Node>::displayPostOrder(Node* node){
    if(node->left != nullptr)
        displayPostOrder(node->left);
    
    if(node->right != nullptr)
        displayPostOrder(node->right);
        
    cout << node->edad << " - " << node->nombre << endl;
}

template <typename Node>
void BSTree<Node>::displayPreOrder(Node* node){
    cout << node->edad << " - " << node->nombre << endl;
    
    if(node->left != nullptr)
        displayPreOrder(node->left);
    
    if(node->right != nullptr)
        displayPreOrder(node->right);            
}