#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<math.h>

int main(){
    switch (menu_principal())
    {
    case 1:
        Areas();
        break;
    case 2:
        Volumenes();
        break;
    case 3:
        Temperatura();
        break;
    case 4:
        Monedas();
        break;
    case 5:
        Sistemas_Numericos();
        break;
    case 6:
        Arreglos_Matrices();
        break;
    case 7:
        Varios();
        break;
    case 8:
        system("clear");
        printf("Saliendo del programa...\n");
        sleep(5);
        system("clear");
        exit(0);
        break;
    default:

        break;
    }
    return 0;
}

int menu_principal(){
    int opcion;
    printf("1. Área\n");
    printf("2. Volúmenes\n");
    printf("3. Temperatura\n");
    printf("4. Monedas\n");
    printf("5. Conversión sistemas numéricos\n");
    printf("6. Arreglos y matrices\n");
    printf("7. Varios\n");
    printf("8. Salir\n");
    scanf("%d", &opcion);
    system("clear");
    return opcion;
}

int submenu_areas(){
    int opcion;
    printf("1. Triángulo\n");
    printf("2. Círculo\n");
    printf("3. Rectángulo\n");
    printf("4. Cuadrado\n");
    printf("5. Regresar al menú principal\n");
    scanf("%d", &opcion);
    system("clear");
    return opcion;
}

int submenu_volumenes(){
    int opcion;
    printf("1. Esfera\n");
    printf("2. Paraleleípedo\n");
    printf("3. Cubo\n");
    printf("4. Regresar al menú principal\n");
    scanf("%d", &opcion);
    system("clear");
    return opcion;
}

int submenu_temperatura(){
    int opcion;
    printf("1. Celsius a Kelvin\n");
    printf("2. Kelvin a Fahrenheit\n");
    printf("3. Fahrenheit a Celsius\n");
    printf("4. Regresar al menú principal\n");
    scanf("%d", &opcion);
    system("clear");
    return opcion;
}

int submenu_monedas(){
    int opcion;
    printf("1. De pesos a Dólares\n");
    printf("2. De pesos a Euros\n");
    printf("3. De dólares a Pesos\n");
    printf("4. De euros a Pesos\n");
    printf("5. De dlares a euros\n");
    printf("6. Regresar al menú principal\n");
    scanf("%d", &opcion);
    system("clear");
    return opcion;
}

int submenu_sistemas_numericos(){
    int opcion;
    printf("1. Convertir de decimal a binario\n");
    printf("2. Convertir de decimal a octal\n");
    printf("3. Convertir de decimal a Hexadecimal\n");
    printf("4. Convertir de binario a Decimal\n");
    printf("5. Convertir de octal a Decimal\n");
    printf("6. Convertir de Hexadecimal a Decimal\n");
    printf("7. Regresar al menú principal\n");
    scanf("%d", &opcion);
    system("clear");
    return opcion;
}

int submenu_arreglos_matrices(){
    int opcion;
    printf("1. Ordenamiento de un arreglo\n");
    printf("2. Buscar un valor en un arreglo\n");
    printf("3. Suma de matrices\n");
    printf("4. Multiplicación de matrices\n");
    printf("5. Buscar un valor en una matriz\n");
    printf("6. Regresar al menú principal\n");
    scanf("%d", &opcion);
    system("clear");
    return opcion;
}

int submenu_varios(){
    int opcion;
    printf("1. Distancia entre dos puntos\n");
    printf("2. Raíces de una función cuadrática\n");
    printf("3. Factorial\n");
    printf("4. Fibonacci\n");
    printf("5. Primo\n");
    printf("6. Número amigos\n");
    printf("7. Regresar al menú principal\n");
    scanf("%d", &opcion);
    system("clear");
    return opcion;
}

void area_triangulo(){
    float base, altura, area;
    printf("Ingrese la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("El área del triángulo es: %.2f\n", area);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Areas();
}

void area_circulo(){
    float radio, area;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);
    area = 3.1416 * radio * radio;
    printf("El área del círculo es: %.2f\n", area);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Areas();
}

void area_rectangulo(){
    float base, altura, area;
    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);
    area = base * altura;
    printf("El área del rectángulo es: %.2f\n", area);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Areas();
}

void area_cuadrado(){
    float lado, area;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("El área del cuadrado es: %.2f\n", area);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Areas();
}

// Switch case para las áreas
void Areas(){
    switch (submenu_areas()) {
        case 1:
            area_triangulo();
            break;
        case 2:
            area_circulo();
            break;
        case 3:
            area_rectangulo();
            break;
        case 4:
            area_cuadrado();
            break;
        case 5:
            menu_principal();
            break;
        default:
            printf("Opción no válida\n");
            sleep(2);
            system("clear");
            Areas();
    }
}

