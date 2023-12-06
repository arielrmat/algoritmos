def insercion(arreglo):
    for i in range(1, len(arreglo)):
        elem_ord = arreglo[i]
        j = i-1
        while j>=0 and elem_ord < arreglo[j]:
            arreglo[j+1] = arreglo[j]
            j -= 1
        arreglo[j+1] = elem_ord
        
arreglo = [5,8,4,2,9,3,7,6]
for i in range(len(arreglo)):
    print(" %d" % arreglo[i], end='')
print()
insercion(arreglo)
for i in range(len(arreglo)):
    print(" %d" % arreglo[i], end='')
print()
