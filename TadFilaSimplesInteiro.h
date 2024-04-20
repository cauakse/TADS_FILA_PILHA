#define MAXFILA 100

struct TpFilaInt{
	int fila[MAXFILA],fim;
};

void inicializaTpFilaInt(TpFilaInt fill)
{
	fill.fim=-1;
}
int vaziaTpFilaInt (int fim)
{
	return fim == -1;
}
int cheiaTpFilaInt (int fim)
{
	return fim == MAXFILA-1;
}
void inserirTpFilaInt(TpFilaInt fill,int ele)
{
	fill.fila[++fill.fim]=ele;
}
int retirarTpFilaInt (TpFilaInt fill)
{
	char ele = fill.fila[0];
	for(i=0;i<fill.fim;i++)
	{
		fill.fila[i]=fill.fila[i+1];
	}
	fill.fim--;
	return ele;
}
int inicioTpFilaInt (TpFilaInt fill)
{
	return fill.fila[0];
}
int finalTpFilaInt (TpFilaInt fill)
{
	return fill.fila[fill.fim];
}
void exibeTpFilaInt (TpFilaInt fill)
{
	while(!vaziaTpFilaInt(fill))
	{
		printf("\n%d",retirarTpFilaInt(fill));
	}
}
