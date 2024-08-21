Algoritmo sin_titulo
	Leer n1, n2, n3
	Si n1==n2 Entonces
		Si n2==n3 Entonces
			Escribir 'equilatero'
		SiNo
			Escribir 'isoceles'
		FinSi
	SiNo
		Si n1==n3 Entonces
			Escribir 'isoceles'
		SiNo
			Si n2==n3 Entonces
				Escribir 'isoceles'
			SiNo
				Escribir 'escaleno'
			FinSi
		FinSi
	FinSi
FinAlgoritmo
