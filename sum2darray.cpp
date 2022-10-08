#include <iostream>
using namespace std;

void arraysum(int arr[][4], int i, int j)
{
    cout << "Printing sum --->"<<endl; 
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 4; j++)
       
        {

            sum += arr[i][j];
        }
            cout << sum << " " << endl;
        }
    

    cout << endl;
}

bool ispresent(int arr[][4], int target, int i, int j)
{

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                /* code */ return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
cout<<"Enter The Elements"<<endl;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
cout<<"Printing The Elements"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)

        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "enter the element to be found" << endl;
    int target;
    cin >> target;

    if (ispresent(arr, target, 3, 4))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    arraysum(arr, 3, 4);

        return 0;
}

