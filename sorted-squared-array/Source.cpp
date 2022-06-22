#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<int> sortedSquaredArray(vector<int> array);
int main()
{
    vector<int> array1 = { 5, 1, 22, 25, 6, 1, 8, 10 };

    vector<int> output = sortedSquaredArray(array1);
        for(auto value : output)
        {
            cout << value << " ";
        }
    return 0;
}


vector<int> sortedSquaredArray(vector<int> array) {
    // Write your code here.
    vector<int> numarray(array.size(), 0);
    for (int i = 0; i < array.size(); i++)
    {
        int somme = array[i] * array[i];
        numarray[i] = somme;
    }
    sort(numarray.begin(), numarray.end());
    return numarray;
}
