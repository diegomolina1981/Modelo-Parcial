
int menu(char* promp)
{
	int auxInt;
	
	printf("%s",promp);
	scanf("%d",&auxInt);
	return auxInt;
	
}

void alta(int proximo,int* codigo,char descripcion[][50],float* importe, int* cantidad, int maximo)
{
	int  i;
	
	for(i=1; i<=maximo; i++)
	 {
		codigo=i;
		
			printf("\nCodigo: %d", codigo);
			printf ("\nDescripcion: ");
			scanf("%s", & descripcion[i]);
		
			printf("Importe: ");
			scanf("%f", & importe[i]);
			
			printf("Cantidad: ");
			scanf("%d", & cantidad[i]);
			
			
			if(i==maximo)
			break;
	 }
	 
	
}

void listar(int proximo,int* codigo,char descripcion[][50],float* importe, int* cantidad, int maximo)
{
	
}

void modificar(int proximo,int* codigo,char descripcion[][50],float* importe, int* cantidad, int maximo)
{
	int auxCod;
	printf("Codigo a Modificar: ");
	scanf("%d", &auxCod);
	
	printf("\nEl producto seleccionado es: %s %f %d", &descripcion[auxCod] ,*(importe+auxCod) , *(cantidad+auxCod));
	
	printf("Descripcion: ");
	scanf("%s", descripcion[auxCod]);
	
	printf("Importe: ");
	scanf("%f", importe[auxCod]);
	
	printf("Cantidad: ");
	scanf("%d", cantidad[auxCod]);
	
}

void baja(int proximo,int* codigo,char descripcion[][50],float* importe, int* cantidad, int maximo)
{
	int i;
	int auxCod;
	printf("Codigo a Eliminar: ");
	scanf("%d", &auxCod);
	
	//descripcion[auxCod]=""; da error
	importe[auxCod]=0;
	cantidad[auxCod]=0;
}

void informar(int proximo,int* codigo,char descripcion[][50],float* importe, int* cantidad, int maximo)
{
			int i;
			float max;
			float min;
			for(i=1; i<=maximo; i++)
			{
				if (i=1)
				{
					max=importe[i];
				}
				
				if (importe[i]>max)
				{
						max=importe[i];
				}
				
			}
			
			printf("%s %f %d ", &descripcion, &importe, &cantidad);
			
			calcularPromedio(importe,maximo);
			
}
void calcularPromedio(float* importe,maximo)
{
	float total=0;
	float prom=0;
	int superiores=0;
	
	total +=importe;
	prom=total/maximo;
	
	
}
