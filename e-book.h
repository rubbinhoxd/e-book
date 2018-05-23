//estrutura para livros
typedef struct
{
	char titulo[100] ;
	char autor[100] ;
	char genero[50] ;
	float preco ;
	int disponiveis ;
} livro ;

//estrutura para cliente
typedef struct
{
	char nome[100] ;
	int cpf ;
	int senha ;
} cliente ;

//estrutura para adm
typedef struct
{
	char login[100] ;
	int senha ;
} adm ;

livro * cadastra_livros () ;
void edita_livros (livro *) ;
cliente * cadastra_cliente () ;
void edita_perfil (cliente *) ;
adm * adiciona_adm () ;
void exclui_adm () ;