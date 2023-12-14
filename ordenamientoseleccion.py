def seleccion(arreglo):
    for i in range(len(arreglo)):
        menor = arreglo[i]
        pos_menor = i
        for j in range(i+1, len(arreglo)):
            if arreglo[j] < menor:
                menor = arreglo[j];
                pos_menor = j;
        if pos_menor != i:
            temp = arreglo[i]
            arreglo[i] = arreglo[pos_menor]
            arreglo[pos_menor] = temp

def mostrar(arreglo):
    for i in range(len(arreglo)):
        print(" %d" % arreglo[i], end='')
    print()
    
arreglo = [5,8,4,2,9,3,7,6]
mostrar(arreglo)
seleccion(arreglo)
mostrar(arreglo)
