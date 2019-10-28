#include "node.h"

Node* Node::get_left_child() {
    return left_child;
}

Node* Node::get_right_child() {
    return right_child;
}

void Node::set_left_child(Node* lc_ptr) {
    left_child = lc_ptr;
}

void Node::set_right_child(Node* rc_ptr) {
    right_child = rc_ptr;
}