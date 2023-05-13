#include <iostream> using namespace std;
// Tanmay Varadpande,

Roll No.B43 //

    class fibo
{
    int a1, a2, next;

public:
    fibo()
    {
        a1 = 0;
        a2 = 1;
    }
    void series(int);
};
void fibo ::series(int n)
{
    cout << endl
         << " " << n << " FIBONACCI TERMS IS TO BE PRINTED\n";
    cout << endl
         << " 
            "<<a1<<endl; 

        for (int i = 1; i <= n; i++)
    {
        next = a1 + a2;
        cout << " " << next << endl;
        a1 = a2;
        a2 = next;
    }
}
int main()
{

    int n;
    fibo S;

    cout << "\nEnter no. of terms to be displayed : ";
    cin >> n;
    S.series(n);
    return 0;
}
