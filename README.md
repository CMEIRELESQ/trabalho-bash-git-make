# Trabalho Prático: Bash, Git e Make

## Integrantes
- Caio Aparecido Meireles de Souza

## Dificuldades encontradas

Durante o desenvolvimento deste trabalho, enfrentei algumas dificuldades, especialmente por estar lidando com ferramentas novas:

- Foi minha segunda vez utilizando Git com branches e commits de forma organizada. Precisei entender como funciona o fluxo de trabalho: criar branch, fazer commits pequenos, depois fazer merge com a branch principal e enviar para o GitHub.
- Tive problemas para configurar o repositório remoto no GitHub, como mensagens de erro “remote origin already exists” e “repository not found”, até entender como corrigir.
- Descobri que o GitHub não aceita mais senha na hora do push via HTTPS, o que me forçou a aprender sobre autenticação com token — algo que não é muito claro no terminal.
- Nunca tinha criado um Makefile antes, então foi desafiador entender como compilar programas diferentes com regras separadas e incluir as flags `-Wall -Wextra`.
- Também tive que aprender a escrever scripts Bash simples para gerar e redirecionar entradas e saídas de teste.
- Por fim, garantir que os programas C++ lessem corretamente os dados do `cin`, principalmente quando redirecionados a partir de arquivos `.in`, exigiu atenção.

Apesar dessas dificuldades, e de horas estudando consegui superar essas 'barreiras'


## Arquivos de teste

Durante o desenvolvimento, foram criados arquivos de teste contendo exemplos de entrada e saída para validar o funcionamento dos programas:

- `test1-primo.in` → entrada com número primo ou não primo
- `test1-vetor.in` → entrada com vetor de inteiros para verificar o maior valor
- `test1-matriz.in` → entrada com duas matrizes e a operação a ser realizada

Esses arquivos permitiram testar os programas com entradas reais, usando redirecionamento:

```bash
./primo < test1-primo.in
./vetor < test1-vetor.in
./matriz < test1-matriz.in
