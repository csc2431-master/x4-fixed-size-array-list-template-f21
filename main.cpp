//
// Test Program for templated version of the FixedArrayList Class
// Author: Max Benson
// Date: 08/08/2021
//

#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "FixedArrayList.h"

int main() {
    FixedArrayList<int> listOfInt(10);
    FixedArrayList<string> listOfString(20);

    for (size_t i = 0; i < 10; i ++) {
        listOfInt.Insert(i, 0);
    }
    cout << "listOfInt: " << listOfInt << endl;

    listOfString.Insert(0,"whoever");
    listOfString.Insert(1, "believes");
    listOfString.Insert(2, "in");
    listOfString.Insert(3, "Him");
    listOfString.Insert(4, "shall");
    listOfString.Insert(5, "not");
    listOfString.Insert(6, "perish");
    cout << "listOfString: " << listOfString << endl;

    return 0;
}