void volumen_esfera(){
    float radio, volumen;
    printf("Ingrese el radio de la esfera: ");
    scanf("%f", &radio);
    volumen = (4/3) * 3.1416 * radio * radio * radio;
    printf("El volumen de la esfera es: %.2f\n", volumen);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Volumenes();
}

void volumen_paralelepipedo(){
    float largo, ancho, alto, volumen;
    printf("Ingrese el largo del paralelepípedo: ");
    scanf("%f", &largo);
    printf("Ingrese el ancho del paralelepípedo: ");
    scanf("%f", &ancho);
    printf("Ingrese el alto del paralelepípedo: ");
    scanf("%f", &alto);
    volumen = largo * ancho * alto;
    printf("El volumen del paralelepípedo es: %.2f\n", volumen);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Volumenes();
}

void volumen_cubo(){
    float lado, volumen;
    printf("Ingrese el lado del cubo: ");
    scanf("%f", &lado);
    volumen = lado * lado * lado;
    printf("El volumen del cubo es: %.2f\n", volumen);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Volumenes();
}

// switch case para los volúmenes
void Volumenes(){
    switch (submenu_volumenes()) {
        case 1:
            volumen_esfera();
            break;
        case 2:
            volumen_paralelepipedo();
            break;
        case 3:
            volumen_cubo();
            break;
        case 4:
            menu_principal();
            break;
        default:
            printf("Opción no válida\n");
            sleep(2);
            system("clear");
            Volumenes();
    }
}

void celsius_a_kelvin(){
    float celcius, kelvin;
    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &celcius);
    kelvin = celcius + 273.15;
    printf("La temperatura en Kelvin es: %.2f\n", kelvin);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Temperatura();
}

void kelvin_a_fahrenheit(){
    float kelvin, fahrenheit;
    printf("Ingrese la temperatura en Kelvin: ");
    scanf("%f", &kelvin);
    fahrenheit = (kelvin - 273.15) * (9/5) + 32;
    printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Temperatura();
}

