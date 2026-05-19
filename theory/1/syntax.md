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

**caps**
```
para checar se uma letra é maiuscula: isupper(letra);
para checar se uma letra é minuscula: islower(letra);
para checar se uma letra é alguma do alfabeto de A a Z: isalpha(letra)
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
para adicionar porcentagem ou tirar porcentagem:
add: (100% + porcentagem), exemplo: 100% + 15% = 115%->1,15->1,15 * n
sub: (100% - porcentagem), exemplo: 100% - 15% = 85%->0,85->0,85 * n
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

**invert**
```
inverter vetor: reverser(vetor.begin(), vetor.end());
```

**set** 
```
tira os itens duplicados de uma lista e ordena ela
#include<set>
std::set<tipo> x;
x.insert(vetor);
```

**map**
```
criando map de 2 valores e comparando eles
map<string, int> m1={"a", 3};
map<string, int> m2={"a", 2};
for (const auto& x : m1) {
    string nome = m1.first;
    int valor_m1 = m1.second;

    //aqui voce cria uma variavel que vai fazer o m2 tentar achar um nome igual tem no m1, se ele achar ele pega o valor do nome que foi achado e depois faz a conta que você quiser

    auto comparar_nomes = m2.find(nome);
    if (comparar_nomes != m2.end()) {
        int valor_m2 = comparar_nomes->second;
        int resultado = valor_m1 * valor_m2;
        cout << resultado << endl;
    }
}
```