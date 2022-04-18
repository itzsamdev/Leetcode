// Write a function that reverses a string. The input string is given as an array
// of characters s in O(1) Space

// Approach: 2 Pointers
void reverseString(char *s, int sSize)
{
    int start = 0;
    int end = sSize - 1;
    while (start, end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}