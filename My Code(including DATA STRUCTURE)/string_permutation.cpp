
#include <iostream>
#include <algorithm>
using namespace std;

// Iterative function to find permutations of a string
void permutations(string s)
{
    // get length of the string
    int n = s.length();

    // base case
    if (n == 0) {
        return;
    }

    // base case
    if (n == 1) {
        cout << s;
        return;
    }

    // sort the string in a natural order
    sort(s.begin(), s.end());

    while (1)
    {
        // print the current permutation
        cout << s << " ";

        /* The following code will rearrange the string to the next lexicographically
           ordered permutation (if any) or return if we are already at the
           highest possible permutation */

        // Find the largest index `i` such that `s[i-1]` is less than `s[i]`
        int i = n - 1;
        while (s[i-1] >= s[i])
        {
            // if `i` is the first index of the string, we are already at the last
            // possible permutation (string is sorted in reverse order)
            if (--i == 0) {
                return;
            }
        }

        // find the highest index `j` to the right of index `i` such that
        // `s[j] > s[i-1]` (`s[i…n-1]` is sorted in reverse order)

        int j = n - 1;
        while (j > i && s[j] <= s[i - 1]) {
            j--;
        }

        // swap character at index `i-1` with index `j`
        swap(s[i - 1], s[j]);

        // reverse substring `s[i…n-1]`
        reverse (s.begin() + i, s.end());
    }
}

int main()
{   int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;

    permutations(s);}

    return 0;
}
