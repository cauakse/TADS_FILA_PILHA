#define MAXFILA 100

struct TpElemento{
	int valor,prioridade;
};
struct TpFilaCircularPrioridade{
	TpElemento fila[MAXFILA];
	int fim,inicio,cont;
};
void inicializaTpFilaCircularPrioridade (TpFilaCircularPrioridade &fill)
{
	fill.fim=-1;
	fill.inicio=0;
	fill.cont=0;
}
void insereTpFilaCircularPrioridade (TpFilaCircularPrioridade &fill,TpElemento ele)
{
	if(fill.fim==MAXFILA-1)
	fill.fim=-1;
	
	fill.fila[++fill.fim]=ele;
	if(fill.fim>fill.inicio)// se fill.fim==0 como que funciona?
	{
		for(int i=fill.fim;i>fill.inicio&&fill.fila[i].prioridade<fill.fila[i-1].prioridade;i--)
		{
			ele=fill.fila[i];
			fill.fila[i]=fill.fila[i-1];
			fill.fila[i-1]=ele;
		}
	}
	else
	{
		for(int i=fill.fim;i>0&&fill.fila[i].prioridade<fill.fila[i-1].prioridade;i--)
		{
			ele=fill.fila[i];
			fill.fila[i]=fill.fila[i-1];
			fill.fila[i-1]=ele;	
		}
		if(fill.fila[0].prioridade<fill.fila[MAXFILA-1].prioridade)
		{
			ele=fill.fila[MAXFILA-1];
			fill.fila[MAXFILA-1]=fill.fila[0];
			fill.fila[0]=ele;
			for(int i = MAXFILA-1;i>fill.inicio&&fill.fila[i].prioridade<fill.fila[i-1].prioridade;i--)
			{
				ele=fill.fila[i];
				fill.fila[i]=fill.fila[i-1];
				fill.fila[i-1]=ele;
			}
		}
		
	}
	
	fill.cont++;
}
void retiraTpFilaCircularPrioridade (TpFilaCircularPrioridade &fill)
{
	int aux = fill.fila[fill.inicio++];
	
	if(fill.inicio==MAXFILA)
	fill.inicio=0;
	
	fill.cont--;
	return aux;
}
