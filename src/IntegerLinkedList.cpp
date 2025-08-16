#include "../include/IntegerLinkedList.h"
#include "../include/IntegerNode.h"
#include <iostream>

IntegerLinkedList::IntegerLinkedList()
{
   head = nullptr;
}


IntegerLinkedList::~IntegerLinkedList()
{
   while (!IsEmpty()) RemoveFront();
}

void IntegerLinkedList::MakeChoice()
{
   while (true) {
        std::cout << "\n----Welcome to Charlie's GPA Calculator----\n"
                  << "----Enter an integer number to choose an operation----\n"
                  << "1. Add GPA score to front of the list.\n"
                  << "2. Remove value from front of the list.\n"
                  << "3. Display List of GPA values.\n"
                  << "4. Find the average GPA value of the list.\n"
                  << "Enter any other integer number to quit.\n";

        std::cin >> choice;

        if (choice < 1 || choice > 4) {
            std::cout << "Quitting...\n";
            break;
        }

        switch (choice) {
            case 1:
                AddFront();
                break;
            case 2:
                RemoveFront();
                break;
            case 3:
                DisplayIntegerLinkedList();
                break;
            case 4:
                DisplayAverage();
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
}

bool IntegerLinkedList::IsEmpty() const
{
   return head == nullptr;
}

void IntegerLinkedList::AddFront()
{
   int tempvar;

   while (true){
      std::cout << "Enter an integer representative of"
                << " your GPA with values 0 through 4: " << std::endl;

      std::cin >> tempvar;

      if (tempvar >= 0 && tempvar <= 4)
      {
         break;
      } else {
         std::cout << "Invalid GPA, enter a value between 0 and 4.\n";
      }
   }

   IntegerNode *v = new IntegerNode(tempvar);

   v->set_next(head);
   head = v;
}


void IntegerLinkedList::RemoveFront()
{
   if (IsEmpty())
   {
      std::cout << "List is empty, cannot remove front.\n";
      return;
   }

   IntegerNode* old_ptr = head;
   head = old_ptr->get_next();
   delete old_ptr;
   std::cout << "Front element removed.\n";
}

void IntegerLinkedList::DisplayIntegerLinkedList() const
{
   if (IsEmpty()) {
        std::cout << "List is empty.\n";
        return;
    }

    std::cout << "GPA List: ";
    IntegerNode* currentNode = head;
    while (currentNode != nullptr)
    {
        std::cout << "-->" << currentNode->get_gpa() << "--";
        currentNode = currentNode->get_next();
    }
    std::cout << "nullptr\n";
}


void IntegerLinkedList::DisplayAverage() const
{
   if (IsEmpty()) {
        std::cout << "List is empty. Average is 0.0.\n";
        return;
    }

    int sum = 0;
    int count = 0;
    float average = 0.0f;

    IntegerNode* currentNode = head;
    while (currentNode != nullptr) {
        sum += currentNode->get_gpa();
        count++;
        currentNode = currentNode->get_next();
    }

    if (count > 0)
    {
      average = static_cast<float>(sum) / count;
      std::cout << "\nThe average GPA is: " << average << "\n";
    } else {
      std::cout << "\nError calculating average: Count is zero.\n";
    }
}
