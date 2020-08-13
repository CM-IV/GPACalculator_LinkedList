#ifndef INTEGERNODE_H
#define INTEGERNODE_H


class IntegerNode {
   friend class IntegerLinkedList;

   public:
      IntegerNode();
      IntegerNode(int);
      ~IntegerNode();
   private:
      int gpa;
      IntegerNode *next;


};


#endif
