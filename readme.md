![img](ccomplete.png)

O framework **CCOMPLETE** é uma coleção de utilitários escritos em C para manipulação de arrays, pilhas, ordenação, busca, exibição de dados, entre dezenas de estruturas de dados... Este documento descreve cada função disponível no framework, explicando seu propósito e como utilizá-la.

---

## **Funções de Manipulação de Arrays**

### **`create_array`**
- **Descrição**: Cria uma estrutura `Array` a partir de um ponteiro para um array e seu tamanho.
- **Definição**: 
  ```c
  Array create_array(int *data, size_t size);
  ```
- **Parâmetros**:
  - `data`: Ponteiro para o array de inteiros.
  - `size`: Tamanho do array.
- **Retorno**: Estrutura `Array` contendo os dados e o tamanho.
- **Localização**: `array.c`

### **`print_array`**
- **Descrição**: Imprime os elementos de um array na saída padrão.
- **Definição**:
  ```c
  void print_array(Array arr);
  ```
- **Parâmetros**:
  - `arr`: Estrutura `Array` a ser exibida.
- **Localização**: `array.c`

---

## **Funções de Pilha Dinâmica**

### **`create_stack`**
- **Descrição**: Cria uma pilha dinâmica inicializada com capacidade inicial de 2 elementos.
- **Definição**:
  ```c
  IStack create_stack(void);
  ```
- **Retorno**: Estrutura `IStack` inicializada.
- **Localização**: `istack.c`

### **`spush`**
- **Descrição**: Adiciona um elemento ao topo da pilha, redimensionando-a se necessário.
- **Definição**:
  ```c
  void spush(IStack *stack, int value);
  ```
- **Parâmetros**:
  - `stack`: Ponteiro para a pilha.
  - `value`: Valor a ser adicionado.
- **Localização**: `istack.c`

### **`spop`**
- **Descrição**: Remove e retorna o elemento do topo da pilha.
- **Definição**:
  ```c
  int spop(IStack *stack);
  ```
- **Parâmetros**:
  - `stack`: Ponteiro para a pilha.
- **Retorno**: Valor removido ou `-1` se a pilha estiver vazia.
- **Localização**: `istack.c`

### **`speek`**
- **Descrição**: Retorna o elemento do topo da pilha sem removê-lo.
- **Definição**:
  ```c
  int speek(const IStack *stack);
  ```
- **Parâmetros**:
  - `stack`: Ponteiro constante para a pilha.
- **Retorno**: Valor do topo ou `-1` se a pilha estiver vazia.
- **Localização**: `istack.c`

### **`sis_empty`**
- **Descrição**: Verifica se a pilha está vazia.
- **Definição**:
  ```c
  int sis_empty(const IStack *stack);
  ```
- **Parâmetros**:
  - `stack`: Ponteiro constante para a pilha.
- **Retorno**: `1` se vazia, `0` caso contrário.
- **Localização**: `istack.c`

### **`sfree_stack`**
- **Descrição**: Libera a memória alocada pela pilha.
- **Definição**:
  ```c
  void sfree_stack(IStack *stack);
  ```
- **Parâmetros**:
  - `stack`: Ponteiro para a pilha.
- **Localização**: `istack.c`

### **`sprint_stack`**
- **Descrição**: Imprime os elementos da pilha na saída padrão.
- **Definição**:
  ```c
  void sprint_stack(const IStack *stack);
  ```
- **Parâmetros**:
  - `stack`: Ponteiro constante para a pilha.
- **Localização**: `istack.c`

### **`ssearch`**
- **Descrição**: Busca um valor na pilha e retorna seu índice.
- **Definição**:
  ```c
  int ssearch(const IStack *stack, int value);
  ```
- **Parâmetros**:
  - `stack`: Ponteiro constante para a pilha.
  - `value`: Valor a ser buscado.
- **Retorno**: Índice do valor ou `-1` se não encontrado.
- **Localização**: `istack.c`

---

## **Funções de Ordenação**

### **`bisort`**
- **Descrição**: Ordena um array de inteiros usando o algoritmo Bubble Sort.
- **Definição**:
  ```c
  void bisort(int *list, int size);
  ```
- **Parâmetros**:
  - `list`: Ponteiro para o array.
  - `size`: Tamanho do array.
- **Localização**: `bisort.c`

### **`qisort`**
- **Descrição**: Ordena um array de inteiros usando o algoritmo Quick Sort.
- **Definição**:
  ```c
  void qisort(int *list, int low, int high);
  ```
