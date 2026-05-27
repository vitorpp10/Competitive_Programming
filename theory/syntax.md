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

**stack**
```
funciona como um LIFO(Last in, First Out), ou seja, o último elemento a entrar é o primeiro a sair

stack<int> s;

-push(valor): Insere um elemento no topo da pilha.
-pop(): Remove o elemento que está no topo (não retorna valor, apenas deleta).
-top(): Retorna (dá acesso) ao elemento que está no topo atual, sem removê-lo.
-empty(): Retorna um booleano (true se a pilha estiver vazia, false se tiver elementos).
-size(): Retorna a quantidade de elementos atualmente guardados na pilha.
```

**lower_bound && upper_bound**
```
int posicao_inicial = lower_bound(v.begin(), v.end(), x) - v.begin();
int posicao_final   = upper_bound(v.begin(), v.end(), x) - v.begin();
```

**formula da busca binaria personalizada**
```
double low = MIN_POSSIVEL, high = MAX_POSSIVEL;

for (int i = 0; i < 100; i++) { // Loop de precisão fixa
    double mid = (low + high) / 2.0;

    // 1. Sua função/simulação matemática que testa o 'mid'
    if (condicao_de_sucesso(mid)) {
        low = mid;   // Ou high = mid (depende se o problema quer aumentar ou diminuir)
    } else {
        high = mid;  // Ou low = mid
    }
}
// No final, 'low' ou 'mid' tem a resposta perfeita.
```

**formula fatorial**
```
n = n * (n-1) * (n-2)...
fatorial = 1;
for (int i = x; i > 0; i--) {
    fatorial *= i;
}
//sendo o x o valor a ser fatorado
```

**achar o primeiro valor que nao seja x + substr**
```
usar isso aqui quando a questao pedir para excluir um numero, ou se ele for repetido
npos representa a busca maxima possivel, ou seja, quer dizer que a busca falhou e nao foi encotrado valores
substr corta a variavel ate o valor e deixa o resto depois dele

auto x = string.find_first_not_of('y');
//se nao encontrar x
if (x == npos) {
    ... 
} else { string.substr(x); }

exemplo melhor:

#include <iostream>
#include <string>

int main() {
    std::string texto = "0000456";
    auto pos = texto.find_first_not_of('0');

    // Se não achou (npos), vira ""; se achou, corta daquela posição em diante
    std::string resultado = (pos == std::string::npos) ? "" : texto.substr(pos);

    std::cout << resultado << std::endl; // Saída: 456
    return 0;
}
```

**formula para descobrir se um valor é primo ou nao** 
```
bool primo = true;
if (x <= 1) { primo = false; }
for (ll i = 2; i * i <= n; i++) { 
    if (n % i == 0) { primo = false; break; }
}
cout << primo << endl;

um numero é primo quando é divisivel somente por um (todo numero) e quando é por ele mesmo (todo numero tambem, ai o n % i, tenta achar algum outro alem dos obvios, se achar é false,e usamos i*i pois, se for maior ja passa do limite, so isso
```

**mdc (algoritmo de euclides)**
```
essa formula usa o algoritmo de euclides que basicamente faz o mdc de dois números de forma rápida e completa
std::gcd(x,y);

se for mais de 2 numeros
std::gcd(std::gcd(x, y), z);

//exemplo
int resultado = std::gcd(std::gcd(12, 24), 30); // Da 6!

assim seria o gcd por tras 
while(y!=0) {
    int r = x % y;
    x = y;
    y = r;
}
cout << x << endl;
```

**mmc**  
```
pega o mdc primeiro depois faz a formula abaixo
(x*y) / mdc;

ou seja:

int x,y;
cin >> x >> y;
int mdc = gcd(x,y);
int mmc = (x*y) / mdc;
```
