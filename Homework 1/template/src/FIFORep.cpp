/* @Author
Student Name: 
Student ID : 
Date: 
*/
#include <iostream> 
#include <stdio.h>
#include <string.h>

#include "ProcessRep.h"
#include "FIFORep.h"

using namespace std;

FIFORep::FIFORep()
{
    /*
        YOUR CODE HERE
    */
}

FIFORep::FIFORep(ProcessRep* head)
{
    /*
        YOUR CODE HERE
    */
}


FIFORep::~FIFORep()
{
}

void FIFORep::setHead(ProcessRep* head)
{
    /*
        YOUR CODE HERE
    */
}

ProcessRep* FIFORep::getHead()
{
    /*
        YOUR CODE HERE
    */
}

void FIFORep::setTail(ProcessRep* tail)
{
    /*
        YOUR CODE HERE
    */
}

ProcessRep* FIFORep::getTail()
{
    /*
        YOUR CODE HERE
    */
}

void FIFORep::queue(ProcessRep* p)
{
    /*
        The function add a process to the tail of the queue.
    */
    /*
        YOUR CODE HERE
    */
}

ProcessRep* FIFORep::dequeue()
{   
    /*
        The function remove a process from the tail of the queue and returns it.
    */   
    /*
        YOUR CODE HERE
    */
}

ProcessRep* FIFORep::searchID(int id)
{   
    /*
        The function search a process by id and returns it if it exist otherwise returns NULL.
    */ 
    /*
        YOUR CODE HERE
    */
}

void FIFORep::printFIFO()
{
    /*
        The function prints the proceses in the queue starting from Head to tail.
    */
    /*
        YOUR CODE HERE
    */
}
