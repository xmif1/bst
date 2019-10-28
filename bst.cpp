#include <iostream>
#include "bst.h"

Node* BinaryST::get_root(){
    return root;
}

void BinaryST::insert(int val){
    insert(val, root);
}

void BinaryST::insert(int val, Node* curr_node){
    if(curr_node->value > val){
        if(curr_node->get_left_child() == nullptr){
            Node new_node = Node(val);
            curr_node->set_left_child(&new_node);
            size++;
        }
        else{
            insert(val, curr_node->get_left_child());
        }
    }
    else if(curr_node->value == val){
        cout << "Duplicate values keyed into Binary Search Tree - ignoring!" << endl;
    }
    else{
        if(curr_node->get_right_child() == nullptr){
            Node new_node = Node(val);
            curr_node->set_right_child(&new_node);
            size++;
        }
        else{
            insert(val, curr_node->get_right_child());
        }
    }
}

Node* BinaryST::search(int val){
    return search(val, root);
}

Node* BinaryST::search(int val, Node* curr_node){
    if(curr_node->value == val){
        return curr_node;
    }
    else if(curr_node->value > val){
        return search(val, curr_node->get_left_child());
    }
    else{
        return search(val, curr_node->get_right_child());
    }
}

int BinaryST::get_size(){
    return size;
}

