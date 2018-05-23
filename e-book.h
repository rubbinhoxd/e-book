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

//função para cadastro de livros 
livro * cadastra_livros () ;

//função para edição de livros
void edita_livros (livro *) ;

//função para cadastro de clientes
cliente * cadastra_cliente () ;

//função para edição de perfil de cliente
void edita_perfil (cliente *) ;

//função para adição de cliente administrador
adm * adiciona_adm () ;

//função para exclusão de cliente administrador 
void exclui_adm () ;
