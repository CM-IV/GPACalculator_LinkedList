#ifndef INTEGERNODE_H
#define INTEGERNODE_H


class IntegerNode {
   public:
      IntegerNode();
      IntegerNode(int);
      ~IntegerNode();

      int get_gpa() const;
      IntegerNode* get_next() const;

      void set_gpa(int new_gpa);
      void set_next(IntegerNode* new_next);
   private:
      int gpa;
      IntegerNode *next;

};


#endif // INTEGERNODE_H