- **Parâmetros**:
  - `list`: Ponteiro para o array.
  - `low`: Índice inicial.
  - `high`: Índice final.
- **Localização**: `qisort.c`

---

## **Funções de Busca**

### **`sbint`**
- **Descrição**: Realiza uma busca binária em um array ordenado.
- **Definição**:
  ```c
  int sbint(int *list, int size, int target);
  ```
- **Parâmetros**:
  - `list`: Ponteiro para o array.
  - `size`: Tamanho do array.
  - `target`: Valor a ser buscado.
- **Retorno**: Índice do valor ou `-1` se não encontrado.
- **Localização**: `sbint.c`

---

## **Funções de Exibição**

### **`difor`**
- **Descrição**: Exibe os elementos de um array de inteiros.
- **Definição**:
  ```c
  void difor(int *list, int size);
  ```
- **Parâmetros**:
  - `list`: Ponteiro para o array.
  - `size`: Tamanho do array.
- **Localização**: `difor.c`

### **`dcfor`**
- **Descrição**: Exibe os elementos de um array de caracteres.
- **Definição**:
  ```c
  void dcfor(char *list, int size);
  ```
- **Parâmetros**:
  - `list`: Ponteiro para o array.
  - `size`: Tamanho do array.
- **Localização**: `dcfor.c`

---

## **Funções Auxiliares**

### **`swap`**
- **Descrição**: Troca dois elementos de um array.
- **Definição**:
  ```c
  void swap(int *list, int i, int j);
  ```
- **Parâmetros**:
  - `list`: Ponteiro para o array.
  - `i`: Índice do primeiro elemento.
  - `j`: Índice do segundo elemento.
- **Localização**: `swap.c`

### **`size`**
- **Descrição**: Calcula o número de elementos em um array estático.
- **Definição**:
  ```c
  #define size(arr) (sizeof(arr) / sizeof((arr)[0]))
  ```
- **Parâmetros**:
  - `arr`: Array estático.
- **Localização**: `size.h`

### **`csize`**
- **Descrição**: Calcula o comprimento de uma string.
- **Definição**:
  ```c
  int csize(const char *list);
  ```
- **Parâmetros**:
  - `list`: Ponteiro para a string.
- **Retorno**: Comprimento da string.
- **Localização**: `csize.c`

---

## **Como Usar o Framework**

1. **Instale o MSYS2**:
   - Siga as instruções no arquivo readme.md.

2. **Compile o projeto**:
   ```bash
   make
   ```

3. **Execute o programa principal**:
   ```bash
   make run
   ```

4. **Limpe os arquivos gerados**:
   ```bash
   make clean
   ```

---

Este documento serve como guia para entender e utilizar as funcionalidades do framework **CCOMPLETE**.

Otavig: Quero que vc faça isso no readme 

Workspace: Collecting workspace informationAqui está o conteúdo atualizado do readme.md com melhorias na formatação e explicações mais detalhadas:

```markdown
# CCOMPLETE

## Descrição
Este projeto é uma estrutura modular em C que implementa diversas funcionalidades, como ordenação, busca binária, manipulação de pilhas dinâmicas, e exibição de dados.

## Pré-requisitos
Antes de começar, certifique-se de ter o [MSYS2](https://www.msys2.org/) instalado no seu sistema, caso não tenha acesse o site descrito ou instale dos arquivos.

## Passos para Configuração e Execução

### Passo 0: Instalar o MSYS2
Baixe e instale o MSYS2 a partir do site oficial.

### Passo 1: Atualizar os pacotes
Abra o terminal do MSYS2 e execute:
```bash
pacman -Syu
```

### Passo 2: Instalar dependências
Instale os pacotes necessários para compilar o projeto:
```bash
pacman -S base-devel gcc make
```

### Passo 3: Compilar e executar o projeto
No diretório raiz do projeto, execute:
```bash
make run
```

Este comando irá compilar o código e executar o binário gerado.

## Estrutura do Projeto
O projeto está organizado da seguinte forma:
```
app/
    main.c          # Arquivo principal do programa
utils/
    array/      
    display/        
    searchs/       
    sizelist/       
    sorts/         
```

## Funcionalidades
- **Ordenação**: Bubble Sort e Quick Sort.
- **Busca**: Busca binária.
- **Estruturas Dinâmicas**: Pilha dinâmica.
- **Exibição**: Impressão de inteiros e caracteres.

## Limpeza
Para remover os binários gerados, execute:
```bash
make clean
```

## Licença
Este projeto está sob a licença MIT.