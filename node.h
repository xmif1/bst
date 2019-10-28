#ifndef NODE_H
#define NODE_H

class Node{
    public:
        int value;

        Node* get_left_child();
        Node* get_right_child();
        void set_left_child(Node*);
        void set_right_child(Node*);

        Node(int val){
            value = val;
            left_child = nullptr;
            right_child = nullptr;
        }

    private:
        Node* left_child;
        Node* right_child;
};

#endif