#include <iostream>
#include <string>
using namespace std;
#include "Memory.cpp"

int main (){
    Memory tforce;
    tforce.setBrand("Nvidia");
    tforce.setModel("GPU");
    tforce.setFrequency("8_GBPS");
    tforce.setCuda("Yes");
    tforce.setSize("8_GB");
    tforce.setId("gtx-1650");
    tforce.setPrice("RP_5.200.000");
    cout << "Brand Memory: "<<tforce.getBrand() << endl;
    cout << "Model Memory: "<<tforce.getModel() << endl;
    cout << "Frequency Memory: "<< tforce.getFrequency() << endl;
    cout << "SupportCuda Memory: "<< tforce.getCuda() << endl;
    cout << "Memory Size: "<< tforce.getSize() << endl;
    cout << "ID Memory: " << tforce.getId() << endl;
    cout << "Price Memory: " << tforce.getPrice() << endl;
    return 0;
}