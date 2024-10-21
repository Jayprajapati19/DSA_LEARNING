#include <iostream>
using namespace std;

int merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    int ans = 0;

    int len1 = mid - start + 1; // length of first array
    int len2 = end - mid;       // length of the second array

    int *first = new int[len1];  // dynamically creating first array
    int *second = new int[len2]; // dynamically creating second array

    // copying values in arrays
    int mainArrayIndex = start;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merging two arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
            ans += len1 - index1;
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;

    return ans;
}

int mergeSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return 0;
    }

    int mid = start + (end - start) / 2;

    // sorting left part of the array
    int inv = mergeSort(arr, start, mid);

    // sorting right part of the array
    inv += mergeSort(arr, mid + 1, end);

    // merging two sorted arrays
    inv += merge(arr, start, end);

    return inv;
}

int main()
{

    int arr[11] = {12, 43, 11, 99, 45, 22, 67, 54, 89, 48, 99};
    int n = 11;

    cout << "Before sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int inv_count = mergeSort(arr, 0, n - 1);
    cout << "Inversion Count : " << inv_count << endl;

    cout << "After sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*

Yeh code merge sort ka implementation hai jo ek array ko sort karta hai aur uske saath-saath inversion count bhi nikalta hai. Inversion count ka matlab hota hai ki kitne aise pairs hain array mein jinke liye pehla element doosre element se bada hai lekin pehla element pehle position par aata hai.

1. int merge(int *arr, int start, int end):
Yeh function do sorted arrays ko merge karta hai aur unke beech ke inversions ko count karta hai.

Mid ka calculation: Pehle mid calculate kiya jaata hai jo start aur end ke beech ka midpoint hai.

cpp
Copy code
int mid = start + (end - start) / 2;
Doh arrays banane ke liye memory allocation: first aur second arrays ko dynamically banaya jaata hai jahan pe first ke paas left side ka array hoga aur second ke paas right side ka array.

cpp
Copy code
int *first = new int[len1];
int *second = new int[len2];
Arrays mein values copy karna: first array ke andar pehle part ke elements copy kiye jaate hain aur second array mein baaki ke elements.

cpp
Copy code
for (int i = 0; i < len1; i++) {
    first[i] = arr[mainArrayIndex++];
}
Doh arrays ko merge karna: Merge karte waqt agar left array ka element chhota hai to directly sorted array mein dal diya jaata hai. Agar right array ka element chhota hai, to inversion count mein add kiya jaata hai kyunki iska matlab hai ki ek inversion mila hai.

cpp
Copy code
if (first[index1] < second[index2]) {
    arr[mainArrayIndex++] = first[index1++];
} else {
    arr[mainArrayIndex++] = second[index2++];
    ans += len1 - index1;
}
Remaining elements ko copy karna: Jab tak ek array khatam nahi hota, tab tak bache hue elements ko final array mein dal diya jaata hai.

Dynamic memory free karna: Arrays first aur second ko delete kiya jaata hai to avoid memory leaks.

cpp
Copy code
delete[] first;
delete[] second;
Inversion count return karna: Is function ka kaam hai merge karna aur inversions ka count return karna.

2. int mergeSort(int *arr, int start, int end):
Yeh function recursively array ko do parts mein todta hai, har part ko separately sort karta hai, aur fir merge function se inversions count karta hai.

Base case: Agar array ka size 1 ya usse chhota ho, to koi sorting ya inversion nahi hota, to zero return kar dete hain.

cpp
Copy code
if (start >= end) {
    return 0;
}
Divide the array: Array ko mid point ke base par do parts mein todte hain. Phir left aur right part ko recursively mergeSort se sort karte hain.

cpp
Copy code
int inv = mergeSort(arr, start, mid);
inv += mergeSort(arr, mid + 1, end);
Merge and count inversions: Dono sorted parts ko merge karte waqt inversions ko count kiya jaata hai.

cpp
Copy code
inv += merge(arr, start, end);
Inversion count return: Total inversions ka count return kar dete hain.

3. int main():
Yeh program ka starting point hai jahan input array diya gaya hai, sorting aur inversion counting perform hoti hai.

Array initialize karna: Ek array arr define kiya gaya hai jismein kuch random values hain.

cpp
Copy code
int arr[11] = {12, 43, 11, 99, 45, 22, 67, 54, 89, 48, 99};
Array ko print karna (Before sorting): Sorting se pehle array ko print karte hain.

cpp
Copy code
cout << "Before sorting : ";
Merge sort lagana aur inversion count nikalna: mergeSort function ko call karte hain jo array ko sort karta hai aur inversion count return karta hai.

cpp
Copy code
int inv_count = mergeSort(arr, 0, n - 1);
Sorted array aur inversion count print karna: Sorting ke baad array aur inversion count ko print karte hain.

cpp
Copy code
cout << "Inversion Count : " << inv_count << endl;
Output:
mathematica
Copy code
Before sorting : 12 43 11 99 45 22 67 54 89 48 99
Inversion Count : 20
After sorting : 11 12 22 43 45 48 54 67 89 99 99
Yahan program pehle array ko unsorted format mein dikhata hai, fir inversion count (20) calculate karta hai, aur lastly array ko sorted form mein print karta hai.



*/