	//			||	Proyecto final	||

/*
	------------------------------------------------------------------------------------------
	Descripción del archivo.
	
	Uso de variables:
	
		Las variables se nombran de la siguiente manera: 
				
				(Tipo-de-variable)(Tipo-dato)_(descripción-resumida-a-3-letras-por-palabra)  
	
				Global  = g		int   = i	* Al momento de declararla se requiere hacer una	
				funcion = f 	float = f		descripción de su uso dentro del programa.
								char  = c
				
		Al momento de declararla, por ejemplo:
					
						int fi_numusu; 	// Contador del número que ingresa el usuario 
						int fi_numpc;	// Contador del número génerado por el pc.
				
		* Las variables que tienen la finalidad de actuar cómo contadores dentro de un 
		ciclo, son i, j, k y l. (En ese orden conforme se este trabajando).
			
	Uso de funciónes:
	
		Las funciónes se nombran de acuerdo con el siguiente criterio:
		
			(Tipo-de-funcion)_(descripción)
			
			void	= v			* Al momento de declararla se requiere hacer una
			int		= i				descripción de su uso dentro del programa.
				
		Al momento de declararla, por ejemplo:
		
						i_suma , v_resta , i_imprimirdatos 	
	
	------------------------------------------------------------------------------------------
*/

/*		1- Librerias		*///--------------------------------------------------------------
	#include <stdio.h>				//	Función principal, f_numeroentrada, f_alu, f_prof,
	#include <windows.h>			//	Afecta: f_imprimir, f_alu, f_prof,
	#include <stdlib.h>				//	Afecta:	f_imprimir, f_alu, f_prof,
	#include <conio.h>				//	Afecta: f_imprimir, f_maqueta,
	#include <time.h>				// 	Afecta: f_imprimir, f_alu, f_prof,
/*--	1- Librerias   	  --*/
							
/*		2- Manejo de variables Globales		*///----------------------------------------------
	int aii, aij, aiu, i, j, k, l;					// Contadores.
	int arrp[10]={	0,5,10,15,20,25,30,35,40,45};
	int calal[5]={11,11,11,11,11};
	int exopen = 1;

	typedef struct
	{
		char *pasword;
		int grupo;	
		int nip;
	}docente;
	
	 typedef struct
	 {
	 	char nombre[30];
	 	int n_cuenta;
	 	int grupo;
		char nip[4];
		float promedio;
		int n_examenes;
		char cal_examenes[5];
	}alumnos;
	
	typedef struct
	{
	 	int numero;
	 	char elemento[3];
	 	char a_ques[14];
	 	char b_ques[14];
	 	char c_ques[14];
	 	char d_ques[14];
	 	char res;
	}eval;
	
	alumnos estudiantes[50];
	eval examen[53];
	
	docente *docc;
/*--	2- Manejo de variables Glovales   	  --*/

/*		3- Prototipado de funciones		*///--------------------------------------------------
	void f_imprimir( int *x);		// 	Imprime un arreglo.
	int f_alum();					//	Imprime el menú del alumno
	int f_prof();					//	Imprime el menú del maestro
	int f_numeroentrada(int a);		// 	Valida la entrada de un dato númerico
	void f_maqueta(char *arreglo);	//  Imprime el encabezado.
	void f_prva(char temp[]);
	void f_prar(char temp[],int *o);
	int f_proff(int a, int b);
	int f_ingresoprof();
	void f_alumopen();
	void f_examenopen();
	void f_genexam();
	void validar_califi(int n, int h);
	void f_validar_promedio(int gf);
	void f_aluclose();
/*--	3- Prototipado de funciones 	  --*/

