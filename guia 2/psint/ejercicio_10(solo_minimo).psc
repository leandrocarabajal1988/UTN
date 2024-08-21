Algoritmo sin_titulo
	Escribir 'ingrese 5 numeros'
	Leer n1, n2, n3, n4, n5
	Si n1<n2 Entonces
		Si n1<n3 Entonces
			Si n1<n4 Entonces
				Si n1<n5 Entonces
					p5 <- n1
				SiNo
					p5 <- n5
				FinSi
			SiNo
				Si n4<n5 Entonces
					p5 <- n4
				SiNo
					p5 <- n5
				FinSi
			FinSi
		SiNo
			Si n3<n4 Entonces
				Si n3<n5 Entonces
					p5 <- n3
				SiNo
					p5 <- n5
				FinSi
			SiNo
				Si n4<n5 Entonces
					p5 <- n4
				SiNo
					p5 <- n5
				FinSi
			FinSi
		FinSi
	SiNo
		Si n2<n3 Entonces
			Si n2<n4 Entonces
				Si n2<n5 Entonces
					p5 <- n2
				SiNo
					p5 <- n5
				FinSi
			SiNo
				Si n4<n5 Entonces
					p5 <- n4
				SiNo
					p5 <- n5
				FinSi
			FinSi
		SiNo
			Si n3<n4 Entonces
				Si n3<n5 Entonces
					p5 <- n3
				SiNo
					p5 <- n5
				FinSi
			SiNo
				Si n4<n5 Entonces
					p5 <- n4
				SiNo
					p5 <- n5
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir 'el numero mas chico es: '
	Escribir p5
FinAlgoritmo
