#include <iomanip>
#include <iostream>
#include <string>

class Node
{
    private:
        class Number
        {
        public: 
            Number *next;
            string name;
            string surname;
            string nickname;
        };
        Number Head = NULL;
    public:
        void list_init();
}