/*		4- Función principal (Descripción de uso)	*///--------------------------------------
	int main()
{
		int ip;
		char c_mprincipal[29]={'R','e','p','e','r',
						  	   't','o','r','i','o',
							   ' ','P','r','i','n',
							   'c','i','p','a','l',
							   ' ',' ',' ',' ',' ',
							   ' ',' ',' ',' '};
							 
	// 	Iniciando programa... 		(art01)	
		int art01[24]={  24,100,200, 73,110,
						105, 99,105, 97,110,
						100,111, 32,112,114,
						111,103,114, 97,109,
						 97, 46, 46, 46};
		f_imprimir(art01); 
		
	//	Facultad de Ingeniería		(art02)
		int art02[25]={  25,100,200, 70, 97,
						 99,117,108,116, 97,
						100, 32,100,101, 32,
						 73,110,103,101,110,
						105,101,114,161, 97};
		f_imprimir(art02);
	//	Examen de: La Tabla Periodica(art03)		
		int art03[33]={  33,100,200, 69,120,
						 97,109,101,110, 32,
						100,101, 58, 32, 32,
						 76, 97, 32, 84, 97,
						 98,108, 97, 32, 80,
						101,114,105,162,100,
						105, 99, 97};
		f_imprimir(art03);
		
		do{
			system("cls");	
			
			f_maqueta(c_mprincipal);
				
			printf("\n\t %c Selecciona una opci%cn %c \n\n", 219,162,219);
			printf("\t 1   Sesi%cn Alumno\n",  162);
			printf("\t 2   Sesi%cn Profesor\n", 162);
			printf("\t 3   Salir\n\n");
		    printf("%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
			
			ip = f_numeroentrada(1);
			switch(ip)
			{	
					case 1 :
				   			 f_alum();	
			 	   			 break;
					
					case 2 :
							f_prof();
							break;
					
					case 3 :
							printf("Salir\n");
							break;
					default:
					printf("Ese numero no es opcion\n");
			}	
				
		}
		while(ip !=3);

	//	Termino el programa.		(art09)
		int art09[23]={  23,120,500, 84,101,
						114,109,105,110,111,
						 32,101,108, 32,112,
						114,111,103,114, 97,
						109, 97, 46};
		f_imprimir(art09); 
		printf("\n\n\n");
	return 0;
}
/*--	4- Función principal 	--*/

/*		5- Manejo de funciones		*///------------------------------------------------------
	void f_imprimir( int *x) // --------- Imprimir arreglos:
{  	// Dentro del arreglo el Valor en 0 = Tamaño del arreglo / Valor en 1, tiempo de impresión / valor en 2 = Tiempo de recet
	int control_1, control_2, control_3;
	
	control_1 = *(x+0);
	control_2 = *(x+1);
	control_3 = *(x+2);
	
	system("cls");	
	Sleep(control_3);
	system("color 47");
	printf("\n\n\n\n\t");
	
	for( i=3; i<control_1; i++ )
	{
		printf("%c", *(x+i));
		Sleep(control_2);
	}
	Sleep(control_3);
}

int f_alum(){	// Imprime el menú del alumno. 	*///-------------------------------------------
	
	int num_e, calif, resul_i, ape, num_i, num_tot, numf, numg, numh=0, numj=0;
	char resul_c, num_c;
	
	char c_malum[29]={	   'R','e','p','e','r',
					  	   't','o','r','i','o',
						   ' ','A','l','u','m',
						   'n','o',' ',' ',' ',
						   ' ',' ',' ',' ',' ',
						   ' ',' ',' ',' '};
						   
	
	//	Examen Terminado			(art08)
		int art08[19]={  19,100,200, 69,120,
						 97,109,101,110, 32,
						 84,101,114,109,105,
						110, 97,100,111};
		
	//	Sesión del Alumno			(art05)
		int art05[20]={  20,100,200, 83,101,
						115,105,162,110, 32,
						100,101,108, 32, 65,
						108,117,109,110,111};
		f_imprimir(art05); 
		
	//	Cerrando sesión.			(art06)
	int art06[18]={  18,100,100, 67,101,
					114,114, 97,110,100,
					111, 32,115,101,115,
					105,162,110};
   	// 	Cargando Examen				(art07)
	int art07[21]={  21,100,200, 67, 97,
					114,103, 97,110,100,
					111, 32, 69,120, 97,
					109,101,110, 46, 46,
					 46};
	
		int it = 0;
		system("cls");
		f_maqueta(c_malum);
		f_alumopen();
		//----------------------------------------------------------------------------------------------------------------------------------------
		printf("\n\t%c Inicia seci%cn %c\n\tN%cmero de cuenta", 219, 162, 219, 163);
		numf = f_numeroentrada(5);	
		j=0;
		
		for( i=0 ; i<aii ; i++)
		{
			if( numf == estudiantes[i].n_cuenta )
			{
				aiu = i;
				do{
					printf("\n\tN%cmero de control valido.\n\tContrase%ca:", 163,164);
					numh = f_numeroentrada(4);
					numg = atoi(estudiantes[aiu].nip);
					
					if( numh == numg )
					{
						it = 0;
						j=2;
					}else if(numh != numg){
						printf("\n\tNip no valido.");
						numj++;
						Sleep(2000);
					}
					j++;
					
				}while( j > 3);
				
			}
		}
		if( numh == 0 )
		{
			printf("\n\tN%cmero de control invalido.\n", 163);
			numj++;
			Sleep(2000);
		}

	
		
	if(numj > 0){
		it = 3;
		f_imprimir(art06);
	}
	
	validar_califi(1, 0);
		
	 while( it != 3 ){
			
		       	system("cls");	
				f_maqueta(c_malum);
				printf("\n\t %c Selecciona una opci%cn %c \n\n", 219,162,219);
		        if( estudiantes[aiu].n_examenes != 5 )printf("\t 1   Iniciar examen\n");
		        printf("\t 2   Ver calificaciones \n");
		        printf("\t 3   Salir\n\n");
		        printf("%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
		        it = f_numeroentrada(1);
		        if( estudiantes[aiu].n_examenes == 5 && it == 1 )it = 4;
		         switch(it)
				   {
					     case 1 :
						 			f_imprimir(art07); 
						 			ape = 0;
						 			if(exopen == 1)f_examenopen();
						 			f_genexam();
						 			calif = 0;
						 			
						 			do{
						 				system("cls");
						 				f_maqueta(c_malum);
						 				printf("\n  %d) Selecciona el elemento que corresponde al s%cmbolo %s:\n\n", ape+1, 161, examen[arrp[ape]].elemento);
						 				printf("\t %s	%s\n\n\t %s	%s\n\n", examen[arrp[ape]].a_ques, examen[arrp[ape]].b_ques, examen[arrp[ape]].c_ques,examen[arrp[ape]].d_ques);
						 				resul_i = f_numeroentrada(3);
						 				resul_c = (char)(resul_i);
						 				if(resul_c == examen[arrp[ape]].res)
										 {
										 	calif++;
										 }
						 				ape++;
									 }while(ape != 10);
									 
									 estudiantes[aiu].n_examenes++;
									 
									 if(estudiantes[aiu].n_examenes == 1)
									 {
									 	calal[0]= calif;
									 }else if(estudiantes[aiu].n_examenes > 1)
									 {
									 	calal[estudiantes[aiu].n_examenes-1] = calif;
									 }
									 
									 
									 f_validar_promedio(0);
									 validar_califi(0, 0);
									 f_imprimir(art08); 			   
							      break;
					     case 2 :
					     system("cls");	
					     f_maqueta(c_malum);
					    f_validar_promedio(0);
					    printf("   Registro:");
					    printf("\n   --------------------------------------");
					    printf("\n    | N%cmero de examen | Calificaci%cn |", 163, 162);
					     for(i=0;i<5;i++)
					     {
					     	printf("\n      \t     %d\t\t      %d ", i+1,  calal[i]);
						 }
						 printf("\n   --------------------------------------");
						 printf("\n   N%cmero de examenes realizados: %d.\n", 163, estudiantes[aiu].n_examenes);
						 printf("   Promedio\t %.2f\t", estudiantes[aiu].promedio);
						 printf("\n   --------------------------------------");
					    printf("\n\n");
					     system("pause");
					     
					
					     break;
					
					     case 3 :
									f_imprimir(art06);
								   f_aluclose();
				     				break;
					     default:
					     printf("Ese numero no es opcion\n");
					}	
			
 	    } 
	
}

int f_prof(){ // 	Imprime el menú del maestro 	*///-------------------------------------------------
	
	int auc, aup, it, arr1, arr2, arr3, maes;
	int lol = 0;
	
	char c_mprof[29]={	   'R','e','p','e','r',
					  	   't','o','r','i','o',
						   ' ','D','o','c','e',
						   'n','t','e',' ',' ',
						   ' ',' ',' ',' ',' ',
						   ' ',' ',' ',' '};
		
		//	Sesión del Maestro			(art04)
		int art04[21]={  21,100,200, 83,101,
						115,105,162,110, 32,
						100,101,108, 32, 77,
						 97,101,115,116,114,
						111};

		
		//	Cerrando sesión.			(art06)
		int art06[18]={  18,100,100, 67,101,
						114,114, 97,110,100,
						111, 32,115,101,115,
						105,162,110};
		
		//	Saliendo...					(art11)
		int art11[14]={  14,100,100, 83, 97,
						108,105,101,110,100,
						111, 46, 46, 46};
				
		f_imprimir(art04); 
		
		int lm = 0;
		
		do{
			system("cls");	
			f_maqueta(c_mprof);
						
			printf("\n\t%c Inicia sesi%cn %c\n\n",219, 162, 219);
			printf("\n\t  Ingresa el grupo:\n");
			arr1 = f_numeroentrada(4);
			printf("\t  Ingresa el NIP:\n");
			arr2 = f_numeroentrada(4);
			
			arr3 = f_proff(arr1, arr2);
			
			if (arr3 == 0)
			{
				lm++;
				printf("\n\t%d- NIP o grupo incorrecto.\n", 3-lm);
				Sleep(1500);
			}else if(arr3 > 0){
				lm = 3;	
			}
			
		}while( lm != 3 );
		
	if(arr3 != 0 )
	{
		maes = arr3 - 1;

			    do
				{
			       	system("cls");	
				
					f_maqueta(c_mprof);
					printf(" Bienvenido %s.\n", docc[maes].pasword);
					
					printf("\n\t %c Selecciona una opci%cn %c \n\n", 219,162,219);
			        printf("\t 1   Preguntas \n");
			        printf("\t 2   Registro \n");
			        printf("\t 3   Salir\n\n");
			        printf("%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,219);
			        
					it = f_numeroentrada(1);
			         switch(it){
					     case 1 :
					     			system("cls");
					     			if ( exopen == 1){
					     				f_examenopen();
									 }
								
									auc = 0;
									aup = 0;
									
									do{
										system("cls");
										f_maqueta(c_mprof);
										printf(" Docente: %s.\n", docc[maes].pasword);
										for( i=aup ; i< (aup+5) ; i++)
										{
											printf("\n Pregunta: %d ", examen[i].numero);
											printf("\t Selecciona el elemento cuyo s%cmbolo es %s:", 161, examen[i].elemento);
											printf("\n\t %s ", examen[i].a_ques);
											printf("\t %s ", examen[i].b_ques);
											printf("\t %s ", examen[i].c_ques);
											printf("\t %s ", examen[i].d_ques);
											printf("\n Respuesta correcta: %c \n", examen[i].res);
										}
										
										printf("\n\t1- 5 anteriores 	2- 5 siguientes		3- salir\n\n\tIngresa una opci%cn: ", 162);
										auc = f_numeroentrada(1);
										if( auc != 3 )
										{
											if (auc == 1)
											{
												if(aup == 0)aup=5;
												aup-=5;	
											}else{
												if( aup == 45)aup=40;
												aup+=5;
											}	
										}
										
									}while( auc != 3);
										
					      			break;
					     case 2 :
					     			system("cls");
									f_maqueta(c_mprof);
									printf(" Docente: %s.\n", docc[maes].pasword);
									if(lol == 0 && exopen == 1 )f_alumopen();
									printf("\n |      Nombre del Alumno      | Promedio | Examenes realizados |\n");
									for( i = 0; i < (aii/2)+1 ; i++)
									{
										printf("  %s " ,estudiantes[i].nombre);
										printf("   %.1f   ", estudiantes[i].promedio);
										printf("            %d\n", estudiantes[i].n_examenes);
									}
									printf("\n -----------------------------------------------------------------\n\n\t");
									system("pause");
									lol = 1;
									
					     			break;
					     case 3 :
					    			f_imprimir(art06); 
				     		 		break;
					     default:
					    			printf("Ese numero no es opcion\n");
					}		
	 	    	}while(it 	!= 3);	
		
	}
	
	f_imprimir(art11); 	
	
}

int f_numeroentrada(int a)
{ // // 	Valida la entrada de un dato númerico				*///-------------------------------------------------
	/* 		Valores para programar la funcion:
			
			 (1)    -> Para resivir valores  de (1 a 3) 		Regresa el valor:  1, 2 ó 3.
			 (2)	-> Para resivir valores de (1 a 10)			Regresa el valor:	1, 2, 3, 4, 5, 6, 7, 8, 9, ó 10.
			 (3) 	-> Para resivir valores de (a, b, c, d)		Regresa el valor. a = 97, b = 98, c = 99 ó d = 100.
			 (4)	-> Para resivir valores de grupo. (4 números)
			 (5)	-> Para resivir valores de número de control (9 números)
			 
	*/
	
	char c_num[30];
	int i_num = 0, num = 0;
	k = 0;
	j = 0;

	
	printf("%c  ", 219);
	
	do{
		scanf("%s", &c_num);
		i_num = atoi(c_num);
		l = 0;
		switch(a) 
		{
			case 1 :	 if( i_num > 3 || i_num < 1)
						{
							j++;
						}else{
							k = 4;
						}
						 break;
			case 2 : 	if( i_num > 10 || i_num < 1)
						{
							j++;
						}else{
							k = 4;
						}
						break;
			case 3 : 	if ( tolower(c_num[0]) == 'a' || tolower(c_num[0]) == 'b' || tolower(c_num[0]) == 'c' || tolower(c_num[0]) == 'd' )
						{
										k = 4;
										if( tolower(c_num[0]) == 'a') i_num = 97;
										else if( tolower(c_num[0]) == 'b') i_num = 98;	
										else if( tolower(c_num[0]) == 'c') i_num = 99;	
										else {i_num = 100;}	
						}else{
							j++;	
						} 
						break;
			case 4 : 	for(i=0; c_num[i] != '\0'; i++)
						{
							l++;	
						}
						if(l!= 4)printf("\n\tLos grupos tienen cuatro n%cmeros.\n", 163);
						if( i_num > 9999 || i_num < 0 || l != 4 )
						{
								j++;	
						} else{
							k = 4;
						} 
						break;
			case 5 : 		for(i=0; c_num[i] != '\0'; i++)
						{
							l++;	
						}
						if(l!= 9)printf("\n\tEl n%cmero de control tiene 9 caracteres.\n", 163);
						if( i_num < 0 || l != 9 )
						{
								j++;	
						} else{
							k = 4;
						} 
			
						break;
			default: printf("\nError inesperado del sistema.\n"); break;
		}
		
		if( j > num && j != 5 ) 
		{
			printf("\n\tEl valor que haz ingresado no es valido.\n\tTienes %d oportunidades de ingresalo de nuevo: ", 5-j);
			num = j;
		}
		k++;
		
	}while( k != 5);

	return i_num;	
}

void f_maqueta(char *arreglo) // Imprime el encabezado
{
	system("color 74");
	
	for(i=0; i<1; i++)
	{
		for(j=0;j<41 ; j++)
		{
			printf("%c", 219);
		}
		printf("\n");
	}
		printf("%c Examen %c %s%c\n", 219, 219, arreglo, 219);
		for(i=0; i<1; i++)
	{
		for(j=0;j<41 ; j++)
		{
			printf("%c", 219);
		}
		printf("\n");
	}
}
	
	int f_proff(int a, int b){
		
		int o, u, numero = 0;
		char aux;
		char temp[50];
		int cont = 0 ;		
		
		
		FILE *f;
		
			f = fopen("docentes.txt","r");
			if (f == NULL)
			{
		    	printf ("No se ha podido abrir fichero.");
		    	exit(1);
			}
		
			while (!feof(f))
			 { 
		    	fgets (temp,50,f);
			 	cont++;
		    }
		    
		    rewind (f);
		    
		    docc = (docente*)malloc(cont*sizeof(docente));
		    if (docc == NULL)
			{
		    	printf ("No se ha podido reservar la memoria.");
		    	exit(1);
			}
			
		   for (o=0; !feof(f) ;o++)
		   {
		    	f_prva(temp);
		    	aux = '0';
		    	
		    	for( u = 0 ; aux != '-' ; u++)
				{
		    		aux = fgetc(f);
		    		if(aux != '-')
					{
		    			temp[u] = aux;
					}
				}
				
				f_prar(temp,&o);
				
				fgets(temp,5,f);
				docc[o].grupo = atoi(temp);
				docc[o].nip = atoi(temp);
	
				if ( docc[o].grupo == a )
				{
					if(docc[o].nip == b )
					{
						numero = 1+o;
						return numero;
					}
					
					return numero;
				}
				if( o > temp[u] )
				{
					return numero;		
				}
					
			}

		fclose(f);

	}
	
	void f_prva(char temp[])
	{
		int o;
		
		for(o=0;o<50;o++)
		{
			temp[o]= '\0';
		}	
	} 
	
	void f_prar(char temp[], int *o)
	{
		int N = strlen(temp) + 1;
		docc[*o].pasword = (char*)malloc(N*sizeof(char));
		if(docc[*o].pasword == NULL)
		{
			printf("No se ha podido reservar memoria.\n");
			exit(1);
		}
		strcpy(docc[*o].pasword,temp);
	}
	
	void f_alumopen()
 {    
	  	FILE *archivo;
		char caracteres[50][62];
		char temp_nombre[30], temp_num[10], temp_num2[4], temp_c;
		int a, temp_i;
		aii=0;
		
		archivo = fopen("aludat.txt", "r");
		
		if (archivo != NULL)
			{	
			    while (feof(archivo) == 0)
				 {       
				    fgets (caracteres[aii], 62, archivo);    
					aii++;  
				 }
				   
			fclose(archivo);
			} 
		a=0;	
			
		do{
			//char nombre[30];
			
			for ( i=0 ; i < 30  ;i++)
			{
				temp_nombre[i] = caracteres[a][i];
				
				if( temp_nombre[i] == 'o' )
				{
					temp_nombre[i] = ' ';
				}
				estudiantes[a].nombre[i] = temp_nombre[i];
			}
			
	 		//	int n_cuenta;
	 		
			 j=0;
	 		
			for ( i=31 ; i < 40  ;i++)
			{
				temp_num[j] = caracteres[a][i];
				j++;
			} 
			
			estudiantes[a].n_cuenta = atoi(temp_num);		
	 		
	 		//	int grupo;
	 		
	 		 j=0;
	 		
			for ( i=41 ; i < 45  ;i++)
			{
				temp_num2[j] = caracteres[a][i];
				j++;
			} 
			
			estudiantes[a].grupo = atoi(temp_num2);
			//	int nip;
	 		 j=0;
	 		 l=0;
	 		
			for ( i=46 ; i < 50  ;i++)
			{
				l++;
				if( l < 5){
					estudiantes[a].nip[j] = caracteres[a][i];
				}
				
				j++;
				
			} 
			
			//	char promedio;
	 		
			temp_c = caracteres[a][51];
			temp_i = (int)(temp_c)-97;
				
			estudiantes[a].promedio = temp_i;
			
			//	int n_examenes;
	 		
			temp_c = caracteres[a][53];
			temp_i = (int)(temp_c)-97;
				
			estudiantes[a].n_examenes = temp_i;
			
			//	char cal_examenes[5];
			 j=0;
	 		
			for ( i=55 ; i < 60  ;i++)
			{
				temp_c = caracteres[a][i];
				estudiantes[a].cal_examenes[j] = temp_c;
				j++;
			} 		
			
			a++;
		}while ( aii != a);
	}
	
void f_examenopen()
{
		FILE *documento;
	char preguntas[53][66];
	char temp_elemento[2];
	char respuesta1[14],respuesta2[14],respuesta3[14],respuesta4[14];
	int a, temp_i;
	exopen = 0;
	i=0;
	
	documento = fopen("anwer.txt", "r");
	
		if (documento != NULL)
		{
		    while (feof(documento) == 0)
			 {       
			    fgets (preguntas[aij], 66, documento);  
				
			 	for(j=0; j<2; j++)
			 	{
			 		temp_elemento[j]= preguntas[aij][j];
				 }
			 	temp_i = atoi(temp_elemento);
			 	
			 	examen[aij].numero = temp_i;
			 	
			 	k=0; //----------------------------------------------------------------
		
				 for(j=3; j<5; j++)
			 	{
			 		temp_elemento[k]= preguntas[aij][j];
			 		if( temp_elemento[k] == 'j')temp_elemento[k] = ' ';
			 		examen[aij].elemento[k] = temp_elemento[k];
			 		k++;
				 }	
				
				
				aij++;  
			 }
			   
		fclose(documento);
		} 	
		
	for(i=0; i<53 ; i++) // 01-Hj-aooHIDROGENOo-booHELIOooooo-cooNITROGENOo-dooSILICIOooo-a-
	{
		k=0;
		for(j=6; j<19 ; j++)
		{
			respuesta1[k] = preguntas[i][j];
			if(respuesta1[k] == 'o') respuesta1[k] = ' ';
			examen[i].a_ques[k] = respuesta1[k];
			k++;	
		}
		k=0;
		for(j=20; j<33 ; j++)
		{
			respuesta2[k] = preguntas[i][j];
			if(respuesta2[k] == 'o') respuesta2[k] = ' ';
			examen[i].b_ques[k] = respuesta2[k];
			k++;	
		}
		k=0;
		for(j=34; j<47 ; j++)
		{
			respuesta3[k] = preguntas[i][j];
			if(respuesta3[k] == 'o') respuesta3[k] = ' ';
			examen[i].c_ques[k] = respuesta3[k];
			k++;	
		}
		k=0;
		for(j=48; j<60 ; j++)
		{
			respuesta4[k] = preguntas[i][j];
			if(respuesta4[k] == 'o') respuesta4[k] = ' ';
			examen[i].d_ques[k] = respuesta4[k];
			k++;	
		}
		examen[i].res = preguntas[i][62];
		
	}	
		
}

void f_genexam()
{
	int p1;

	srand(time(NULL));
	
	for(i=0; i<10 ; i++)
	{
		p1 = rand()% 5;
		arrp[i]+= p1;	
	}
}	

void validar_califi(int n, int h)
{
	char temp_c;
	int temp_i ;
	j=0;
	
	if( n == 1 )
	{
		//calal[1] = estudiantes[aiu].n_examenes;	
		for(i=0;i<5;i++)
		{
			temp_c = estudiantes[aiu].cal_examenes[i];
			temp_i = (int)(temp_c)-97;
			calal[i]=temp_i;
		}
	}else if( n == 0 )
	{
		//estudiantes[aiu].n_examenes++;
		
		for(i=0;i<5;i++)
		{
			temp_i = calal[i];
			temp_c = (char)(temp_i)+97;
			estudiantes[aiu].cal_examenes[i] = temp_c;
		}
	}
	else if( n == 2)
	{
			for(i=0;i<5;i++)
		{
			temp_c = estudiantes[h].cal_examenes[i];
			temp_i = (int)(temp_c)-97;
			calal[i]=temp_i;
		}
	}

}

void f_validar_promedio(int gf)
{
	float sust=0, div;	//Validar promedio;
	if( gf == 0 )
	{
		div = estudiantes[aiu].n_examenes;
		
		if(div > 1)
		{
			for(i=0; i<div ; i++)
			{
				sust += calal[i];
			}
			estudiantes[aiu].promedio = sust/div;
		//	printf("\n\tsustraendo: %d\n\n", sust);	
		}else if( div == 1)
		{
			estudiantes[aiu].promedio = calal[0];
		}
		
	}
	else if( gf == 1)
	{
		for(i=0; i<aii ;i++)
		{
			validar_califi( 2, i);	
			div = estudiantes[i].n_examenes;
			
			if(div > 1)
			{
				for(i=0; i<div ; i++)
				{
					sust += calal[i];
				}
				estudiantes[i].promedio = sust/div;
			}else if( div == 1)
			{
				estudiantes[i].promedio = calal[0];
			}	
		}	
	}
}

void f_aluclose()
{
	 	char caracteres[aii][61];
		char temp_nombre[30], temp_num[10], temp_num2[4], temp_c;
		int a, temp_i;
		a = 0;
		
		for( j=0; j<aii-1 ; j++ )
	{
		for( i = 0 ; i<61 ; i++)
		{
			caracteres[j][i] = ' ';
		}
	}
			
		do{
			//char nombre[30]; listo
			
			for ( i=0 ; i < 30  ;i++)
			{
				temp_nombre[i] =  estudiantes[a].nombre[i];
				
				if( temp_nombre[i] == ' ' )
				{
					temp_nombre[i] = 'o';
				}
				caracteres[a][i] = temp_nombre[i];
			}
			
	 		//	int n_cuenta;//listo
	 		
			 j=0;
			
			temp_i = estudiantes[a].n_cuenta ;
			itoa (temp_i, temp_num, 10);
			for( i=31 ; i < 40  ;i++ )
			{
				caracteres[a][i] = temp_num[j];	
				j++;
			}
	 		//	int grupo; Listo
	 		
	 		 j=0;
	 		
	 		temp_i = estudiantes[a].grupo;
	 		itoa (temp_i, temp_num2, 10);
	 		
			for ( i=41 ; i < 45  ;i++)
			{
				caracteres[a][i] = temp_num2[j] ;
				j++;
			} 
			
			//	char nip; Listo 
			 
			j=0;
	 		
			for ( i=46 ; i < 50  ; i++ )
			{
				caracteres[a][i] = estudiantes[a].nip[j] ;
				j++;
			} 
			
			//	char promedio;// listo
	 		 j=0;
	 		
	 		temp_i = (estudiantes[a].promedio)/1;
	 		temp_c = (char)(temp_i)+97;
				 		
			caracteres[a][51] = temp_c ;
				
			//	int n_examenes; Listo
	 		
			temp_c = caracteres[a][53] = (char)(estudiantes[a].n_examenes+97);
			
			//	char cal_examenes[5];
			 j=0;
	 		
			for ( i=55 ; i < 60  ;i++)
			{
				temp_c = estudiantes[a].cal_examenes[j];
				caracteres[a][i] = temp_c ;
				j++;
			} 		
			
				for( j=0; j<aii-1 ; j++ )
			{
				for( i = 0 ; i<61 ; i++)
				{
					if( caracteres[j][i] == ' ')
					{
						caracteres[j][i] = '-';
					}
				}
			}
			
			a++;
		}while ( aii != a );
	aii--;
 	FILE *archivo;
	archivo = fopen("aludat.txt", "w+");
	if (archivo != NULL)
	 {	   
	    fputs (caracteres[0], archivo); 
		fclose(archivo);
     } else {
	    printf("Error al abrir el archivo.\n");        
		printf("El archivo no existe o no se tienen permisos de lectura.\n"); 
    } 
	aii = 0;      
}

/*--	5- Manejo de funciones 	  --*/

/*
		||		Datos Generales del archivo:		||
	------------------------------------------------------------------------------------------
	Universidad Nacional Autónoma de México
	Facultad de Ingeniería
	Fundamentos de Programación
	Grupo: 1120
	
    Actividad: Proyecto Final
	 
	Autor:  Eduardo Quintero Juan
			    José Luis Bautista Rodríguez
			
	------------------------------------------------------------------------------------------	||

*/
