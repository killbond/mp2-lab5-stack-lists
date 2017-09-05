#include "include/List.h"
#include "include/Stack.h"

using namespace std;

int main()
{
    List a(10);
    Node b(2);
    Node c(1);
    Node d(3);

    a.AddStart(c);
    a.AddEnd(b);
    a.AddEnd(d);

    a.GetEnd();
    a.GetStart();
    a.GetEnd();
    cout << endl;

    Stack arr(10);
    arr.push(b);
    arr.push(d);
    arr.pop();
    cout << endl;
    return 0;
}