#include <iostream>

using namespace std;

void getmatrix(int a[100][100],int m,int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << "a["<<i+1<<"]["<<j<<"]=";
            cin >> a[i][j];
        }
    }
}
void printmatrix(int a[100][100],int m,int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << a[i][j]<< "\t";
        }
        cout << "\n";
    }
}
void getmatrix2(int b[100][100],int m,int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << "b["<<i+1<<"]["<<j<<"]=";
            cin >> b[i][j];
        }
    }
}
void printmatrix2(int b[100][100],int m,int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << b[i][j]<< "\t";
        }
        cout << "\n";
    }
}
void shuma(int a[100][100],int m,int n,int b[100][100],int t,int q,int s[100][100])
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            s[i][j]=0;

            for (int k=0; k<n; k++)
            {
                s[i][j] = s[i][j] + a[i][k] * b[k][j];
            }
        }

    }
}

int main()
{
    int a[100][100],b[100][100],s[100][100];
    int r1,c1,r2,c2;

    cout << "Fut madhesin e matrices se pare: "<<endl;
    cin >> r1>>c1;
    cout << "Fut madhesin e matrices se dyte: "<<endl;
    cin >> r2>>c2;

    cout << "Fut elementet e matrices se pare: "<<endl;
    getmatrix(a,r1,c1);
    cout << "Fut elementet e matrices se dyte: "<<endl;
    getmatrix2(b,r2,c2);

    shuma(a,r1,c1,b,r2,c2,s);

    cout << "Matrica e pare eshte:" <<endl;
    printmatrix(a,r1,c1);
    cout << "Matrica e dyte eshte:" <<endl;
    printmatrix2(b,r2,c2);
    cout << "Prodhimi i matricave eshte: \n";
    printmatrix(s,r1,c2);

}
