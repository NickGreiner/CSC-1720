#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType

#include <iostream>

#include <string>

using namespace std;
 
#include "arrayListType.h"
   
template <class elemType> 
class unorderedArrayListType: public arrayListType<elemType>
{
public:
    void insertAt(int location, const elemType& insertItem);
    void insertEnd(const elemType& insertItem);
    void replaceAt(int location, const elemType& repItem);
    int seqSearch(const elemType& searchItem) const;
    void remove(const elemType& removeItem);

    unorderedArrayListType(int size = 100);
      //Constructor
}; 

template <class elemType>
void unorderedArrayListType<elemType>::insertAt(int location, 
                                         const elemType& insertItem)
{
    if (location < 0 || location >= this->maxSize)
        cout << "The position of the item to be inserted is out of range." << endl;
    else if (this->length >= this->maxSize)
        cout << "Cannot insert in a full list." << endl;
    else
    {
        for (int i = this->length; i > location; i--)
            this->list[i] = this->list[i - 1];

        this->list[location] = insertItem;

        this->length++;
    }
} //end insertAt

template <class elemType>
void unorderedArrayListType<elemType>::insertEnd
                                 (const elemType& insertItem)
{
    if (this->length >= this->maxSize)  //the list is full
        cout << "Cannot insert in a full list." << endl;
    else
    {
       this-> list[this->length] = insertItem; //insert the item at the end
        this->length++; //increment the length
    }
} //end insertEnd

template <class elemType>
int unorderedArrayListType<elemType>::seqSearch
                            (const elemType& searchItem) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < this->length; loc++)
        if (this->list[loc] == searchItem)
        {
            found = true;
            break;
        }

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

template <class elemType>
void unorderedArrayListType<elemType>::remove
                               (const elemType& removeItem)
{
    int loc;

    if (this->length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            this->removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
} //end remove

template <class elemType>
void unorderedArrayListType<elemType>::replaceAt(int location, 
                                       const elemType& repItem)
{
    if (location < 0 || location >= this->length)
        cout << "The location of the item to be "
             << "replaced is out of range." << endl;
    else
        this->list[location] = repItem;
} //end replaceAt 

template <class elemType>
unorderedArrayListType<elemType>::
                       unorderedArrayListType(int size)
                       : arrayListType<elemType>(size)
{
}  //end constructor


#endif
