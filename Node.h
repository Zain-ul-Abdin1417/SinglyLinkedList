#ifndef Node_H_LinkedList
#endif //NNode_H_LinkedList
template <typename dataType>
class Node{
public:
    dataType data;
    Node<dataType>* next; // address of next node.
    Node<dataType>* prev;
  explicit Node(){
        data;
        next = nullptr;
        prev = nullptr;
    }
};