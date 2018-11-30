
#include<iostream>

using namespace std;

typedef std::tuple<uint32_t, uint16_t> Participant;


void RemoveFromRoom(const Participant &participant) {
    //Do something...
}


int main()
{
   //C++17?  Want to avid this. Throw compile error if used
    RemoveFromRoom({3, 4});

    //C++14?  This is ok.
    RemoveFromRoom(std::make_tuple(4, 5));
    return 0;
}
