#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
    BstNode* root = NULL;
    //*root = 10;
    int userChoice, data = 0;
    BinaryTree newTree;
    cout << "MENU\n" << "1. Add data\n" << "2. Display Min\n" << "3. Display Max\n" << "4. Search list\n" << "5. Display height\n" << "6. Exit\n\n";

    do
    {
        cout << "What would you like to do? ";
        cin >> userChoice;

        switch(userChoice)
        {
        case 1:
            cout << "What integer would you like to add? ";
            cin >> data;
            root = newTree.insertBstNode(root, data);
            break;
        case 2:
            int minValue;
            minValue = newTree.minBstNode(root);
            cout << "Minimum = " << minValue << endl;
            break;
        case 3:
            int maxValue;
            maxValue = newTree.maxBstNode(root);
            cout << "Maximum = " << maxValue << endl;
            break;
        case 4:
            cout << "What value would you like to search for? ";
            cin >> data;
            if(newTree.searchTree(root, data) == true)
            {
                cout << "Found\n";
            }
            else
            {
                cout << "Not Found\n";
            }
            break;
        case 5:
            int height;
            height = newTree.findHeight(root);
            cout << "Height = " << height << endl;
            break;
        default:
            if (userChoice != 6)
            {
                cout << "Invalid" << endl;
            }
        }
    } while (userChoice != 6);
    return 0;
}
