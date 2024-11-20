#include <stdio.h>

int main() {

}

void insertionSort(int v[], int tam) {
    for(int i = 1; i < tam; ++i) {
        int temp = v[i];
        int j = i -1;
        while(j >= 0 && temp < v[j]) {
            v[j+1] = v[j];
            --j;
        }
        v[j+1] = temp;
    }
}

void bubbleSort(int v[], int tam) {
    for(int r = 1; r <= tam-1; ++r) {
        int trocou = 0;
        for(int i = 0; i < tam-1-r; ++i) {
            if(v[i] > v[i+1]) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = 1;
            }
        }
        if(!trocou) {
            break;
        }
    }
}

void bubblerSort(int v[], int tam) {
    for(int r = 1; r <= tam-1; ++r) {
        int trocou = 0;
        for(int i = 0; i < tam-1-r; ++i) {
            if(v[i] > v[i+1]) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = 1;
            }
        }
        if(!trocou) {
            break;
        }
    }
}

void bubblerSort(int v[], int tam) {
    for(int r = 1; r < tam-1; ++r) {
        int trocou = 0;
        for(int i = 0; i < tam-1-r; ++i) {
            if(v[i] > v[i+1]) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = 1;
            }
        }
        if(!trocou) {
            break;
        }
    }
}

void bubblerSort(int v[], int tam) {
    for(int r = 1; r < tam-1; ++r) {
        int trocou = 0;
        for(int i = 0; i < tam-1-r; ++i) {
            if(v[i] > v[i+1]) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = 1;
            }
        }
        if(!trocou) {
            break;
        }
    }
}

void insertionSort(int v[], int tam) {
    for(int i = 1; i < tam; ++i) {
        int temp = v[i];
        int j = i-1;
        while(j >= 0 && temp < v[j]) {
            v[j+1] = v[j];
            --j;
        }
        v[j+1] = temp;
    }
}

void bubbleSort(int v[], int tam) {
    for(int r = 1; r < tam-1; ++r) {
        int trocou = 0;
        for(int i = 0; i < tam-1-r; ++i) {
            if(v[i] > v[i+1]) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = 1;
            }
        }
        if(!trocou) {
            break;
        }
    }
}

void insertionSort(int v[], int tam) {
    for(int i = 1; i < tam; ++i) {
        int temp = v[i];
        int j = i-1;
        while(j >= 0 && temp < v[j]) {
            v[j+1] = v[j];
            --j;
        }
        v[j+1] = temp;
    }
}

void bubbleSort(int v[], int tam) {
    for(int r = 1; r < tam-1; ++r) {
        int trocou = 0;
        for(int i = 0; i < tam-1-r; ++i) {
            if(v[i] > v[i+1]) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = 1;
            }
        }
        if(!trocou) {
            break;
        }
    }
}

void insertionSort(int v[], int tam) {
    for(int i = 1; i < tam; ++i) {
        int temp = v[i];
        int j = i-1;
        while(j >= 0 && temp < v[j]) {
            v[i+j] = v[j];
            --j;
        }
        v[i+1] = temp;
    }
}

void selectionSort(int v[], int tam) {
    for(int i = 0; i < tam-1; ++i) {
        int menor = i;
        for(int j = i+1; j < tam; ++j) {
            if(v[j] < v[menor]) {
                menor = j;
            }
        }
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

void selectionSort(int v[], int tam) {
    for(int i = 0; i < tam-1; ++i) {
        int menor = i;
        for(int j = i+1; j < tam; ++j) {
            if(v[j] < v[menor]) {
                menor = j;
            }
        }
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

void selectionSort(int v[], int tam) {
    for(int i = 0; i < tam-1; ++i) {
        int menor = i;
        for(int j = i+1; j < tam; ++j) {
            if(v[j] < v[menor]) {
                menor = j;
            }
        }
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

void bubbleSort(int v[], int tam) {
    for(int r = 1; r < tam-1; ++r) {
        int trocou = 0;
        for(int i = 0; i < tam-1-r; ++i) {
            if(v[i] > v[i+1]) {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                trocou = 1;
            }
        }
        if(!trocou) {
            break;
        }
    }
}

void insertionSort(int v[], int tam) {
    for(int i = 1; i < tam; ++i) {
        int temp = v[i];
        int j = i-1;
        while(j >= 0 && temp < v[j]) {
            if(v[j] > v[j+1]) {
                v[j+1] = v[j];
                --j;
            }
        }
        v[j+1] = temp;
    }
}

void selectionSort(int v[], int tam) {
    for(int i = 0; i < tam-1; ++i) {
        int menor = i;
        for(int j = 1; i < tam; ++j) {
            if(v[j] < v[menor]) {
                menor = j;
            }
        }
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}