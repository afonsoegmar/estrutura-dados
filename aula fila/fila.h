//fila = queue
typedef int TipoItem;
const int max_itens = 100;

class fila{
    private:
    int primeiro, ultimo;
    TipoItem* estrutura;

    public:
    fila(); //construtor
    ~fila();//destrutor
    bool estavazio();//isempty
    bool estacheio();//isfull
    void inserir(TipoItem item);//pusch//enqueue
    TipoItem remover();//pop//dequeue
    void imprimir();//print
};