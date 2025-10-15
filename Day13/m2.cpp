#include<iostream>
#include<vector>
using namespace std;
class Item
{
    public:
    int itemid;
    double price;
    double stockQuantity;

    public:
    string item_name;
        Item(int id=0, string name=" ",double p=0.0, double q=0){
            itemid=id;
            item_name=name;
            price=p;
            stockQuantity=q;
        }

};


class Bill{
    public:
    int bill_Id;
    string customername;
    vector<Item> purchaseditem;

    
        Bill(int id=0, string cname="")
        {
            bill_Id=id;
            customername=cname;
        }
        Bill operator+ (Item &item) //operator overloading 
        {
            int qty;
            cout<< "added items for  "<<item.item_name<<" : "<<endl;
            cin>>qty;
            if(qty<=0) throw invalid_argument("Quantity must be positive ");
            if(qty>=50) throw runtime_error("Item quantity exceeds ");

            item.stockQuantity =-qty;
            purchaseditem.push_back(Item(item.itemid , item.item_name , item.price , qty));
            return *this;
        }
        friend ostream operator<<(ostream &out, Bill &b)
        {
            double total = 0;
            out<<"Bill ID : "<<b.bill_Id;
            out<<"Customer Name  : "<<b.customername;
            out<<"Bill ID : "<<b.purchaseditem;
            out<<"Items \t Item Name \t Item Qnty. \t Item Price  ";
            for (auto &i : b.purchaseditem) {
            out << i.item_name << "\t" << i.stockQuantity << "\t" << i.price << "\n";
            total += i.price;
        }
        }

        

        
        
    

};
