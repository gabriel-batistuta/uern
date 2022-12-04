class Quadrado:
    def __init__(self, lado):
            self._lado = lado
    
    @property
    def area(self):
        return self._lado**2
    
    @area.setter
    def area(self, area):
        self._lado = area**1/2

    @property
    def lado(self):
        return self._lado

    @lado.setter
    def lado(self, lado):
        self._lado = lado

    @property
    def perimetro(self):
        return self._lado*4

    @perimetro.setter
    def perimetro(self, perimetro):
        self._lado = perimetro/4