Algoritmo sin_titulo
	Escribir 'ingrese el numero del mes: '
	Leer nmes
	resto = nmes % 3
	Si resto<>0 Entonces
		resto1 = 1
		resto = nmes-resto
	SiNo
		resto1 = 0
	FinSi
	Segun resto1 Hacer
		0:
			trimes = nmes/3
		De Otro Modo:
			trimes = (resto/3)+1
	FinSegun
	Escribir 'el mes ingresado corresponde al trimestre numero ', trimes
FinAlgoritmo
