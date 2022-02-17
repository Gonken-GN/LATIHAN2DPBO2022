#include <iostream>
#include <string>
using namespace std;
class Product{
    private:
        string price;
        string id;
    public:
        Product(){}
        void setPrice(string price) {
            this->price = price;
        }
        string getPrice() {
        return this->price;
        } 
        void setId(string id) {
            this->id = id;
        }
        string getId(){
            return this->id;
        }
        ~Product(){}
};