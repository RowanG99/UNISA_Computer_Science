class book:
    price=100
    @classmethod
    def display(cls):
        print(cls.price)
    def show(self, x):
        self.price = x;
        print(self.price)

b=book()
c=book()

book.display()
b.display()
c.display()
b.show(200)
c.show(300)