#include <iostream>
#include <string>
using namespace std;
#include "Hardware.cpp"
class Memory : public Hardware{
    private:
        string frequency;
        string size;
        string cuda;
    public:
        Memory(){}
        void setFrequency(string frequency){
            this->frequency = frequency;
        }
        string getFrequency(){
            return this->frequency;
        }
        void setSize(string size){
            this->size = size;
        }
        string getSize(){
            return this->size;
        }
        void setCuda(string cuda){
            this->cuda = cuda;
        }
        string getCuda(){
            return this->cuda;
        }
        ~Memory(){}  
};