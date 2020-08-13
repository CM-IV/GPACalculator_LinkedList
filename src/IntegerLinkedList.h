#ifndef INTEGERLINKEDLIST_H
#define INTEGERLINKEDLIST_H


class IntegerNode;

class IntegerLinkedList{

   public:
      IntegerLinkedList();
      ~IntegerLinkedList();
      bool IsEmpty();
      void AddFront();
      void RemoveFront();
      void DisplayIntegerLinkedList();
      void DisplayAverage();
      void MakeChoice();
   private:
      IntegerNode *head;
      int choice;
      int sum = 0;
      int count = 0;
      int iter = 0;
      float average = 0.0;

};





#endif
