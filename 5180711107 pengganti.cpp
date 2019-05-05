#include<iostream>
using namespace::std;
main()
{


    string ni[7]={"A001","A002","A003","A007","A008"};
    string na[7]={"Bayu","Irvan","Susiati","Diana","Roni"};
    string mbr,nama,ni1;
    int ketemu,banyak,hb[5],jb[5],total=0,totals=0,totalse,tmp;
    cout<<"========selamat datang di novembermart========\n";
    cout<<"ada kartu membernya kak ?";
    cin>>mbr;
    if (mbr=="y")
    {
        cout<<"Masukkan nomor identitas:";
                      cin>>ni1;
                     ketemu=0;
                     for(int i=0;i<5;i++)
                     {
                         if (ni1==ni[i])
                     {
                         ketemu=1;
                         cout<<"nama member: "<<na[i]; cout<<endl;
                     }

                     }
                     cout<<"Banyak barang yang di beli :";

                     cin>>banyak;
                     for(int a=1;a<=banyak;a++)
                     {
                         cout<<"masukkan harga barang :";
                         cin>>hb[a];
                         cout<<endl;
                         cout<<"masukkan jumlah barang :";
                         cin>>jb[a]; cout<<endl;
                         total=hb[a]*jb[a];
                         totals=totals+total;


                     }
                         cout<<"total harga :"<<totals;
                         totalse=totals-(totals*0.05);
                         cout<<"\n selamat anda mendapat diskon:"<<totalse;
                         for (int f=1;f<=banyak;++f)
                         {
                             for(int l=1;l<=(banyak-1);++l)
                                if(hb[l]>hb[l+1])
                             {
                                 tmp=hb[l];
                                 hb[l]=hb[l+1];
                                 hb[l+1]=tmp;
                             }
                         }
                         cout<<"harga setelah di urutkan dari murah ke mahal:";
                          for(int a=1;a<=banyak;a++)
                            cout<<"\Rp."<<hb[a]<<endl;

    }
    else  if (mbr=="t")
    {
      cout<<"Masukkan nama anda:";
      cin>>nama;cout<<endl;
      cout<<"Banyak barang yang di beli:";
                     cin>>banyak;
                     for(int a=1;a<=banyak;a++)
                     {
                         cout<<"masukkan harga barang :";
                         cin>>hb[a];
                         cout<<endl;
                         cout<<"masukkan jumlah barang :";
                         cin>>jb[a]; cout<<endl;
                         total=hb[a]*jb[a];
                         totals=totals+total;


                     }
                         cout<<"total harga :"<<totals;
                          for (int f=1;f<=banyak;++f)
                         {
                             for(int l=1;l<=(banyak-1);++l)
                                if(hb[l]>hb[l+1])
                             {
                                 tmp=hb[l];
                                 hb[l]=hb[l+1];
                                 hb[l+1]=tmp;
                             }
                         }
                         cout<<"harga setelah di urutkan dari murah ke mahal:";
                          for(int a=1;a<=banyak;a++)
                            cout<<"\Rp."<<hb[a]<<endl;
    }


}
