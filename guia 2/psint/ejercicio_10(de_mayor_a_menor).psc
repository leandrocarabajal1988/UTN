Algoritmo sin_titulo
	Escribir 'ingrese 5 numeros'
	Leer n1, n2, n3, n4, n5
	Si n1>n2 Entonces
		Si n1>n3 Entonces
			Si n1>n4 Entonces
				Si n1>n5 Entonces
					p1 <- n1
					Si n5>n2 Entonces
						Si n5>n3 Entonces
							Si n5>n4 Entonces
								p2 <- n5
								Si n4>n2 Entonces
									Si n4>n3 Entonces
										p3 <- n4
										Si n2>n3 Entonces
											p4 <- n2
											p5 <- n3
										SiNo
											p4 <- n3
											p5 <- n2
										FinSi
									SiNo
										p3 <- n3
										Si n3>n2 Entonces
											p4 <- n3
											p5 <- n2
										SiNo
											p4 <- n2
											p5 <- n3
										FinSi
									FinSi
								SiNo
									p3 <- n2
									Si n2>n3 Entonces
										Si n3>n4 Entonces
											p4 <- n3
											p5 <- n4
										SiNo
											p4 <- n4
											p5 <- n3
										FinSi
									SiNo
										Si n3>n4 Entonces
											p4 <- n3
											p5 <- n4
										SiNo
											p4 <- n4
											p5 <- n3
										FinSi
									FinSi
								FinSi
							SiNo
								p2 <- n4
								Si n3>n2 Entonces
									p3 <- n3
									Si n4>n2 Entonces
										p4 <- n4
										p5 <- n2
									SiNo
										p4 <- n2
										p5 <- n4
									FinSi
								SiNo
									p3 <- n2
									Si n2>n3 Entonces
										p4 <- n2
										p5 <- n3
									SiNo
										p4 <- n3
										p5 <- n2
									FinSi
								FinSi
							FinSi
						SiNo
							Si n3>n4 Entonces
								p2 <- n3
								Si n4>n5 Entonces
									p3 <- n4
								SiNo
									p3 <- n5
									Si n4>n2 Entonces
										p4 <- n4
										p5 <- n2
									SiNo
										p4 <- n2
										p5 <- n4
									FinSi
								FinSi
							SiNo
								p2 <- n4
								p3 <- n3
								p4 <- n5
								p5 <- n2
							FinSi
						FinSi
					SiNo
						Si n2>n3 Entonces
							Si n2>n4 Entonces
								p2 <- n2
								Si n5>n3 Entonces
									Si n5>n4 Entonces
										p3 <- n5
										Si n3>n4 Entonces
											p4 <- n3
											p5 <- n4
										SiNo
											p4 <- n4
											p5 <- n3
										FinSi
									SiNo
										Si n4>n3 Entonces
											p3 <- n4
											p4 <- n5
											p5 <- n3
										FinSi
									FinSi
								SiNo
									Si n4>n3 Entonces
										p3 <- n3
									SiNo
										Si n5>n4 Entonces
											p3 <- n3
											p4 <- n5
											p5 <- n4
										SiNo
											p3 <- n3
											p4 <- n4
											p5 <- n5
										FinSi
									FinSi
								FinSi
							SiNo
								Si n5>n4 Entonces
									p2 <- n5
									p3 <- n4
									p4 <- n2
									p4 <- n3
								SiNo
									Si n5>n2 Entonces
										p2 <- n4
										p3 <- n5
										p4 <- n2
										p5 <- n3
									SiNo
										Si n5>n3 Entonces
											p2 <- n4
											p3 <- n2
											p4 <- n5
											p5 <- n3
										SiNo
											p2 <- n4
											p3 <- n2
											p4 <- n3
											p5 <- n5
										FinSi
									FinSi
								FinSi
							FinSi
						SiNo
							Si n4>n3 Entonces
								p2 <- n4
								p3 <- n3
								p4 <- n2
								p5 <- n5
							SiNo
								Si n4>n2 Entonces
									p2 <- n3
									p3 <- n4
									p4 <- n2
									p5 <- n5
								SiNo
									Si n4>n5 Entonces
										p2 <- n3
										p3 <- n2
										p4 <- n4
										p5 <- n5
									SiNo
										p2 <- n3
										p3 <- n2
										p4 <- n5
										p5 <- n4
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
				SiNo
					p1 <- n5
				FinSi
			SiNo
				Si n4>n5 Entonces
					p1 <- n4
				SiNo
					p1 <- n5
				FinSi
			FinSi
		SiNo
			Si n3>n4 Entonces
				Si n3>n5 Entonces
					p1 <- n3
				SiNo
					p1 <- n5
				FinSi
			SiNo
				Si n4>n5 Entonces
					p1 <- n4
				SiNo
					p1 <- n5
				FinSi
			FinSi
		FinSi
	SiNo
		Si n2>n3 Entonces
			Si n2>n4 Entonces
				Si n2>n5 Entonces
					p1 <- n2
				SiNo
					p1 <- n5
				FinSi
			SiNo
				Si n4>n5 Entonces
					p1 <- n4
				SiNo
					p1 <- n5
				FinSi
			FinSi
		SiNo
			Si n3>n4 Entonces
				Si n3>n5 Entonces
					p1 <- n3
				SiNo
					p1 <- n5
				FinSi
			SiNo
				Si n4>n5 Entonces
					p1 <- n4
				SiNo
					p1 <- n5
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir 'el numero mas grande es: '
	Escribir p1
	Escribir 'segunda posicion: '
	Escribir p2
	Escribir 'tercera posicion: '
	Escribir p3
	Escribir 'cuarta posicion: '
	Escribir p4
	Escribir 'ultimo lugar: '
	Escribir p5
FinAlgoritmo
