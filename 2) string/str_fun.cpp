#include <iostream>
#include <string>
  using namespace std;
int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    
    // append function
    str1.append(str2);
    cout << "After appending: " << str1 << endl;
    
    // assign function
    string str3;
    str3.assign(str1);
    cout << "After assigning: " << str3 << endl;

    // at function
    char a = str1.at(7);
    cout << "Character at index 7: " << a << endl;

    // begin function
    cout << "First character: " << *str1.begin() << endl;

    // capacity function
    // he capacity of a string is not necessarily equal to the amount of memory actually used by the string.
    // It represents the total allocated space
    // which may include unused or extra memory for efficiency and performance reasons.
    cout << "Capacity of the string: " << str1.capacity() << endl;

    // compare function
    int comp = str1.compare(str2);
    cout << "Comparison result: " << comp << endl;

    // empty function
    bool isEmpty = str1.empty();
    cout << "Is the string empty? " << (isEmpty ? "Yes" : "No") << endl;

    // end function
    cout << "Last character: " << *(str1.end() - 1) << endl;

    // erase function
    str1.erase(7, 3);     //( index , length )
    cout << "After erasing: " << str1 << endl;

    // find function
    size_t found = str1.find("World");
    cout << "Substring 'World' found at index: " << found << endl;

    // insert function
    str1.insert(5, " there");
    cout << "After inserting: " << str1 << endl;

    // length function
    cout << "Length of the string: " << str1.length() << endl;

    // max_size function
    cout << "Maximum size of the string: " << str1.max_size() << endl;

    // replace function
    str1.replace(7, 5, "Everyone");
    cout << "After replacing: " << str1 << endl;

    // resize function
    str1.resize(10);
    cout << "After resizing: " << str1 << endl;

    // size function
    cout << "Size of the string: " << str1.size() << endl;

    // swap function
    str1.swap(str2);
    cout << "After swapping str1: " << str1 << endl;
    cout << "After swapping str2: " << str2 << endl;

    return 0;
}
