#include <iostream>
#include <conio.h>

using namespace std;

class berat{
    private :
         int bb,tb,brtideal;
         char lagi;
    public :
        void hitung(){
             cout<<" . Masukan Tinggi Badan Anda (cm) = ";cin>>tb;
            cout<<" . Masukan Berat Badan Andda (kg) = ";cin>>bb;
             cout<<"\n\n";
            brtideal=((tb-100)-(tb-100)*0.1);
            

      cout<<" . Berat Badan Idealnya = "<<brtideal;
      cout<<"\n\n";

      if(brtideal<=2 && brtideal>=-2)
              {
             cout<<" . Berat Badan Anda Ideal. "<<endl;
             }
          else
                {
             cout<<" .Anda Termasuk kurng Gizi . "<<endl;
             }     

        }
};

int main()
{
        berat b;
        b.hitung();
        cout<<"::. Terimakasih Telah Melakukan Tess  Bada Ideal .:: ";

     getch();
}
