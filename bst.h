#ifndef BST_H
#define BST_H

#include "node.h"
using namespace std;

class BinaryST{
    public:
        Node* get_root();
        Node* search(int);
        int get_size();
        void insert(int);

        BinaryST(int val){
            Node r = Node(val);
            root = &r;
            size = 1;
        }

    private:
        Node* root;
        int size;

        Node* search(int, Node*);
        void insert(int, Node*);
};

#endif