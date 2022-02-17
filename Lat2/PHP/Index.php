<?php
include "Product.php";
include "Hardware.php";
include "Memory.php";
$gforce = new Memory();
$gforce->setBrand("Nvidia");
$gforce->setModel("GPU");
$gforce->setFrequency("8_GBPS");
$gforce->setCuda("Yes");
$gforce->setSize("8_GB");
$gforce->setId("gtx-1650");
$gforce->setPrice("RP_5.200.000");
echo "Brand Memory: ".$gforce->getBrand(). "<br>";
echo "Model Memory: ".$gforce->getModel(). "<br>";
echo "Frequency Memory: ".$gforce->getFrequency(). "<br>";
echo "SupportCuda Memory: ".$gforce->getBrand(). "<br>";
echo "Memory Size: ".$gforce->getSize(). "<br>";
echo "ID Memory: ".$gforce->getId(). "<br>";
echo "Price Memory: ".$gforce->getPrice(). "<br>";
?>