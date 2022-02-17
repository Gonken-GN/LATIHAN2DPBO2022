<?php
class Product{
    private $price;
    private $id;
    function __construct(){
    }
    function setPrice($price){
        $this->price = $price;
    }
    function getPrice(){
        return $this->price;
    }
    function setId($id){
        $this->id = $id;
    }
    function getId(){
        return $this->id;
    }
    function __destruct()
    {
    }
}
?>