#ifndef INTEGERLINKEDLIST_H
#define INTEGERLINKEDLIST_H

// Declaration
class IntegerNode;

class IntegerLinkedList{

   public:
      IntegerLinkedList();
      ~IntegerLinkedList();
      bool IsEmpty() const;
      void AddFront();
      void RemoveFront();
      void DisplayIntegerLinkedList() const;
      void DisplayAverage() const;
      void MakeChoice();
   private:
      IntegerNode *head;
      int choice;
};


#endif //INTEGERLINKEDLIST_H
