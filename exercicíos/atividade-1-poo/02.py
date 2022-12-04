class Triangulo:
    def __init__(self, lado):
            self._lado = lado

    @property
    def lado(self):
        return self._lado

    @lado.setter
    def lado(self, lado):
        self._lado = lado

    @property
    def area(self):
        return self._base*altura/2
    
    @property
    def perimetro(self):
        return self._lado*3

    @perimetro.setter
    def perimetro(self, perimetro):
        self._lado = perimetro/3

    @property
    def altura(self):
        return self._lado*3/2
    
    @altura.setter
    def altura(self, altura):
        self._lado = altura/3*2

    @property
    def base(self):
        return self._lado/2

    @base.setter
    def base(self, base):
        self._lado = base*2

    