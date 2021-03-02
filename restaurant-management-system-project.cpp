// prepared by @ Mahin
#include<bits/stdc++.h>
using namespace std;
class product{
        double buyingprice;
        double sellingprice;
        double profit;
        int total_quantity;
        double total_invest;
        public:
        product( double totalinvest , int totalproducts , double unitprice){
                total_invest=totalinvest;
                total_quantity=totalproducts;
                buyingprice=unitprice;
        }
        void sale(int sayling_quantiy,double saylingprice ){
                total_quantity -= sayling_quantiy;
                profit=(saylingprice-buyingprice)*sayling_quantiy;
        }
        void show_info()
        {
                cout<<" Available products : "<<total_quantity<<endl;
                cout<<" Current Profit : "<<profit<<endl;
                cout<<" Current Balance : "<<total_quantity<<endl;
        }
} ;
void menu(){
    int choice;
        cout<<"1: pizza\n";
        cout<<"2: Burger\n";
        cout<<"3: Drink\n";
        cout<<"Enter choice your food : ";
        cin>>choice;

        if(choice<1 || choice >3) {
            int x=0;
            while(x!=1){
                cout << endl<< "Sorry....!You Enter a wrong choice Try again " << endl;
                cout << "For get the menu again enter '1'.." << endl;
                cin >>x;
            }
            menu();
        };
}

int main()
{
        cout<<"*------* Welcome to my Restaurant *------*"<<endl;
        cout<<"_Please open Menu card_\n";

        char ch[100];
        cin>>ch;

        menu();

        cout<< "Enter total Amounts of Food your store : ";
        int totalproducts;
        cin>>totalproducts;
        cout<<"Enter unit price of the Food : ";
        int unitprice;
        cin>>unitprice;
        int totalinvest = totalproducts * unitprice;
        product aproduct(totalinvest,totalproducts,unitprice);
        cout<<"Enter how many Food you want to sell : ";
        int saylingammount;
        cin>>saylingammount;
        if(totalproducts<saylingammount)
        {
            cout<< endl <<"lacking food"<<totalproducts-saylingammount<<"food in your store\n";
            cout << "Invalid amount...Enter a valid amount" << endl;
        }else{
            if (totalproducts==saylingammount)
            {
                cout<<" no more this food in your store\n";
            }
            cout<<"Enter sailing price : ";
            int saylingprice;
            cin>>saylingprice;
            cout<<"\n----Program Finish----\n";

            aproduct.sale(saylingammount, saylingprice);
            aproduct.show_info();
            cout<<"\n****Thank you****";

        }

}
