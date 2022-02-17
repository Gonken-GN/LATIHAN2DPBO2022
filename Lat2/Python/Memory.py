from Hardware import Hardware
class Memory(Hardware):
    def __init__(self):
        self.cuda = ""
        self.size = ""
        self.frequency = ""
    def setCuda(self, cuda):
        self.cuda = cuda
    def getCuda(self):
        return self.cuda
    def setSize(self, size):
        self.size = size
    def getSize(self):
        return self.size
    def setFrequency(self, frequency):
        self.frequency = frequency
    def getFrequency(self):
        return self.frequency