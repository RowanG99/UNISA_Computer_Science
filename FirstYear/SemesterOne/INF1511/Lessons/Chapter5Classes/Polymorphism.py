class book:
    def __init__(self, x):
        self.price = x

class stocklist(book):
    def __init__(self, x):
        book.__init__(self,x)
    def commission(self):
        self.comm=self.price*5/100
        print("Commission of stocklist is %.2f" %self.comm)

class distributor(book):
    def __init__(self,x):
        book.__init__(self, x)
    def commission(self):
        self.comm=self.price*8/100
        print("Commission of distributor is %.2f" %self.comm)

class retailer(book):
    def __init__(self,x):
        book.__init__(self,x)
    def commission(self):
        self.comm=self.price*10/100
        print("Commission of retailer is %.2f" %self.comm)

r = stocklist(100)
s = distributor(100)
t = retailer(100)

prncomm = [r,s,t]
for c in prncomm:
    c.commission()