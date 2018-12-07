#include <iostream>
using namespace std;


//gets the size of a cstring
int getSize(const char *cstring) {
    int size = 0;
    while (cstring[size] != '\0') {
        size++;
    }
    return size;
}

//s1 is the cstring
// s1sz is the size of the string
// s2 is the second string to concatinate
bool strncat(char *s1, unsigned int s1sz, const char *s2) {
	// TODO
    //1. check to see if the s1 has enough size for s2 and s1 -> if statement for size
    //2. if true, loop from the null char and replace that and x's with the new char
    //3. if not return false and s1
    
    //part 1
    int s1Size = getSize(s1);
    int s2Size = getSize(s2);
    bool willFit = false;
    if(s1Size + s2Size < s1sz) {
        willFit = true;
    }
    
    //Part 2
    if(willFit) {
        for (int i = 0; i < s2Size; i++) {
            s1[s1Size++] = s2[i];
        }
        s1[s1Size++] = '\0';
        return true;
    }
    
    //part 3
    return false;
    
}



/* OUTPUT
1 '12345'
1 '1234567'
1 '123456789'
0
0
*/
int main() {
    {
        char buf[10] = { '1', '2', '3', '4', '5', 0, 'x', 'x', 'x', 'x'};
        cout << strncat(buf, 10, "") << " '" << buf << "'" << endl;
    }
    {
        char buf[10] = { '1', '2', '3', '4', '5', 0, 'x', 'x', 'x', 'x'};
        cout << strncat(buf, 10, "67") << " '" << buf << "'" << endl;
    }
    {
        char buf[10] = { '1', '2', '3', '4', '5', 0, 'x', 'x', 'x', 'x'};
        cout << strncat(buf, 10, "6789") << " '" << buf << "'" << endl;
    }
    {
        char buf[10] = { '1', '2', '3', '4', '5', 0, 'x', 'x', 'x', 'x'};
        cout << strncat(buf, 10, "67890") << endl;
    }
    {
        char buf[10] = { '1', '2', '3', '4', '5', 0, 'x', 'x', 'x', 'x'};
        cout << strncat(buf, 10, "6789012") << endl;
    }
}
