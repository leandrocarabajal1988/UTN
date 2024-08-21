Algoritmo sin_titulo
	Escribir "ingrese 3 numero"
	Leer n1, n2, n3
	Si n1<n2 Entonces
		Si n2<n3 Entonces
			p1 = n3
			p2 = n2
			p3 = n1
		SiNo
			Si n1<n3 Entonces
				p1 = n2
				p2 = n3
				p1 = n1
			SiNo
				p1 = n2
				p2 = n1
				p3 = n3
			FinSi
		FinSi
	SiNo
		Si n1<n3 Entonces
			p1 = n3
			p2 = n1
			P3 = n2
		SiNo
			Si n2<n3 Entonces
				p1 = n1
				p2 = n3
				p3 = n2
			SiNo
				p1 = n1
				p2 = n2
				p3 = n3
			FinSi
		FinSi
	FinSi
	Escribir "el numero mayor es"
	Escribir p1
FinAlgoritmo
