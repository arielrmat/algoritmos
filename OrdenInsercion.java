public class OrdenInsercion{
    void insercion(int arreglo[]){
	int elem_ord, j;
	for (int i = 1; i < arreglo.length; i++) {
	    elem_ord = arreglo[i];
	    j = i-1;
	    while(j>=0 && elem_ord<arreglo[j]){
		arreglo[j+1] = arreglo[j];
		j--;
	    }
	    arreglo[j+1] = elem_ord;
	}
    }
    
    void mostrar(int arreglo[]){
	for (int i = 0; i < arreglo.length; i++)
	    System.out.print(arreglo[i]+" ");
	System.out.println();	
    }
    public static void main(String[] args) {
	int arreglo[] = {5,8,4,2,9,3,7,6};
	OrdenInsercion obj = new OrdenInsercion();
	obj.mostrar(arreglo);
	obj.insercion(arreglo);
	obj.mostrar(arreglo);
	
    }
}
