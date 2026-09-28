sar `while(t--)` sempre que o exercicio pedir n casos de forma isolada

minha snippet: 
```cpp
#include <bits/stdc++.h>

#define ll long long
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
```cpp
#include<bits/stdc++.h>
using namespace std;
vector<int> x={1,2,3};
sort(x.begin(), x.end());
```
**sort inverse syntax:**
```cpp
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
```cpp
#include<bits/stdc++.h>
using namespace std;
int n, x = 0, y = 1, next = 0;
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

**fibonacci**
```cpp
int anterior = 0;
int atual = 1;
for (int i = 2; i <= n; i++) {
	int proximo = atual + anterior;
	cout << " " << atual;
	anterior = atual;
	atual = proximo;
}
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

Quando o enunciado falar ***EOF*** quer dizer que é para usar `while(cin >> x)` até a leitura acabar

**lower_bound && upper_bound puro**
```cpp
auto it_lower = lower_bound(dados.begin(), dados.end(), val);
cout << *it;
```

**lower_bound && upper_bound**
```cpp
int posicao_inicial = lower_bound(v.begin(), v.end(), x) - v.begin();
int posicao_final   = upper_bound(v.begin(), v.end(), x) - v.begin();
```

**formula da busca binaria personalizada**
```cpp
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
```cpp
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
```

**mmc**  
```cpp
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

quando quiser a porcentagem de algo com base com y ganho, exemplo:
salario fixo: 500;
bonus de vendas feitas: 1200 vendas;
para adicionar o bonus em porcentagem faça:
500/1200 * 100;
ou seja:
	double com_bonus = n/b * 100;
```

| **Limite de N**            | **O que significa (Complexidade)**             | **O que usar no código**                                                              |
| -------------------------- | ---------------------------------------------- | ------------------------------------------------------------------------------------- |
| **$N \le 10$ ou $12$**     | Crescimento brutal (Força bruta)               | Recursão profunda, backtracking ou permutações ($O(N!)$)                              |
| **$N \le 20$**             | Exponencial ($O(2^N)$)                         | Bitmask (testar subconjuntos) ou recursão                                             |
| **$N \le 500$**            | Cúbico ($O(N^3)$)                              | Três laços `for` aninhados                                                            |
| **$N \le 5.000$**          | Quadrático ($O(N^2)$)                          | Dois laços `for` aninhados (comparar pares/matrizes)                                  |
| **$N \le 10^5$ ou $10^6$** | Linear ou Logarítmico (**Dois loops dão TLE**) | Um único `for` ($O(N)$), ordenação (`sort`) ou `std::map`/`std::set` ($O(N \log N)$)  |
| **$N \le 10^8$**           | Limite extremo para 1 segundo                  | Um único `for` ultra-simples e leitura rápida (`fast IO`)                             |
| **$N \le 10^{18}$**        | Número gigantesco (só cabe em `long long`)     | Fórmula direta ($O(1)$) ou divisões sucessivas (Busca Binária / Exponenciação Rápida) |

**os unicos numeros que nao tem divisoes impares sao aqueles que estao na potencia de 2**
```
ex: \(12 = 2 \times 2 \times 3\), \(20 = 2 \times 2 \times 5\)

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

todo final de 5” é 25

***so e preciso usar chaves({}) quando linha>1*** 

**algoritmo de crivo para pegar todos os numeros primos de 1 ate n**
```cpp
int n;
cin >> n;
vector<bool> p(n+1, true);
vector<int> v;
p[0] = p[1] = false;
for (int i = 2; i*i <= n; i++)
    if (p[i])
        for (int j = i*i; j <= n; j+=i) 
            p[j] = false;
for (int i = 2; i <= n; i++) 
    if (p[i]) v.push_back(i);
```

*entao basicamente o crivo*

*começa loop de 2, ve se o mulitplo de 2 vai ate se n, se for ele entra no loop e começa a partir de 1 mulitiplo depois dele ou seja 4, e risca todos os multiplos ate n, depois risca o do proximo numero enquanto for menor que n, porque na teoria um primo so é multiplo de 1 e dele mesmo então valor for divisivel por outro, por exemplo 4/2 entao ele nao é primo, por isso ele passa varrendo todos que tem multiplos que sao diferentes de 1 ou dele mesmo*

**crivo fatorial para pegar numeros quase primos**
```cpp
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
```cpp
std::lcm(x, y);
```

**para pegar o menor elemento de um vetor e seu indice**
```cpp
valor:
int menor = *min_element(v.begin(), v.end()));

