**sort syntax:**
```
#include<bits/stdc++.h>
using namespace std;
vector<int> x={1,2,3};
sort(x.begin(), x.end());
```

**sort inverse syntax:**
```
#include<bits/stdc++.h>
using namespace std;
vector<int> x={1,2,3};
sort(x.begin(), x.end(), greater<int>());
```

**fibonnaci**
```
#include<bits/stdc++.h>
using namespace std;
int n, x = 0, y = 0, next = 0;
for (int i = 0; i < n; i++) {  
    cout << x << endl;
    next = x + y;
    x = y;
    y = next;
}
```

**math**
```
area do triangulo retangulo: A=(A*C)/2
circulo: A=pi*(C*C)
trapézio: A=((A+B)*C)/2
quadrado: A=B*B
retângulo: A=A*B
formula da area: base x altura
formula do periemetro: base_baixo + base_cima + lado_esquerdo + lado_direito
a condição para um ser possivel fazer a área de um triângulo com 3 pontos: if (a + b > c && b + c > a && a + c > b)
teorema de pitágoras: sqrt((x2 * x2) - (x1 * x1) + (y2 * y2) - (y1 * y1))
4 quadrantes e Eixos:
Origem: x = 0; y = 0;
Eixo x: y = 0; x != 0;
Eixo y: x = 0; y != 0;
Q1: x > 0; y > 0;
Q2: x < 0; y > 0;
Q3: x < 0; y < 0;
Q4: x > 0; y < 0; 
```

**convert**
```
converter horas em minutos: int minutos = hora * 60 + minutos
converter minutos em horas: int horas = minutos / 60
converter minutos em minutos de 1 hora = minutos % 60
converter dias em horas: d *= 24
converter horas pra minutos: h *= 60
converter minutos para segundos: m *= 60
```