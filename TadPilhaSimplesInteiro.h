#define MAXPILHA 100

struct TpPilhaInt{
	int topo, pilha[MAXPILHA];
};

void inicializaPilhaInt(TpPilhaInt &pill)
{
	pill.topo=-1;
}
int retornaTopoPilhaInt(TpPilhaInt pill)
{
	return pill.pilha[pill.topo];
}
int popPilhaInt(TpPilhaInt &pill)
{
	return pill.pilha[pill.topo--];
}
int pushPilhaInt(TpPilhaInt &pill, int ele)
{
	pill.pilha[++pill.topo]=ele;
}
int cheiaPilhaInt(int topo)
{
	return topo==MAXPILHA-1;
}
int vaziaPilhaInt(int topo)
{
	return topo==-1;
}
void exibePilhaInt(TpPilhaInt pill)
{
	while(!vaziaPilhaInt(pill))
	{
		printf("\n%d",popPilhaInt(pill));
	}
}
 