indice:
int menor_indice = min_element(v.begin(), v.end()) - v.begin();
```

**para fazer uma matriz em c++**
```cpp
vector<vector<double>> m(12, vector<double>(12));
```


matriz vetor: 

**Acima da Diagonal Principal** 
`for(int j = i + 1; j < N; j++)`

**Abaixo da Diagonal Principal**
`for(int j = 0; j < i; j++)`

**Acima da Diagonal Secundária**
`for(int j = 0; j < (N-1) - i; j++)`

**Abaixo da Diagonal Secundária**
`for(int j = N - i; j < N; j++)`

**Triângulo Superior:** `j > i` **E** `j < 11 - i`
**Triângulo Inferior:** `j < i` **E** `j > 11 - i` (que vira o loop `j = 12 - i; j < i`)
**Triângulo Esquerdo:** `j < i` **E** `j < 11 - i`
**Triângulo Direito:** `j > i` **E** `j > 11 - i`

**Diagonal Principal**: Vai do canto superior esquerdo ↖️ para o canto inferior direito ↘️ (o desenho "desce" da esquerda para a direita)

**Diagonal Secundária**: Vai do canto superior direito ↗️ para o canto inferior esquerdo ↙️ (o desenho "sobe" da esquerda para a direita).
```handwritten-ink
{
	"versionAtEmbed": "0.3.4",
	"filepath": "Ink/Writing/2026.6.1 - 10.32am.writing"
}
```

Diagonal Principal
```cpp
for(int i = 0; i < 12; i++) {
    int j = i;
    s += m[i][j];
    c++;
}
```

Diagonal Secundária
```cpp
for(int i = 0; i < 12; i++) {
    int j = 11 - i;
    s += m[i][j];
    c++;
}
```

Acima da Diagonal Principal
```cpp
for(int i = 0; i < 12; i++) {
    for(int j = i + 1; j < 12; j++) {
        s += m[i][j];
        c++;
    }
}
```

Abaixo da Diagonal Principal
```cpp
for(int i = 0; i < 12; i++) {
    for(int j = 0; j < i; j++) {
        s += m[i][j];
        c++;
    }
}
```

Acima da Diagonal Secundária
```cpp
for(int i = 0; i < 11; i++) {
    for(int j = 0; j < 11 - i; j++) {
        s += m[i][j];
        c++;
    }
}
```

Abaixo da Diagonal Secundário
```cpp
for(int i = 1; i < 12; i++) {
    for(int j = 12 - i; j < 12; j++) {
        s += m[i][j];
        c++;
    }
}
```

Triângulo Superior
```cpp
for(int i = 0; i <= 4; i++) {
    for(int j = i + 1; j < 11 - i; j++) {
        s += m[i][j];
        c++;
    }
}
```

Triângulo Inferior
```
for(int i = 7; i < 12; i++) {
    for(int j = 12 - i; j < i; j++) {
        s += m[i][j];
        c++;
    }
}
```

Triângulo Esquerdo
```cpp
for(int i = 1; i < 11; i++) {
    for(int j = 0; j < min(i, 11 - i); j++) {
        s += m[i][j];
        c++;
    }
}
```

Triângulo Direito
```cpp
for(int i = 1; i < 11; i++) {
    for(int j = max(i, 11 - i) + 1; j < 12; j++) {
        s += m[i][j];
        c++;
    }
}
```

**prev pega o penultimo elemento de um vetor**
```cpp
prev(vetor.end());
```

**two sum classico**
```cpp
for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
        if(v[j] == t - v[i]) cout << i << j << endl;  
    }
}
```

**eliminar palavras iguais**
```cpp
unordered_set<tipo> u(vetor.begin(), vetor.end());
```

quando o exercicio tiver limites muitos pequenos sempre teste todas as possibilidades com loops

**loop comparando valor atual com proximo map**
```cpp
map<char,int> m={{'A', 1}, {'B', 2}};
for(auto it = m.begin(); it != m.end(); it++) {
    int proximo = next(it);
    //condicoes aqui
}
```

**pegar o maior ou menor valor de um map ou unordered com lambda**
```cpp
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


**multiplicar o tamanho de um vetor**
```cpp
for(int i = 0; i < n; i++) v.push_back(v[i]);
```

**distancia de manhattan**
```cpp
formula para calcular quantas linhas e colunas um x precisa andar para chegar a y;
abs(linha - linha_chegada) + abs(coluna - coluna_chegada);
usamos valor absoluto(abs), pois sempre retorna uma valor positivo, como o foco é na distância até algo, então usamos valor absoluto
```

```handwritten-ink
{
	"versionAtEmbed": "0.3.4",
	"filepath": "Ink/Writing/2026.6.9 - 15.10pm.writing"
}
```
	
**transforma um caracterer todo em minusculo**
```cpp
string s = "texto";
std::transform(texto.begin(), texto.end(), texto.begin(), ::tolower);

transform = percorre string toda fazendo algo
tolower = transforma char em minusculo, ou seja, letra por letra
```

**transformar um caracterer todo em maiusculo**
```cpp
string s = "texto";
std::transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
```

**macete para MOD com numeros negativos nao dar erro**
```cpp
cout << ((x - y) % z + z) % z << endl;
```

**macete MOD positivo 2 numeros**
```cpp
int mod = ((x % y) + y) % y;
```

**formula de gauss**
se uma questão falar de acumulação, exemplo:
*"Um atleta corre 1 km no primeiro dia, 2 km no segundo, 3 km no terceiro... quantos km ele correu apos D dias?"*
deve-se usar a formula de gauss que diz o seguinte, se voce somar os numeros em pares, primeiro com ultimo, segundo com penultimo etc, eles sempre vao dar o mesmo resultado final, ou seja, se fizer, 1 + final, sempre vai ser a resposta pra soma de 1 a n. Com isso depois descobre quantos pares da pra fazer, para pegar isso deve dividir n/2 com isso voce consegue saber a soma de 1 a n, com a formula:
```cpp
long long gauss = total + (total*1) / 2
```
```handwritten-ink
{
	"versionAtEmbed": "0.3.4",
	"filepath": "Ink/Writing/2026.6.9 - 18.55pm.writing"
}
```

**apagar todas as ocorrências de um caractere** 
```cpp
string s = "t-e-x-t-o";
s.erase(remove(s.begin(), s.end(), '-'), s.end());
```

**adicionar mais de um elemento de uma vez vetor**
```cpp
vector<int> v={10, 20};
v.insert(v.end(), {30,40,50});
```
