#define MAXFILA 100
struct TpElemento{
	int ele,prioridade;
};
struct TpFilaPrioridadeInt{
	TpElemento fila[MAXFILA];
	int fim;
};
void inicializaTpFilaPrioridadeInt(TpFilaPrioridadeInt &fill)
{
	fill.fim=-1;
}
TpElemento retiraTpFilaPrioridadeInt(TpFilaPrioridadeInt &fill)
{
	TpElemento aux = fill.fila[0];
	for(i=0;i<fill.fim;i++)
	{
		fill.fila[i]=fill.fila[i+1];
	}
	fill.fim--;
	return aux;
}
void insereTpFilaPrioridadeInt(TpFilaPrioridadeInt &fill,TpElemento ele)
{
	fill.fila[++fill.fim]=ele;
	for(i=fill.fim;i>0&&fill.fila[i].prioridade<fill.fila[i-1].prioridade;i--)
	{
		ele=fill.fila[i-1];
		fill.fila[i-1]=fill.fila[i];
		fill.fila[i]=ele;
	}
}
TpElemento inicioTpFilaPrioridadeInt(TpFilaPrioridadeInt fill)
{
	return fill.fila[0];
}
TpElemento fimTpFilaPrioridadeInt(TpFilaPrioridadeInt fill)
{
	return fill.fila[fill.fim];
}
int cheiaTpFilaPrioridadeInt(int fim)
{
	return fim==MAXFILA-1;
}
int vaziaTpFilaPrioridadeInt(int fim)
{
	return fim==-1;
}
void exibeTpFilaPrioridadeInt (TpFilaPrioridadeInt fill)
{
	while(!vaziaTpFilaPrioridadeInt(fill))
	{
		printf("\n%d",retiraTpFilaPrioridadeInt(fill).ele);
	}
}
