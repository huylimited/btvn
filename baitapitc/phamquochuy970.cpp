#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
#include<fstream>
#include<cstring>
//bai 3
using namespace std;
 
struct maybay {
              char ten[30];
              char noidk[30];
              char noisx[30];
              char hang[30];
              long gia;
              int chongoi;
            
};
//NHAP MAY BAY TU BAN PHIM
void nhap(maybay mb[], int &n){
		cout<<" nhap so luong may bay : ";
		cin>>n;
	for(int i = 0;i < n; i++){
		cout<<"\nNhap thong tin thi sinh thu "<<i+1<<": \n";
		cin.ignore();
		cout<<"Nhap ten may bay: ";
		cin.getline(mb[i].ten, 30);
		cout<<"Nhap ten noi dang ki: ";
		cin.getline(mb[i].noidk, 30);
		cout<<"Nhap noi san xuat ";
		cin.getline(mb[i].noisx, 30);
		cout<<"Nhap hang may bay  ";
		cin.getline(mb[i].hang, 30);
		cout<<"Nhap gia may bay chua thue: ";
		cin>>mb[i].gia;
		cout<<"Nhap so cho ngoi may bay : ";
		cin>>mb[i].chongoi;
	}
}
//xuat ra man hinh danh sach may bay da nhap
void xuat(maybay mb[], int n){
	cout<<"\t\t\t\t\t\t---------------DANH SACH THONG TIN MAY BAY---------------"<<"\n";
    cout<<setw(20)<<left<<"Ten MB";
    cout<<setw(20)<<left<<"NOI DK";
    cout<<setw(20)<<left<<"NOI SX";
    cout<<setw(20)<<left<<"HANG";
    cout<<setw(20)<<left<<"GIA";
    cout<<setw(20)<<left<<"CHO NGOI";
     cout<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<setw(20)<<left<<mb[i].ten;
        cout<<setw(20)<<left<<mb[i].noidk;
        cout<<setw(20)<<left<<mb[i].noisx;
        cout<<setw(20)<<left<<mb[i].hang;
        cout<<setw(20)<<left<<mb[i].gia;
        cout<<setw(20)<<left<<mb[i].chongoi;
    cout<<" "<<endl;
}
}
//in ra danh sach may bay dk o vn
void maybayvn(maybay mb[], int n){
	char c[15]="viet nam";
	cout<<"may bay dang ki tai vn :"<<endl;
	cout<<"\t\t\t\t\t\t---------------DANH SACH THONG TIN MAY BAY---------------"<<"\n";
    cout<<setw(20)<<left<<"Ten MB";
    cout<<setw(20)<<left<<"NOI DK";
    cout<<setw(20)<<left<<"NOI SX";
    cout<<setw(20)<<left<<"HANG";
    cout<<setw(20)<<left<<"GIA";
    cout<<setw(20)<<left<<"CHO NGOI";
     cout<<endl;
	for(int i = 0;i < n;i++){
        
        if(strcmp(mb[i].noidk,c)==0 ){                               
            
cout<<setw(20)<<left<<mb[i].ten;
        cout<<setw(20)<<left<<mb[i].noidk;
        cout<<setw(20)<<left<<mb[i].noisx;
        cout<<setw(20)<<left<<mb[i].hang;
        cout<<setw(20)<<left<<mb[i].gia;
        cout<<setw(20)<<left<<mb[i].chongoi;
    cout<<" "<<endl;
	}
  }
}
// tim mahyh bay co cho ngoi > 200
void chongoimb( maybay mb[], int &n){
	int k=0;
	for(int i=0;i<n;i++){
		if(mb[i].chongoi>200)
		k++;
	}
	cout<<"\nso may bay co cho ngoi lon hon 200 la "<<k<<endl;
}
//tim ddanh sach co hang tu ban phim


//menu chon 
void menu(){
cout<<"\t\t\t\t\t\t|--------------------------------------------------|";	
cout<<"\n\t\t\t\t\t\t|                     MENU                         |";
cout<<"\n\t\t\t\t\t\t|--------------------------------------------------|";
cout<<"\n\t\t\t\t\t\t|1. Nhap danh sach may bay                         |";
cout<<"\n\t\t\t\t\t\t|2. xuat may bay                                   |";
cout<<"\n\t\t\t\t\t\t|3. tim may bay dk o VN                            |";
cout<<"\n\t\t\t\t\t\t|4. May bay co hon 200 cho ngoi                     |";
cout<<"\n\t\t\t\t\t\t|0. Thoat                                          |";
cout<<"\n\t\t\t\t\t\t|--------------------------------------------------|";
}
    int main (){
 system("color F");
 int n;	
maybay mb[100];
 int luachon;
 char k[10];
 menu();
 buoc:	
        cout<<"\n-----------Nhap lua chon cua ban (0-4): ";
        cin>>luachon;
        cout<<endl<<endl;
    	switch(luachon)
		{
   			case 1:nhap(mb,n);break;
    		case 2:xuat(mb,n);break;
    		case 3:maybayvn(mb,n);break;
    		case 4:chongoimb(mb,n);break;
            break;
			case 0:cout<<"\n\n\n\t\t\t\t\t\t   ------------------BYE BRO-------------------"<<endl;exit(1);break;
    		default:cout<<"Khong hop le ";
    	}
    goto buoc;	
return 0;	
}
