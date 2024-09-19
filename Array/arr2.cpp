#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
   cout << "printing the array" << endl;
   // printing the array
   for (int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
   cout << "printing DONEE" << endl;
}

int main()
{
   // declare
   // int number[15];

   // cout << "Value at 1 index " << number[10] << endl;

   // cout << "Value at 20 index " << number[20] << endl;

   // initialising Array
   // int second[3] = {3, 7, 11};

   // accesing an element

   // cout << "Value at 2 index " << second[1] << endl;

   // cout << "Everting is fine " << endl;

   // int third[15] = {2, 7};

   // int n = 15;
   // cout << " printing the array " << endl;
   // // print
   // for (int i = 0; i < n; i++)
   // {
   //    cout << third[i] << " ";
   // }

   // // initialising all locations with 0
   // int fourth[10] = {0};

   // cout << " printing the array " << endl;
   // // print
   // for (int i = 0; i < n; i++)
   // {
   //    cout << fourth[i] << " ";
   // }

   // initialising all locations with 1 [not possible with below line]
   // int fifth[10] = {1};
   // int n = 10;

   // cout << " printing the array " << endl;
   // // print
   // for (int i = 0; i < n; i++)
   // {
   //    cout << fifth[i] << " ";
   // }

   // int third[15] = {2, 7};
   // printArray(third, 15);

   // int nine[15] = {3, 8};
   // printArray(nine, 15);

   // int fitfthSize = sizeof(nine) / sizeof(int);

   // cout << " Size of Fifth is " << fitfthSize << endl;

   // int ten[17] = {2, 7};
   // printArray(ten, 17);

   // int tenSize = sizeof(ten) / sizeof(int);

   // cout << " Size of Fifth is " << tenSize << endl;

   char ch[5] = {'a', 'b', 'c', 'd', 'e'};
   cout << ch[3] << endl;

   cout << "printing the array" << endl;
   // printing the array
   for (int i = 0; i < 5; i++)
   {
      cout << ch[i] << " ";
   }
   cout << "printing DONEE" << endl;

   double firstDouble[5];
   float firstfloat[6];
   bool firstbool[9];

   cout << endl
        << "Everything is Fine" << endl
        << endl;
}
