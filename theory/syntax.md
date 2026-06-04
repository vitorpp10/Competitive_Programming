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
cout << posicao_inicial << "," << posicao_final-1 << endl;

fazemos "posicao_final-1" pois o upper retorna um numero/indice maior que o valor alvo entao voltamos uma casa para pegar o valor em si ne, no caso faça isso quando quiser pegar o valor em si e não um maior que ele
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

**vetor bidimensional**
```
um vetor dentro de outro vetor, muito usado para quando você precisa guarda um vetor inteiro como 1 indice de outro vetor para manipular algo 
vector<vector<tipo>> v;
v.push_back(outro_vetor);
```

**find (procurar um valor dentro de um vetor ou vetor bidimensional)**
```
para vetor normal -> vector<int> v;
auto it = find(v.begin(), v.end(), valor_que_quer_procurar);

para vetor bidimensional
auto it = find(v[indice].begin(), v[indice].end(), valor_que_quer_procurar);
```

**porcentagem**
```
quando quiser descontar de um valor:
double descontado = n/100 * %;

quando quiser adicionar com base na porcentagem:
double adicionado = n * %/100;
```

**os unicos numeros que nao tem divisoes impares sao aqueles que estao na potencia de 2**
```
ex: \(12 = 2 \times 2 \times 3\), olha o 3 aí; \(20 = 2 \times 2 \times 5\)

formula para ver se um numero e potencia de 2:
if ((n & (n - 1)) == 0) -> potencia 

como isso funciona por baixo dos panos supondo n = 8:
8 em binario e 1000
7 em binario e 0111 
isso da = 0000 que é 0, exatamente oque o if acima pede, porém isso so funciona para potência de 2, porque um numero que e potencia de 2 seu antecessor em binario vai ser o contrariodele, ou seja, vai dar 0 significando que é uma potencia de 2
```

**descobrir se um numero e impar ou par de forma mais rapida**
```
todo numero par em bits termina em 0 e todo numero impar em bits termina em 1, entao:
se fizermos n & 1, isolamos apenas o ultimo bit, podendo manipular ele
if ((n & 1) == 0)) { par } else { impar }
isso e mais rapido que usar MOD(%)
```

***so e preciso usar chaves({}) quando linha>1*** 

**algoritmo de crivo para pegar todos os numeros primos de 1 ate n**
```
int n;
cin >> n;
vector<bool> p(n+1, true);
vector<int> v;
p[0] = p[1] = false;
for(int i = 2; i*i <= n; i++)
    if (p[i])
        for (int j = i*i; j <= n; j+=i) 
            p[j] = false;
for(int i = 2; i <= n; i++) 
    if (p[i]) v.push_back(i);
```

**crivo fatorial para pegar numeros quase primos**
```
int n,c=0;
cin >> n;
vector<int> v(n+1, 0);
for(int i = 2; i <= n; i++)
    if(v[i] == 0) 
        for (int j = i; j <= n; j+=i) 
            v[j]++;
for(int i = 1; i <= n; i++) 
    if(v[i] >= 2) c++;
cout << c << endl;
```

**lcm para mmc de dois números**
```
std::lcm(x, y);
```

**para pegar o menor elemento de um vetor e seu indice**
```
valor:
int menor = *min_element(v.begin(), v.end()));

indice:
int menor_indice = min_element(v.begin(), v.end()) - v.begin();
```

**para fazer uma matriz em c++**
```
vector<vector<double>> m(12, vector<double>(12));
```

**Acima da Diagonal Principal** 
`for(int j = i + 1; j < N; j++)`

**Abaixo da Diagonal Principal**
`for(int j = 0; j < i; j++)`

**Acima da Diagonal Secundária**
`for(int j = 0; j < (N-1) - i; j++)`

**Abaixo da Diagonal Secundária**
`for(int j = N - i; j < N; j++)`

**prev pega o penultimo elemento de um vetor**
```
prev(vetor.end());
```

**two sum classico**
```
for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        if(v[j] == t - v[i]) cout << i << j << endl;  
    }
}
```

**eliminar palavras iguais**
```
unordered_set<tipo> u(vetor.begin(), vetor.end());
```

quando o exercicio tiver limites muitos pequenos sempre teste todas as possibilidades com loops

**loop comparando valor atual com proximo map**
```
map<char,int> m={{'A', 1}, {'B', 2}};
for(auto it = m.begin(); it != m.end(); it++) {
    int proximo = next(it);
    //condicoes aqui
}
```

**pegar o maior ou menor valor de um map ou unordered com lambda**
```
auto mm = max_element(m.begin(), m.end(), [](const auto& a, const auto& b) { return a.second < b.second });
```

**two_pointer**
```cpp
//exemplo two pointer para peccorer 2 vetores e achar a menor diferenca de valor entre eles
int menor = 2e9;
int i = 0, j = 0;
while(i < n && j < m) {
    if(abs(vetor1[i] - vetor2[j]) < me) me = abs(vetor1[i] = vetor2[j]);
    if(vetor1[i] < vetor2[i]) i++; else j++;
}
cout << me << endl;

//quem denomina se vai andar ou nao sao as condicoes nao um FOR por exemplo
```

**x=-x**
```cpp
macete para parar de usar impar/par ou if/else em alguns casos, exemplo abaixo:

int s = 0;
int sinal = 1; //se começar negativo mude para -1 

for(int i = 0; i < v.size(); i++) {
    s += v[i] * sinal;
    sinal = -sinal; // 1 vira -1, -1 vira 1, e assim por diante
}

ou seja, ele ja faz a soma e subtracao dependo do i, se por exemplo o problema for subtraia todos os pares e todos os impares, e so voce fazer isso porque i começa em 0 que e par, depois impar, depois par, ai vai subtraindo sozinho, a logica por tras fica:

s += 10 * 1; 
s += 5 * (-1); 
s = 5 //pois (10-5) 5 vira negativo
```
