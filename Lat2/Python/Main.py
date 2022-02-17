from Product import Product
from Hardware import Hardware
from Memory import Memory

gforce = Memory()
gforce.setBrand("Nvidia")
gforce.setModel("GPU")
gforce.setFrequency("8_GBPS")
gforce.setCuda("Yes")
gforce.setSize("8_GB")
gforce.setId("gtx-1650")
gforce.setPrice("RP_5.200.000")
print("Brand Memory: " + str(gforce.getBrand()))
print("Model Memory: " + str(gforce.getModel()))
print("Frequency Memory: " + str(gforce.getFrequency()))
print("SupportCuda Memory: " + str(gforce.getCuda()))
print("Memory Size: " + str(gforce.getSize()))
print("ID Memory: " + str(gforce.getId()))
print("Price Memory: " + str(gforce.getPrice()))