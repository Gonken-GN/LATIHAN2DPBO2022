<?php
class Memory extends Hardware{
    private $cuda;
    private $size;
    private $frequency;
    function __construct()
    {
        
    }
    function setCuda($cuda){
        $this->cuda = $cuda;
    }
    function getCuda(){
        return $this->cuda;
    }
    function setSize($size){
        $this->size = $size;
    }
    function getSize(){
        return $this->size;
    }
    function setFrequency($frequency){
        $this->frequency = $frequency;
    }
    function getFrequency(){
        return $this->frequency;
    }
    function __destruct()
    {
        
    }
}
?>