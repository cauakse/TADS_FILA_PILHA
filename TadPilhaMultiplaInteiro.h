#define MAXPILHA 100
struct TpPilhaMultiplaInt{
	int topos[MAXPILHA], bases[MAXPILHA], pilhas[MAXPILHA];
};
void inicializaPilhaMultiplaInt(TpPilhaMultiplaInt pill, int quantidade)
{
	int qntdele, i;
	qntdele = MAXPILHA/quantidade;
	for (i=0;i<quantidade;i++)
	{
		pill.bases[i]=i*qntdele;
		pill.topos[i]=pill.bases[i]-1;
	}
}
void pushTpPilhaMultiplaInt(TpPilhaMultiplaInt &pill,int qual,int ele)
{
	pill.pilhas[++pill.topos[qual]]=ele;
}
int popTpPilhaMultiplaInt(TpPilhaMultiplaInt &pill,int qual)
{
	return pill.pilhas[pill.topos[qual]--];
}
int vaziaTpPilhaMultiplaInt (TpPilhaMultiplaInt pill,int qual)
{
	return pill.topos[qual]==pill.bases[qual]-1;
}
int cheiaTpPilhaMultiplaInt(TpPilhaMultiplaInt pill,int qual)
{
	return pill.topos[qual]==pill.bases[qual+1]-1;
}
int retornaTopoTpPilhaMultiplaInt(TpPilhaMultiplaInt pill,int qual)
{
	return pill.pilhas[pill.topos[qual]];
}
void exibeTpPilhaMultiplaInt (TpPilhaMultiplaInt pill , int qual)
{
	while(!vaziaTpPilhaMultiplaInt(pill,qual))
	{
		printf("\n%d",popTpPilhaMultiplaInt(pill,qual));
	}
}
