/*
Complete below code snippet by writing definitions of below function
1. SearchLast() - Search last occurence of number
2. EvenCount() - Count even elements
3. OddCount()  - Count odd elements
4. SumAll() - Sum of all elements
*/

#include<iostream>
using namespace std;

class Array
{
protected:
    int *Arr;
    int size;
public:
    Array(int value = 10)
    {
        cout << "Inside Constructor\n";
        this->size = value;
        this->Arr = new int[size];
    }
    Array(Array & ref)
    {
        cout << "Inside copy constructor\n";
        this->size = ref.size;
        this->Arr = new int[this->size];

        for (int i = 0; i < size; i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }
    ~Array()
    {
        cout << "Inside Destructor\n";
        delete[] Arr;
    }
    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
    cout << "Please enter the values\n";
    for (int i = 0; i < this->size; i++)
    {
        cin >> Arr[i];
    }
}

void Array::Display()
{
    cout << "Array elements are: ";
    for (int i = 0; i < this->size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

class ArrSearch : public Array
{
public:
    ArrSearch(int no = 10) : Array(no) {}

    int Frequency(int value);
    int SearchFirst(int value);
    int SearchLast(int value);
    int EvenCount();
    int OddCount();
    int SumAll();
};

int ArrSearch::Frequency(int value)
{
    int iCnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::SearchFirst(int value)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }
    if (i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::SearchLast(int value)
{
    int i = 0;
    int lastOccurrence = -1;
    for (i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            lastOccurrence = i + 1;
        }
    }
    return lastOccurrence;
}

int ArrSearch::EvenCount()
{
    int evenCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    return evenCount;
}

int ArrSearch::OddCount()
{
    int oddCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            oddCount++;
        }
    }
    return oddCount;
}

int ArrSearch::SumAll()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += Arr[i];
    }
    return sum;
}

int main()
{
    cout << "Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iret = sobj1.Frequency(11);
    cout << "Frequency is " << iret << "\n";
    iret = sobj1.SearchFirst(11);
    cout << "First occurrence is " << iret << "\n";
    iret = sobj1.SearchLast(11);
    cout << "Last occurrence is " << iret << "\n";

    cout << "Even Count is " << sobj1.EvenCount() << "\n";
    cout << "Odd Count is " << sobj1.OddCount() << "\n";
    cout << "Sum of all elements is " << sobj1.SumAll() << "\n";

    return 0;
}
