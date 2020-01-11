#include<iostream>
#include<fstream>
using namespace std;
class employees
{
    private:
    string ename;
    int eid;
    int emphours;
    long long empcontact;
    public:
        employees()
        {
            ename="employee1";
            emphours=1;
            eid=1;
            empcontact=123;
        }
        employees(string n,int h,int i,long long c)
        {
            ename=n;
            emphours=h;
            eid=i;
            empcontact=c;
        }
        void employee_output()
        {
            cout<<"name of the customer is:"<<ename<<endl;
            cout<<"number of hours employee has worked are:"<<emphours<<endl;
            cout<<"id of the customer is:"<<eid<<endl;
            cout<<"contact number of the customer is:"<<empcontact<<endl;
        }
};

class items
{
    private:
        string type;
        string brand;
        string color;
        double cost;
    public:
        items()
        {
            type="check it out";
            brand="nike";
            color="black";
            cost=10000.00;
        }
        items(string t,string b,string co,double c)
        {
            type=t;
            brand=b;
            color=co;
            cost=c;
        }
        void items_output()
        {
            cout<<"type of the item is:"<<type<<endl;
            cout<<"brand of the item is:"<<brand<<endl;
            cout<<"color of the item is:"<<color<<endl;
            cout<<"cost of item is:"<<cost<<endl;
        }
};
class warehouse_details : public items
{
    private:
        string wname;
        string waddress;
        employees *e;
    public:
        void input()
        {
            wname="prateek general store";
                waddress="a-10,sector-62,noida";
        }
            void warehouse_output()
        {
            cout<<"name of the warehouse is:"<<wname<<endl;
            cout<<"address of the address is:"<<waddress<<endl;
        }
};

class shipment : public items
{
    private:
        int bill_id;
        int quantity;
        string del_date;
        string order_date;
        string mode;
    public:
        shipment()
        {
            bill_id=123;
            quantity=1;
            del_date="1/2/2015";
            order_date="1/1/2015";
            mode="cash";
        }
        shipment(int b,int q,string d,string o,string m)
        {
            bill_id=b;
            quantity=q;
            del_date=d;
            order_date=o;
            mode=m;
        }
        void shipment_output()
        {
            cout<<"bill id is:"<<bill_id<<endl;
            cout<<"quantity ordered is:"<<quantity<<endl;
            cout<<"order date of the product is:"<<order_date<<endl;
            cout<<"delivery date of the product is:"<<del_date<<endl;
            cout<<"mode of payment:"<<mode<<endl;
        }
};

class customer
{
    private:
        string cname;
        string email;
        shipment s[100];
        int cid;
        long long contact;
    public:

        customer()
        {
            cname="customer1";
            email="customer1@gmail.com";
            cid=1;
            contact=123;
        }
        customer(string n,string e,int i,long long c)
        {
            cname=n;
            email=e;
            cid=i;
            contact=c;
        }
        void customer_output()
        {
            cout<<"name of the customer is:"<<cname<<endl;
            cout<<"email of the customer is:"<<email<<endl;
            cout<<"id of the customer is:"<<cid<<endl;
            cout<<"contact number of the customer is:"<<contact<<endl;
        }
};


class suppliers
{
    private:
        string sname;
        string saddress;
        int pid;
    public:
        suppliers()
        {
            sname="prateek";
            saddress="allahabad";
            pid=1;
        }
        suppliers(string n,string a,int p)
        {
            sname=n;
            saddress=a;
            pid=p;
        }
        void suppliers_output()
        {
            cout<<"name of the supplier is:"<<sname<<endl;
            cout<<"address of the supplier is:"<<saddress<<endl;
            cout<<"product id is:"<<pid<<endl;
        }
};


int main()
{
    customer c;

return 0;
}
