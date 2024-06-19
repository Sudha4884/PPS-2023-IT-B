class A:
    def hello(self):
        print("Hello from A")

class B(A):
    def hello(self):
        print("Hello from B")
        super().hello()

class C(A):
    def hello(self):
        print("Hello from C")
        super().hello()

class D(B,A):
     def hello(self):
        print("Hello from D")
        super().hello()

def main():
    obj = D()
    obj.hello()

if __name__ == "__main__":
    main()