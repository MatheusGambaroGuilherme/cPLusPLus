#include <string>
using std::string;
class Invoice{
    public:

    Invoice(string desc, string id, int sold, int price);
    void setDesc(string desc);
    string getDesc();
    void setId(string id);
    string getId();
    void setSold(int sold);
    int getSold();
    void setPrice(int price);
    int getPrice();

    int getInvoiceAmount();

    private:
    std::string desc;
    std::string id;
    int sold;
    int price;
};