void fahrenheit_a_celsius(){
    float fahrenheit, celcius;
    printf("Ingrese la temperatura en Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) * (5/9);
    printf("La temperatura en Celsius es: %.2f\n", celcius);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Temperatura();
}

// switch case para las temperaturas
void Temperatura(){
    switch (submenu_temperatura()) {
        case 1:
            celsius_a_kelvin();
            break;
        case 2:
            kelvin_a_fahrenheit();
            break;
        case 3:
            fahrenheit_a_celsius();
            break;
        case 4:
            menu_principal();
            break;
        default:
            printf("Opción no válida\n");
            sleep(2);
            system("clear");
            Temperatura();
    }
}

void pesos_a_dolares(){
    float pesos, dolares;
    printf("Ingrese la cantidad en pesos: ");
    scanf("%f", &pesos);
    dolares = pesos / 3.900; 
    printf("La cantidad en dólares es: %.2f\n", dolares);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Monedas();
}

void pesos_a_euros(){
    float pesos, euros;
    printf("Ingrese la cantidad en pesos: ");
    scanf("%f", &pesos);
    euros = pesos / 4.581; 
    printf("La cantidad en euros es: %.2f\n", euros);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Monedas();
}

void dolares_a_pesos(){
    float dolares, pesos;
    printf("Ingrese la cantidad en dólares: ");
    scanf("%f", &dolares);
    pesos = dolares * 3.900; 
    printf("La cantidad en pesos es: %.2f\n", pesos);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Monedas();
}

void euros_a_pesos(){
    float euros, pesos;
    printf("Ingrese la cantidad en euros: ");
    scanf("%f", &euros);
    pesos = euros * 4.581; 
    printf("La cantidad en pesos es: %.2f\n", pesos);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Monedas();
}

void dolares_a_euros(){
    float dolares, euros;
    printf("Ingrese la cantidad en dólares: ");
    scanf("%f", &dolares);
    euros = dolares * 0.92; 
    printf("La cantidad en euros es: %.2f\n", euros);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Monedas();
}

// switch case para las monedas
void Monedas(){
    switch (submenu_monedas()) {
        case 1:
            pesos_a_dolares();
            break;
        case 2:
            pesos_a_euros();
            break;
        case 3:
            dolares_a_pesos();
            break;
        case 4:
            euros_a_pesos();
            break;
        case 5:
            dolares_a_euros();
            break;
        case 6:
            menu_principal();
            break;
        default:
            printf("Opción no válida\n");
            sleep(2);
            system("clear");
            Monedas();
    }
}

void decimal_a_binario(){
    int decimal, binario = 0, i = 1;
    printf("Ingrese un número decimal: ");
    scanf("%d", &decimal);
    while (decimal != 0) {
        binario += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
    printf("El número binario es: %d\n", binario);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Sistemas_Numericos();
}

void decimal_a_octal(){
    int decimal, octal = 0, i = 1;
    printf("Ingrese un número decimal: ");
    scanf("%d", &decimal);
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    printf("El número octal es: %d\n", octal);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Sistemas_Numericos();
}

void decimal_a_hexadecimal(){
    int decimal;
    char hexadecimal[20];
    printf("Ingrese un número decimal: ");
    scanf("%d", &decimal);
    sprintf(hexadecimal, "%X", decimal);
    printf("El número hexadecimal es: %s\n", hexadecimal);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Sistemas_Numericos();
}

void binario_a_decimal(){
    int binario, decimal = 0, i = 0, rem;
    printf("Ingrese un número binario: ");
    scanf("%d", &binario);
    while (binario != 0) {
        rem = binario % 10;
        binario /= 10;
        decimal += rem * (1 << i);
        i++;
    }
    printf("El número decimal es: %d\n", decimal);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Sistemas_Numericos();
}

void octal_a_decimal(){
    int octal, decimal = 0, i = 0, rem;
    printf("Ingrese un número octal: ");
    scanf("%d", &octal);
    while (octal != 0) {
        rem = octal % 10;
        octal /= 10;
        decimal += rem * pow(8, i);
        i++;
    }
    printf("El número decimal es: %d\n", decimal);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Sistemas_Numericos();
}

void hexadecimal_a_decimal(){
    char hexadecimal[20];
    int decimal;
    printf("Ingrese un número hexadecimal: ");
    scanf("%s", hexadecimal);
    sscanf(hexadecimal, "%X", &decimal);
    printf("El número decimal es: %d\n", decimal);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Sistemas_Numericos();
}

// switch case para los sistemas numéricos
void Sistemas_Numericos(){
    switch (submenu_sistemas_numericos()) {
        case 1:
            decimal_a_binario();
            break;
        case 2:
            decimal_a_octal();
            break;
        case 3:
            decimal_a_hexadecimal();
            break;
        case 4:
            binario_a_decimal();
            break;
        case 5:
            octal_a_decimal();
            break;
        case 6:
            hexadecimal_a_decimal();
            break;
        case 7:
            menu_principal();
            break;
        default:
            printf("Opción no válida\n");
            sleep(2);
            system("clear");
            Sistemas_Numericos();
    }
}

void ordenamiento_arreglo(){
    int tamaño;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamaño);
    int arreglo[tamaño];
    for (int i = 0; i < tamaño; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    for (int i = 0; i < tamaño - 1; i++) {
        for (int j = 0; j < tamaño - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
    printf("Arreglo ordenado: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Arreglos_Matrices();
}

void buscar_valor_arreglo(){
    int tamaño, valor, encontrado = 0;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamaño);
    int arreglo[tamaño];
    for (int i = 0; i < tamaño; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("Ingrese el valor a buscar: ");
    scanf("%d", &valor);
    for (int i = 0; i < tamaño; i++) {
        if (arreglo[i] == valor) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        printf("El valor %d se encontró en el arreglo.\n", valor);
    } else {
        printf("El valor %d no se encontró en el arreglo.\n", valor);
    }
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Arreglos_Matrices();
}

void suma_matrices(){
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);
    int matriz1[filas][columnas], matriz2[filas][columnas], suma[filas][columnas];
    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);    
        }
    }
    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    // Sumar las matrices
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    printf("La matriz suma es:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", suma[i][j]);
        }
        printf("\n");
    }
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Arreglos_Matrices();
}

void multiplicacion_matrices(){
    int filas1, columnas1, filas2, columnas2;
    printf("Ingrese el número de filas de la primera matriz: ");
    scanf("%d", &filas1);
    printf("Ingrese el número de columnas de la primera matriz: ");
    scanf("%d", &columnas1);
    printf("Ingrese el número de filas de la segunda matriz: ");
    scanf("%d", &filas2);
    printf("Ingrese el número de columnas de la segunda matriz: ");
    scanf("%d", &columnas2);
    if (columnas1 != filas2) {
        printf("Error: El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz.\n");
        printf("Preciona ENTER para continuar...");
        getchar(); getchar();
        system("clear");
        Arreglos_Matrices();
        return;
    }
    int matriz1[filas1][columnas1], matriz2[filas2][columnas2], producto[filas1][columnas2];
    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);    
        }
    }
    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    // Inicializar la matriz producto a cero
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            producto[i][j] = 0;
        }
    }
    // Multiplicar las matrices
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            for (int k = 0; k < columnas1; k++) {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    printf("La matriz producto es:\n");
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            printf("%d ", producto[i][j]);  
        }
        printf("\n");
    }
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");    
    Arreglos_Matrices();
}

