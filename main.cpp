#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "Fayl bilan ishlash!" << endl;
    int n = 5;
    double d = 11.05;
    char s[20]="Faylga yozildi";
    FILE *f;
    f = fopen("fayl.dat","wb");
    fwrite(&n,sizeof(int),1,f);
        fwrite(&d,sizeof(double),1,f);
            fwrite(&s,sizeof(char),1,f);
                fclose(f);
     n=0;d=0;
         f = fopen("fayl.dat","rb");
    fread(&n,sizeof(int),1,f);
        fread(&d,sizeof(double),1,f);
            fread(s,sizeof(char),1,f);
            fclose(f);
            cout << n << endl;
            cout << d << endl;
            cout << s << endl;
    return 0;
}
