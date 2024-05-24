float soma (float num1, float num2){
	float resultado; 
	resultado = num1+num2;
	return resultado;
}

float sub (float num1, float num2){
       float resultado; 
       resultado = num1-num2;
       return resultado;
}       

float mult ( float num1, float num2){
	float resultado;
	resultado = num1*num2;
	return resultado;
}

float divisao (float num1, float num2){
	float resultado; 
	if (num2==0){
		printf("Operação Inválida!\n");
	} else {
		resultado = num1/num2;
	}
	return resultado;
}
