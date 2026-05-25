usar `while(t--)` sempre que o exercicio pedir n casos de forma isolada

minha snippet: 
```
#include <bits/stdc++.h>

#define fastio \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
	//code here
	return 0;
}
```

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

para verificar se um vetor esta ordenado
is_sorted(vector.begin(), vector.end());
```

**bubble sort**
```
tecnica para trocar vetor da esquerda pra direita

vector<int> v={4,3,2,1};
for (size_t i = 0; i < v.size(); i++) {
    for (size_t j = 1; j < v.size(); j++) {
        if (v[j-1] > v[j]) swap(v[j-i], v[j]);
    }
}

se usa size_t pois ele aceita numeros gigantes e nao aceita negativas, usamos ele pois da mais garantia que nao vá haver falhas no compilador
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

**accumulate**
```
somar um vetor em uma linha de forma rápida:
long long s = accumulate(vetor.begin(), vetor.end(), 0LL);
```

**erase** 
```
apagar qualquer indice de um vetor
vetor.erase(vetor.begin + n);
n seria o número do indice que voce quer apagar a partir do indice 0
```