void buscar_valor_matriz(){
    int filas, columnas, valor, encontrado = 0;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Ingrese el valor a buscar: ");
    scanf("%d", &valor);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] == valor) {
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }
    if (encontrado) {
        printf("El valor %d se encontró en la matriz.\n", valor);
    } else {
        printf("El valor %d no se encontró en la matriz.\n", valor);
    }
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Arreglos_Matrices();
}

// switch case para arreglos y matrices
void Arreglos_Matrices(){
    switch (submenu_arreglos_matrices()) {
        case 1:
            ordenamiento_arreglo();
            break;
        case 2:
            buscar_valor_arreglo();
            break;
        case 3:
            suma_matrices();
            break;
        case 4:
            multiplicacion_matrices();
            break;
        case 5:
            buscar_valor_matriz();
            break;
        case 6:
            menu_principal();
            break;
        default:
            printf("Opción no válida\n");
            sleep(2);
            system("clear");
            Arreglos_Matrices();
    }
}

void distancia_entre_puntos(){
    float x1, y1, x2, y2, distancia;
    printf("Ingrese las coordenadas del primer punto (x1 y1): ");
    scanf("%f %f", &x1, &y1);  
    printf("Ingrese las coordenadas del segundo punto (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("La distancia entre los puntos es: %.2f\n", distancia);
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Varios();
}

void raices_cuadratica(){
    float a, b, c, discriminante, raiz1, raiz2;
    printf("Ingrese los coeficientes a, b y c de la ecuación cuadrática (ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c);
    discriminante = b * b - 4 * a * c;
    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las raíces son reales y diferentes:\n");
        printf("Raíz 1: %.2f\n", raiz1);
        printf("Raíz 2: %.2f\n", raiz2);
    } else if (discriminante == 0) {
        raiz1 = raiz2 = -b / (2 * a);
        printf("Las raíces son reales e iguales:\n");
        printf("Raíz: %.2f\n", raiz1);
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-discriminante) / (2 * a);
        printf("Las raíces son complejas y diferentes:\n");
        printf("Raíz 1: %.2f + %.2fi\n", real, imag);
        printf("Raíz 2: %.2f - %.2fi\n", real, imag);
    }
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Varios();
}

void factorial(){
    int n;
    unsigned long long factorial = 1;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: El número debe ser positivo.\n");
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("El factorial de %d es: %llu\n", n, factorial);
    }
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Varios();
}

void fibonacci(){
    int n, t1 = 0, t2 = 1, siguienteTermino;
    printf("Ingrese el número de términos de la serie Fibonacci: ");
    scanf("%d", &n);
    printf("Serie Fibonacci:\n");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        siguienteTermino = t1 + t2;
        t1 = t2;
        t2 = siguienteTermino;
    }
    printf("\n");
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Varios();
}

void primo(){
    int n, i, esPrimo = 1;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    if (n <= 1) {
        esPrimo = 0;
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }
    if (esPrimo) {
        printf("El número %d es primo.\n", n);
    } else {
        printf("El número %d no es primo.\n", n);
    }
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Varios();
}

void numero_amigos(){
    int num1, num2, suma1 = 0, suma2 = 0;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    for (int i = 1; i <= num1 / 2; i++) {
        if (num1 % i == 0) {
            suma1 += i;
        }
    }
    for (int i = 1; i <= num2 / 2; i++) {
        if (num2 % i == 0) {
            suma2 += i;
        }
    }
    if (suma1 == num2 && suma2 == num1) {
        printf("Los números %d y %d son amigos.\n", num1, num2);
    } else {
        printf("Los números %d y %d no son amigos.\n", num1, num2);
    }
    printf("Preciona ENTER para continuar...");
    getchar(); getchar();
    system("clear");
    Varios();
}

// switch case para varios
void Varios(){
    switch (submenu_varios()) {
        case 1:
            distancia_entre_puntos();
            break;
        case 2:
            raices_cuadratica();
            break;
        case 3:
            factorial();
            break;
        case 4:
            fibonacci();
            break;
        case 5:
            primo();
            break;
        case 6:
            numero_amigos();
            break;
        case 7:
            menu_principal();
            break;
        default:
            printf("Opción no válida\n");
            sleep(2);
            system("clear");
            Varios();
    }
}