#include<iostream>
#include<list>
using namespace std;

int main()
{
        list<char> coll;

        for(char c = 'a'; c <= 'z'; ++c)
        {
                coll.push_back(c);
        }

        list<char>::const_iterator pos;
        for(pos = coll.begin();pos != coll.end();++pos)
        {
                cout << *pos << " ";
        }
        cout << endl;

        list<char>::iterator pos1;
        for(pos1 = coll.begin();pos1 != coll.end();++pos1)
        {
                *pos1 -= 32;
        }
        //print
        for(pos = coll.begin();pos != coll.end();++pos)
        {
                cout << *pos << " ";
        }
        cout << endl;
}
