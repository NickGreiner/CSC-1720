
#include <iostream>
#include "orderedArrayListType.h" 

using namespace std; 
 
void orderedArrayListType::insertAt(int location, 
                                      int insertItem) 
{
    insert(insertItem);
} //end insertAt

void orderedArrayListType::insertEnd(int insertItem)
{
    insert(insertItem);
} //end insertEnd

void orderedArrayListType::insert(int insertItem)
{
    if (length == 0)	//list is empty
        list[length++] = insertItem; //insert insertItem and increment length
    else if (length == maxSize)
        cout << "Cannot insert in a full list." << endl;
    else
    {
        //Find the location in the list where to insert insertItem/
        int loc;

        bool found = false;

        for (loc = 0; loc < length; loc++)
        {
            if (list[loc] == insertItem)
            {
                found = true;
                break;
            }
        }

        for (int i = length; i = loc; i--)
            list[i] = list[i - 1]; //move the elements down

        list[loc] = insertItem; //insert insertItem
        length++; //increment the length
    }
} //end insert

int orderedArrayListType::seqSearch(int searchItem) const
{
    int loc;
    bool found = false;

    loc = 0;

    while (loc < length && !found && (list[loc] <= searchItem))
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch


void orderedArrayListType::remove(int removeItem)
{
    int loc;

    if (length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
} //end remove

void orderedArrayListType::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be "
             << "replaced is out of range." << endl;
    else
        list[location] = repItem;
} //end replaceAt

const orderedArrayListType& orderedArrayListType::operator=(const orderedArrayListType& otherList)
{
   delete [] list;
   maxSize = otherList.maxSize;
   length = otherList.length;

   list = new int[maxSize];

   for (int i = 0; i < length; i++)
      list[i] = otherList.list[i];

   return *this;
}

ostream& operator<<(ostream& osObject, const orderedArrayListType& cObject)
{
   return osObject;
}

orderedArrayListType::orderedArrayListType(int size)
                       : arrayListType(size)
{
}  //end constructor


