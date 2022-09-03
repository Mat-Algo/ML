
#include<iostream>
using namespace std;
class Customer
{
    string productcode[5];
    int cost[5];
    int num;

public:
    void product_count()
    {
        num = 0;   
    }
    void getdetails();
    void total();
    void printdetails();
    void modifyproduct();
};
void Customer::getdetails()
{
    cout<<"Enter product code:\n";
    cin>>productcode[num];
    cout<<"Enter cost:\n";
    cin>>cost[num];
    num++;
}
void Customer::total()
{
    int sum=0;
    for (int i=0;i<num;i++)
    {
        sum = sum+cost[i];
    }
    cout<<"Total Cost:"<<sum<<"\n";
}
void Customer::printdetails()
{
    cout<<"Item List\n";
    for (int i=0;i<num;i++)
    {
        cout<<"Item"<<i+1<<"\t"<<productcode[i];
					cout<<"\t"<<cost[i]<<"\n";
    }
}
void Customer::modifyproduct()
{
    string code;
    int newitem;
    cout<<"Enter product code to modify:";
    cin>>code;
    cout<<"Enter new cost";
    cin>>newitem;
    for (int i=0;i<num;i++){
        if(productcode[i]==code){
            cost[i]=newitem;
        }
    }
}

int main()
{
    Customer c1;
    c1.product_count();
    int choice;
    do
    {
        cout<<"\nEnter your choice:\n1.Add product code and cost\n2.Display total cost\n";
        cout<<"3.Modify item\n4.Display all\nPress any other key to exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                c1.getdetails();
                break;
            case 2:
                c1.total();
                break;
            case 3:
                c1.modifyproduct();
                break;
            case 4:
                c1.printdetails();
                break;
            default:
                exit(0);
        }   
    }while(choice);
    return 0;
}