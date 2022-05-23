/*
   Program Created By : Charlie with Occident Tech Software
   Check out my website!--->https://home.civdev.xyz

*/



#include "IntegerLinkedList.h"
#include <cstddef>
#include <iostream>
#include "IntegerNode.h"


IntegerLinkedList::IntegerLinkedList()
{
   head = NULL;

}


IntegerLinkedList::~IntegerLinkedList()
{
   while (!IsEmpty()) RemoveFront();

}


void IntegerLinkedList::MakeChoice()
{



   while (true){

     std::cout << "     ----Welcome to Charlie's GPA Calculator----" << std::endl
               << "----Enter an integer number to chose an operation----" << std::endl;

     std::cout << "1. Add GPA score to front of the list." << std::endl
               << "2. Remove value from front of the list." << std::endl
               << "3. Display List of GPA values." << std::endl
               << "4. Find the average GPA value of the list." << std::endl
               << "Enter any other integer number to quit." << std::endl;


     std::cin >> choice;

     if (choice < 1 || choice > 4){

        break;

     }

     switch(choice){

        case 1: AddFront();
                break;
        case 2: RemoveFront();
                break;
        case 3: DisplayIntegerLinkedList();
                break;
        case 4: DisplayAverage();
                break;
        default:
        std::cout << "Quitting..." << std::endl;
                break;

     }

   }

}


bool IntegerLinkedList::IsEmpty()
{

   return head == NULL;

}



void IntegerLinkedList::AddFront()
{

   int tempvar;
   iter = 0;

   while (iter < 5){
      std::cout << "Enter an integer representative of"
                << " your GPA with values 0 through 4: " << std::endl;

      std::cin >> tempvar;

      if (tempvar < 0 || tempvar > 4){

         MakeChoice();

      }else {

         IntegerNode *v = new IntegerNode;
         v->gpa = tempvar;
         v->next = head;
         head = v;

      }
      iter++;

   }

   return;

  /* IntegerNode *v = new IntegerNode;
   v->gpa = e;
   v->next = head;
   head = v;*/

}


void IntegerLinkedList::RemoveFront()
{

   if (!IsEmpty()){

       IntegerNode *oldptr = head;
       head = oldptr->next;
       delete oldptr;
    };


}

void IntegerLinkedList::DisplayIntegerLinkedList()
{
   IntegerNode *tempnode;
   tempnode = head;

   while (tempnode != NULL){

      std::cout << "-->" << tempnode->gpa << "--";
      tempnode = tempnode->next;

    };
    std::cout << std::endl << std::endl;

}


void IntegerLinkedList::DisplayAverage()
{
   IntegerNode *tempcurr;
   tempcurr = head;

   while (tempcurr != NULL){
      count++;
      sum += tempcurr->gpa;
      tempcurr = tempcurr->next;
   }

   average = (double)sum / count;

   std::cout << "\nThe average gpa is " << average <<std::endl
             << "If the average is zero, either you try really hard"
             << " to not give effort, or the list is empty." << std::endl;

}
