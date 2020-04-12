#ifndef H_arrayListType
#define H_arrayListType

#include <iostream>

#include <string>

using namespace std;
 
template <class elemType>
class arrayListType  
{ 
public:
    const arrayListType<elemType>& 
                  operator=(const arrayListType<elemType>&);
       //Overloads the assignment operator

    bool isEmpty() const;
      //Function to determine whether the list is empty
      //Postcondition: Returns true if the list is empty;
      //               otherwise, returns false.

    bool isFull() const;
      //Function to determine whether the list is full
      //Postcondition: Returns true if the list is full; 
      //               otherwise, returns false.

    int listSize() const;
      //Function to determine the number of elements in 
      //the list.
      //Postcondition: Returns the value of length.

    int maxListSize() const;
      //Function to determine the maximum size of the list
      //Postcondition: Returns the value of maxSize.

    void print() const;
      //Function to output the elements of the list
      //Postcondition: Elements of the list are output on the 
      //               standard output device.

    bool isItemAtEqual(int location, const elemType& item) const;
      //Function to determine whether item is the same as
      //the item in the list at the position specified 
      //by location.
      //Postcondition: Returns true if the list[location] 
      //               is the same as item; otherwise, 
      //               returns false.
      //               If location is out of range, an 
      //               appropriate message is displayed.

    virtual void insertAt(int location, const elemType& insertItem) = 0;
      //Function to insert insertItem in the list at the 
      //position specified by location. 
      //Note that this is an abstract function.
      //Postcondition: Starting at location, the elements of 
      //               the list are shifted down, 
      //               list[location] = insertItem; length++;    
      //               If the list is full or location is out of
      //               range, an appropriate message is displayed.

    virtual void insertEnd(const elemType& insertItem) = 0;
      //Function to insert insertItem an item at the end of 
      //the list. Note that this is an abstract function.
      //Postcondition: list[length] = insertItem; and length++;
      //               If the list is full, an appropriate 
      //               message is displayed.

    void removeAt(int location);
      //Function to remove the item from the list at the 
      //position specified by location 
      //Postcondition: The list element at list[location] is 
      //               removed and length is decremented by 1.
      //               If location is out of range, an 
      //               appropriate message is displayed.

    void retrieveAt(int location, elemType& retItem) const;
      //Function to retrieve the element from the list at the  
      //position specified by location 
      //Postcondition: retItem = list[location] 
      //               If location is out of range, an 
      //               appropriate message is displayed.

    virtual void replaceAt(int location, const elemType& repItem) = 0;
      //Function to replace repItem the elements in the list 
      //at the position specified by location. 
      //Note that this is an abstract function.
      //Postcondition: list[location] = repItem 
      //               If location is out of range, an 
      //               appropriate message is displayed.

    void clearList();
      //Function to remove all the elements from the list 
      //After this operation, the size of the list is zero.
      //Postcondition: length = 0;

    virtual int seqSearch(const elemType& searchItem) const = 0;
      //Function to search the list for searchItem.
      //Note that this is an abstract function.
      //Postcondition: If the item is found, returns the 
      //               location in the array where the item is  
      //               found; otherwise, returns -1.

    virtual void remove(const elemType& removeItem) = 0;
      //Function to remove removeItem from the list.
      //Note that this is an abstract function.
      //Postcondition: If removeItem is found in the list,
      //               it is removed from the list and length 
      //               is decremented by one.

    arrayListType(int size = 100);
      //Constructor
      //Creates an array of the size specified by the 
      //parameter size. The default array size is 100.
      //Postcondition: The list points to the array, length = 0,
      //               and maxSize = size;

    arrayListType (const arrayListType<elemType>& otherList);
       //Copy constructor

    virtual ~arrayListType();
      //Destructor
      //Deallocate the memory occupied by the array.

protected:
    elemType *list; //array to hold the list elements
    int length;     //variable to store the length of the list
    int maxSize;    //variable to store the maximum 
                    //size of the list
};

template <class elemType>
bool arrayListType<elemType>::isEmpty() const
{
    return (length == 0);
} //end isEmpty

template <class elemType>
bool arrayListType<elemType>::isFull() const
{
    return (length == maxSize);
}  //end isFull

template <class elemType>
int arrayListType<elemType>::listSize() const
{
    return length;
}  //end listSize

template <class elemType>
int arrayListType<elemType>::maxListSize() const
{
    return maxSize;
}  //end maxListSize

template <class elemType>
void arrayListType<elemType>::print() const
{
    for (int i = 0; i < length; i++)
        cout << list[i] << " ";
    cout << endl;
}  //end print

template <class elemType>
bool arrayListType<elemType>::isItemAtEqual(int location, 
                                            const elemType& item)  const
{
    if (location < 0 || location >= length)
    {
        cout << "The location of the item to be removed "
             << "is out of range." << endl;

        return false;
    }
    else
        return (list[location] == item);
}  //end isItemAtEqual

template <class elemType>
void arrayListType<elemType>::removeAt(int location)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be removed "
             << "is out of range." << endl;
    else
    {
        for (int i = location; i < length - 1; i++)
            list[i] = list[i + 1];

        length--;
    }
} //end removeAt

template <class elemType>
void arrayListType<elemType>::retrieveAt(int location,
                                         elemType& retItem) const
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be retrieved is "
             << "out of range" << endl;
    else
        retItem = list[location];
} //end retrieveAt

template <class elemType>
void arrayListType<elemType>::clearList()
{
    length = 0;
} //end clearList

template <class elemType>
arrayListType<elemType>::arrayListType(int size)
{
    if (size <= 0)
    {
        cout << "The array size must be positive. Creating "
             << "an array of the size 100. " << endl;

        maxSize = 100;
    }
    else
        maxSize = size;

    length = 0;

    list = new elemType[maxSize];
}   //end constructor

template <class elemType>
arrayListType<elemType>::~arrayListType()
{
    delete [] list;
}  //end destructor

template <class elemType>
arrayListType<elemType>::arrayListType
                          (const arrayListType<elemType>& otherList)
{
    maxSize = otherList.maxSize;
    length = otherList.length;

    list = new elemType[maxSize];

    for (int j = 0; j < length; j++)
        list[j] = otherList.list[j];
}//end copy constructor


template <class elemType>
const arrayListType<elemType>& arrayListType<elemType>::operator=
                             (const arrayListType<elemType>& otherList)
{
    if (this != &otherList)    //avoid self-assignment
    {
        delete [] list;
        maxSize = otherList.maxSize;
        length = otherList.length;
 
        list = new elemType[maxSize];

        for (int i = 0; i < length; i++)
            list[i] = otherList.list[i];
    }
    return *this;
}  //end overloading operator=


#endif
