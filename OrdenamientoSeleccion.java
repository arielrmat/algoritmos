public class OrdenamientoSeleccion{
    void seleccion(int arreglo[]){
	int menor, pos_menor, temp;
	for (int i = 0; i < arreglo.length; i++) {
	    menor = arreglo[i];
	    pos_menor = i;
	    for (int j = i+1; j < arreglo.length; j++) {
		if (arreglo[j] < menor) {
		    menor = arreglo[j];
		    pos_menor = j;
		}
	    }
	    if (pos_menor != i) {
		temp = arreglo[i];
		arreglo[i] = arreglo[pos_menor];
		arreglo[pos_menor] = temp;
	    }
	}
    }
    void mostrar(int arreglo[]){
	for (int i = 0; i < arreglo.length; i++)
	    System.out.print(arreglo[i] + " ");
	System.out.println();	
    }
    public static void main(String[] args) {
	int arreglo[] = {5,8,4,2,9,3,7,6};
	OrdenamientoSeleccion obj = new OrdenamientoSeleccion();
	obj.mostrar(arreglo);
	obj.seleccion(arreglo);
	obj.mostrar(arreglo);
    }
}
