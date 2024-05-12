#include "iostream"
using namespace std;

void printfln()
{
    cout << "xxxxxxxxx" << endl;
}

class a
{

public:
    void p()
    {
        printfln();
    }
    int x = 1;

private:
};

class b
{
public:
    a *m = new a;

private:
};

int main(int argc, char **argv)
{
    b m;
    m.m->p();
    return 0;
}