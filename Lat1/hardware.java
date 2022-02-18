//child class dari parent Product
public class hardware extends product{
    //Attribute private
    private String brand;
    private String model;
    //constructor
    hardware(){}
    //get & set untuk tiap private
    public String getBrand() {
        return brand;
    }
    public void setBrand(String brand) {
        this.brand = brand;
    }
    public String getModel() {
        return model;
    }
    public void setModel(String model) {
        this.model = model;
    }
}
